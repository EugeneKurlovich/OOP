#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>


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

void MainWindow::on_pushButton_2_clicked()
{
QString file = QFileDialog::getOpenFileName(this, "File");
if(!file.isEmpty())
{
    QFile sFile(file);
    if(sFile.open(QFile::ReadOnly | QFile::Text))
    {
        mFilename = file;
        QTextStream in(&sFile);
        QString texts = in.readAll();
        sFile.close();
        ui->text->setPlainText(texts);
    }
}

}

void MainWindow::on_pushButton_clicked()
{

    QFile sFile(mFilename);
    if(sFile.open(QFile::WriteOnly | QFile :: Text))
    {
        QTextStream out (&sFile);
        out << ui->text->toPlainText();
        sFile.flush();
        sFile.close();
    }

}
