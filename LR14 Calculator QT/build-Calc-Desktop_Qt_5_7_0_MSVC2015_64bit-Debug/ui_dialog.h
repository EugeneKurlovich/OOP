/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *first;
    QLineEdit *second;
    QLabel *label_3;
    QLineEdit *res;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        Dialog->setAcceptDrops(true);
        Dialog->setAutoFillBackground(false);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 91, 16));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 40, 91, 16));
        first = new QLineEdit(Dialog);
        first->setObjectName(QStringLiteral("first"));
        first->setGeometry(QRect(30, 60, 113, 21));
        second = new QLineEdit(Dialog);
        second->setObjectName(QStringLiteral("second"));
        second->setGeometry(QRect(180, 60, 113, 21));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 140, 71, 16));
        res = new QLineEdit(Dialog);
        res->setObjectName(QStringLiteral("res"));
        res->setGeometry(QRect(170, 140, 113, 21));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 100, 80, 21));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 100, 80, 21));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 100, 80, 21));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 100, 80, 21));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Calculator", 0));
        label->setText(QApplication::translate("Dialog", "\320\237\320\265\321\200\320\262\321\213\320\271 \320\276\320\277\320\265\321\200\320\260\320\275\320\264", 0));
        label_2->setText(QApplication::translate("Dialog", "\320\222\321\202\320\276\321\200\320\276\320\271 \320\276\320\277\320\265\321\200\320\260\320\275\320\264", 0));
        label_3->setText(QApplication::translate("Dialog", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 : ", 0));
        pushButton->setText(QApplication::translate("Dialog", "+", 0));
        pushButton_2->setText(QApplication::translate("Dialog", "-", 0));
        pushButton_3->setText(QApplication::translate("Dialog", "*", 0));
        pushButton_4->setText(QApplication::translate("Dialog", "/", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
