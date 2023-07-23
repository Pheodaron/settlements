/********************************************************************************
** Form generated from reading UI file 'editdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *m_acceptButton;
    QPushButton *m_cancelButton;
    QLineEdit *m_latLineEdit;
    QLabel *m_lonLabel;
    QLineEdit *m_descriptionLineEdit;
    QLabel *m_latLabel;
    QLabel *m_nameEng;
    QLineEdit *m_countryLineEdit;
    QComboBox *m_typeComboBox;
    QLabel *m_typeLabel;
    QLabel *m_countryLabel;
    QLineEdit *m_mapPointLineEdit;
    QLabel *m_mapPointLabel;
    QLineEdit *m_nameEngLineEdit;
    QLineEdit *m_populationLineEdit;
    QLabel *m_prefixLabel;
    QLineEdit *m_nameLineEdit;
    QLineEdit *m_lonLineEdit;
    QLabel *m_populationLabel;
    QLabel *m_descriptionLabel;
    QLineEdit *m_prefixLineEdit;
    QLabel *m_nameLabel;
    QLineEdit *m_altLineEdit;
    QLabel *m_altLabel;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName(QString::fromUtf8("EditDialog"));
        EditDialog->resize(430, 454);
        gridLayout = new QGridLayout(EditDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_acceptButton = new QPushButton(EditDialog);
        m_acceptButton->setObjectName(QString::fromUtf8("m_acceptButton"));

        horizontalLayout_2->addWidget(m_acceptButton);

        m_cancelButton = new QPushButton(EditDialog);
        m_cancelButton->setObjectName(QString::fromUtf8("m_cancelButton"));

        horizontalLayout_2->addWidget(m_cancelButton);


        gridLayout->addLayout(horizontalLayout_2, 12, 1, 1, 1);

        m_latLineEdit = new QLineEdit(EditDialog);
        m_latLineEdit->setObjectName(QString::fromUtf8("m_latLineEdit"));

        gridLayout->addWidget(m_latLineEdit, 8, 1, 1, 1);

        m_lonLabel = new QLabel(EditDialog);
        m_lonLabel->setObjectName(QString::fromUtf8("m_lonLabel"));

        gridLayout->addWidget(m_lonLabel, 9, 0, 1, 1);

        m_descriptionLineEdit = new QLineEdit(EditDialog);
        m_descriptionLineEdit->setObjectName(QString::fromUtf8("m_descriptionLineEdit"));

        gridLayout->addWidget(m_descriptionLineEdit, 11, 1, 1, 1);

        m_latLabel = new QLabel(EditDialog);
        m_latLabel->setObjectName(QString::fromUtf8("m_latLabel"));

        gridLayout->addWidget(m_latLabel, 8, 0, 1, 1);

        m_nameEng = new QLabel(EditDialog);
        m_nameEng->setObjectName(QString::fromUtf8("m_nameEng"));

        gridLayout->addWidget(m_nameEng, 4, 0, 1, 1);

        m_countryLineEdit = new QLineEdit(EditDialog);
        m_countryLineEdit->setObjectName(QString::fromUtf8("m_countryLineEdit"));

        gridLayout->addWidget(m_countryLineEdit, 7, 1, 1, 1);

        m_typeComboBox = new QComboBox(EditDialog);
        m_typeComboBox->setObjectName(QString::fromUtf8("m_typeComboBox"));
        m_typeComboBox->setEditable(true);

        gridLayout->addWidget(m_typeComboBox, 0, 1, 1, 1);

        m_typeLabel = new QLabel(EditDialog);
        m_typeLabel->setObjectName(QString::fromUtf8("m_typeLabel"));

        gridLayout->addWidget(m_typeLabel, 0, 0, 1, 1);

        m_countryLabel = new QLabel(EditDialog);
        m_countryLabel->setObjectName(QString::fromUtf8("m_countryLabel"));

        gridLayout->addWidget(m_countryLabel, 7, 0, 1, 1);

        m_mapPointLineEdit = new QLineEdit(EditDialog);
        m_mapPointLineEdit->setObjectName(QString::fromUtf8("m_mapPointLineEdit"));

        gridLayout->addWidget(m_mapPointLineEdit, 5, 1, 1, 1);

        m_mapPointLabel = new QLabel(EditDialog);
        m_mapPointLabel->setObjectName(QString::fromUtf8("m_mapPointLabel"));

        gridLayout->addWidget(m_mapPointLabel, 5, 0, 1, 1);

        m_nameEngLineEdit = new QLineEdit(EditDialog);
        m_nameEngLineEdit->setObjectName(QString::fromUtf8("m_nameEngLineEdit"));

        gridLayout->addWidget(m_nameEngLineEdit, 4, 1, 1, 1);

        m_populationLineEdit = new QLineEdit(EditDialog);
        m_populationLineEdit->setObjectName(QString::fromUtf8("m_populationLineEdit"));

        gridLayout->addWidget(m_populationLineEdit, 6, 1, 1, 1);

        m_prefixLabel = new QLabel(EditDialog);
        m_prefixLabel->setObjectName(QString::fromUtf8("m_prefixLabel"));

        gridLayout->addWidget(m_prefixLabel, 2, 0, 1, 1);

        m_nameLineEdit = new QLineEdit(EditDialog);
        m_nameLineEdit->setObjectName(QString::fromUtf8("m_nameLineEdit"));

        gridLayout->addWidget(m_nameLineEdit, 3, 1, 1, 1);

        m_lonLineEdit = new QLineEdit(EditDialog);
        m_lonLineEdit->setObjectName(QString::fromUtf8("m_lonLineEdit"));

        gridLayout->addWidget(m_lonLineEdit, 9, 1, 1, 1);

        m_populationLabel = new QLabel(EditDialog);
        m_populationLabel->setObjectName(QString::fromUtf8("m_populationLabel"));

        gridLayout->addWidget(m_populationLabel, 6, 0, 1, 1);

        m_descriptionLabel = new QLabel(EditDialog);
        m_descriptionLabel->setObjectName(QString::fromUtf8("m_descriptionLabel"));

        gridLayout->addWidget(m_descriptionLabel, 11, 0, 1, 1);

        m_prefixLineEdit = new QLineEdit(EditDialog);
        m_prefixLineEdit->setObjectName(QString::fromUtf8("m_prefixLineEdit"));

        gridLayout->addWidget(m_prefixLineEdit, 2, 1, 1, 1);

        m_nameLabel = new QLabel(EditDialog);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));

        gridLayout->addWidget(m_nameLabel, 3, 0, 1, 1);

        m_altLineEdit = new QLineEdit(EditDialog);
        m_altLineEdit->setObjectName(QString::fromUtf8("m_altLineEdit"));

        gridLayout->addWidget(m_altLineEdit, 10, 1, 1, 1);

        m_altLabel = new QLabel(EditDialog);
        m_altLabel->setObjectName(QString::fromUtf8("m_altLabel"));

        gridLayout->addWidget(m_altLabel, 10, 0, 1, 1);


        retranslateUi(EditDialog);

        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QCoreApplication::translate("EditDialog", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        m_acceptButton->setText(QCoreApplication::translate("EditDialog", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        m_cancelButton->setText(QCoreApplication::translate("EditDialog", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        m_lonLabel->setText(QCoreApplication::translate("EditDialog", "\320\224\320\276\320\273\320\263\320\276\321\202\320\260", nullptr));
        m_latLabel->setText(QCoreApplication::translate("EditDialog", "\320\250\320\270\321\200\320\276\321\202\320\260", nullptr));
        m_nameEng->setText(QCoreApplication::translate("EditDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265(\320\220\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271)", nullptr));
        m_typeLabel->setText(QCoreApplication::translate("EditDialog", "\320\242\320\270\320\277", nullptr));
        m_countryLabel->setText(QCoreApplication::translate("EditDialog", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        m_mapPointLabel->setText(QCoreApplication::translate("EditDialog", "\320\242\320\276\321\207\320\272\320\260 \320\277\321\200\320\270\320\262\321\217\320\267\320\272\320\270", nullptr));
        m_prefixLabel->setText(QCoreApplication::translate("EditDialog", "\320\237\321\200\320\265\321\204\320\270\320\272\321\201", nullptr));
        m_populationLabel->setText(QCoreApplication::translate("EditDialog", "\320\235\320\260\321\201\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        m_descriptionLabel->setText(QCoreApplication::translate("EditDialog", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        m_nameLabel->setText(QCoreApplication::translate("EditDialog", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        m_altLabel->setText(QCoreApplication::translate("EditDialog", "\320\222\321\213\321\201\320\276\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
