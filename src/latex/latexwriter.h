#ifndef LATEXWRITER_H
#define LATEXWRITER_H
#include <QFile>
#include <QProcess>
#include <QTextStream>

class LatexWriter
{
public:
    LatexWriter();
    ~LatexWriter();
private:
    QFile m_latexFile;
};

#endif // LATEXWRITER_H
