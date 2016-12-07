#include "dialog.h"
#include "ui_dialog.h"
#include <QString>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString first = ui->first->text();
    QString second = ui->second->text();

    float firstNum = first.toFloat();
    float secondNum = second.toFloat();

    float result = firstNum + secondNum;
    ui->res -> setText(QString::number (result));
}

void Dialog::on_pushButton_2_clicked()
{
    QString first = ui->first->text();
    QString second = ui->second->text();

    float firstNum = first.toFloat();
    float secondNum = second.toFloat();

    float result = firstNum - secondNum;
    ui->res -> setText(QString::number (result));
}

void Dialog::on_pushButton_3_clicked()
{
    QString first = ui->first->text();
    QString second = ui->second->text();

    float firstNum = first.toFloat();
    float secondNum = second.toFloat();

    float result = firstNum * secondNum;
    ui->res -> setText(QString::number (result));
}

void Dialog::on_pushButton_4_clicked()
{
    QString first = ui->first->text();
    QString second = ui->second->text();

    float firstNum = first.toFloat();
    float secondNum = second.toFloat();

    float result = firstNum / secondNum;
    ui->res -> setText(QString::number (result));
}
