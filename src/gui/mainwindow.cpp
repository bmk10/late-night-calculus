#include <QDebug>
#include <QMessageBox>
#include "src/gui/mainwindow.h"
#include "src/latex/latexwriter.h"
#include "src/parser/expressionparser.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString expression = this->ui->expression->toPlainText();
    if (expression == "")
    {
        QMessageBox msg;
        msg.setText("The Expression Is Empty");
        msg.exec();
    }
    else
    {
        //create parser class
        ExpressionParser formula(expression);
        LatexWriter latexWriter;
    }
}
