/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *Title;
    QPushButton *QuitBut;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(598, 315);
        Title = new QLabel(Widget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(140, 60, 351, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Adobe Devanagari")});
        font.setPointSize(22);
        Title->setFont(font);
        QuitBut = new QPushButton(Widget);
        QuitBut->setObjectName(QString::fromUtf8("QuitBut"));
        QuitBut->setGeometry(QRect(480, 260, 80, 20));

        retranslateUi(Widget);
        QObject::connect(QuitBut, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Title->setText(QCoreApplication::translate("Widget", "\347\250\213\345\272\217\350\256\276\350\256\241\345\237\272\347\241\200\346\210\220\347\273\251\347\273\237\350\256\241\347\263\273\347\273\237", nullptr));
        QuitBut->setText(QCoreApplication::translate("Widget", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
