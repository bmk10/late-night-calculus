#include "latexwriter.h"

LatexWriter::LatexWriter()
{
    m_latexFile.setFileName("../Calculus/src/latex/test.tex");
    m_latexFile.open(QIODevice::WriteOnly);

    QTextStream out(&m_latexFile);
    out << "\\documentclass[a4paper]{article}\n\n";
    out << "\\begin{document}\n";
    out << "Testing Latex from c++\n";
    out << "\\end{document}\n";

}

LatexWriter::~LatexWriter()
{
    m_latexFile.close();
    QProcess process;
    process.start("pdflatex", QStringList() <<"-interaction=batchmode" << "-output-directory=../Calculus/src/latex/" << m_latexFile.fileName());
    process.waitForFinished();
    m_latexFile.remove();
}
