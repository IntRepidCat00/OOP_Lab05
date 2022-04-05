/********************************************************************************
** Form generated from reading UI file 'lab5_pnr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB5_PNR_H
#define UI_LAB5_PNR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab5_PNR
{
public:
    QWidget *centralwidget_pnr;
    QGroupBox *vector1Group_pnr;
    QLabel *axisXLabelV1_pnr;
    QLabel *axisYLabelV1_pnr;
    QLabel *axisZLabelV1_pnr;
    QLabel *lengthLabelV1_pnr;
    QLabel *lengthValueLabelV1_pnr;
    QLabel *axisZValueLabelV1_pnr;
    QLabel *axisYValueLabelV1_pnr;
    QLabel *axisXValueLabelV1_pnr;
    QGroupBox *vector2Group_pnr;
    QLabel *axisZLabelV2_pnr;
    QLabel *axisYLabelV2_pnr;
    QLabel *axisXLabelV2_pnr;
    QLabel *lengthLabelV2_pnr;
    QLabel *lengthValueLabelV2_pnr;
    QLabel *axisYValueLabelV2_pnr;
    QLabel *axisXValueLabelV2_pnr;
    QLabel *axisZValueLabelV2_pnr;
    QGroupBox *operationGroup_pnr;
    QLabel *vectorForOperLabel_pnr;
    QRadioButton *radioButtonV1_pnr;
    QRadioButton *radioButtonV2_pnr;
    QLabel *axisZLabelOper_pnr_2;
    QLabel *axisXLabelOper_pnr_2;
    QLabel *axisYLabelOper_pnr_2;
    QLineEdit *lineEditAxisX_pnr;
    QLineEdit *lineEditAxisY_pnr;
    QLineEdit *lineEditAxisZ_pnr;
    QPushButton *btnSetX_pnr;
    QPushButton *btnSetY_pnr;
    QPushButton *btnSetZ_pnr;
    QPushButton *btnSetAll_pnr;
    QPushButton *btnAddVector_pnr;
    QPushButton *btnSubtrVector_pnr;
    QPushButton *btnMultByScalar_pnr;
    QPushButton *btnCalcLength_pnr;
    QPushButton *btnCalcScalarProd_pnr;
    QPushButton *btnCalcVectorProd_pnr;
    QLineEdit *lineEditNum_pnr;
    QLabel *numLabelOper_pnr;
    QLabel *scalarProdLabel_pnr;
    QLabel *scalarProdValueLabel_pnr;
    QLabel *vectorProdLabel_pnr;
    QLabel *vectorProdValueLabel_pnr;

    void setupUi(QMainWindow *Lab5_PNR)
    {
        if (Lab5_PNR->objectName().isEmpty())
            Lab5_PNR->setObjectName(QString::fromUtf8("Lab5_PNR"));
        Lab5_PNR->resize(615, 670);
        centralwidget_pnr = new QWidget(Lab5_PNR);
        centralwidget_pnr->setObjectName(QString::fromUtf8("centralwidget_pnr"));
        vector1Group_pnr = new QGroupBox(centralwidget_pnr);
        vector1Group_pnr->setObjectName(QString::fromUtf8("vector1Group_pnr"));
        vector1Group_pnr->setGeometry(QRect(10, 10, 291, 211));
        QFont font;
        font.setPointSize(12);
        vector1Group_pnr->setFont(font);
        axisXLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisXLabelV1_pnr->setObjectName(QString::fromUtf8("axisXLabelV1_pnr"));
        axisXLabelV1_pnr->setGeometry(QRect(10, 40, 63, 31));
        axisYLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisYLabelV1_pnr->setObjectName(QString::fromUtf8("axisYLabelV1_pnr"));
        axisYLabelV1_pnr->setGeometry(QRect(10, 80, 63, 31));
        axisZLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisZLabelV1_pnr->setObjectName(QString::fromUtf8("axisZLabelV1_pnr"));
        axisZLabelV1_pnr->setGeometry(QRect(10, 120, 63, 31));
        lengthLabelV1_pnr = new QLabel(vector1Group_pnr);
        lengthLabelV1_pnr->setObjectName(QString::fromUtf8("lengthLabelV1_pnr"));
        lengthLabelV1_pnr->setGeometry(QRect(10, 160, 63, 31));
        lengthValueLabelV1_pnr = new QLabel(vector1Group_pnr);
        lengthValueLabelV1_pnr->setObjectName(QString::fromUtf8("lengthValueLabelV1_pnr"));
        lengthValueLabelV1_pnr->setGeometry(QRect(90, 160, 191, 31));
        axisZValueLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisZValueLabelV1_pnr->setObjectName(QString::fromUtf8("axisZValueLabelV1_pnr"));
        axisZValueLabelV1_pnr->setGeometry(QRect(90, 120, 191, 31));
        axisYValueLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisYValueLabelV1_pnr->setObjectName(QString::fromUtf8("axisYValueLabelV1_pnr"));
        axisYValueLabelV1_pnr->setGeometry(QRect(90, 80, 191, 31));
        axisXValueLabelV1_pnr = new QLabel(vector1Group_pnr);
        axisXValueLabelV1_pnr->setObjectName(QString::fromUtf8("axisXValueLabelV1_pnr"));
        axisXValueLabelV1_pnr->setGeometry(QRect(90, 40, 191, 31));
        vector2Group_pnr = new QGroupBox(centralwidget_pnr);
        vector2Group_pnr->setObjectName(QString::fromUtf8("vector2Group_pnr"));
        vector2Group_pnr->setGeometry(QRect(310, 10, 291, 211));
        vector2Group_pnr->setFont(font);
        axisZLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisZLabelV2_pnr->setObjectName(QString::fromUtf8("axisZLabelV2_pnr"));
        axisZLabelV2_pnr->setGeometry(QRect(10, 120, 63, 31));
        axisYLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisYLabelV2_pnr->setObjectName(QString::fromUtf8("axisYLabelV2_pnr"));
        axisYLabelV2_pnr->setGeometry(QRect(10, 80, 63, 31));
        axisXLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisXLabelV2_pnr->setObjectName(QString::fromUtf8("axisXLabelV2_pnr"));
        axisXLabelV2_pnr->setGeometry(QRect(10, 40, 63, 31));
        lengthLabelV2_pnr = new QLabel(vector2Group_pnr);
        lengthLabelV2_pnr->setObjectName(QString::fromUtf8("lengthLabelV2_pnr"));
        lengthLabelV2_pnr->setGeometry(QRect(10, 160, 63, 31));
        lengthValueLabelV2_pnr = new QLabel(vector2Group_pnr);
        lengthValueLabelV2_pnr->setObjectName(QString::fromUtf8("lengthValueLabelV2_pnr"));
        lengthValueLabelV2_pnr->setGeometry(QRect(90, 160, 191, 31));
        axisYValueLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisYValueLabelV2_pnr->setObjectName(QString::fromUtf8("axisYValueLabelV2_pnr"));
        axisYValueLabelV2_pnr->setGeometry(QRect(90, 80, 191, 31));
        axisXValueLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisXValueLabelV2_pnr->setObjectName(QString::fromUtf8("axisXValueLabelV2_pnr"));
        axisXValueLabelV2_pnr->setGeometry(QRect(90, 40, 191, 31));
        axisZValueLabelV2_pnr = new QLabel(vector2Group_pnr);
        axisZValueLabelV2_pnr->setObjectName(QString::fromUtf8("axisZValueLabelV2_pnr"));
        axisZValueLabelV2_pnr->setGeometry(QRect(90, 120, 191, 31));
        operationGroup_pnr = new QGroupBox(centralwidget_pnr);
        operationGroup_pnr->setObjectName(QString::fromUtf8("operationGroup_pnr"));
        operationGroup_pnr->setGeometry(QRect(10, 260, 591, 401));
        operationGroup_pnr->setFont(font);
        vectorForOperLabel_pnr = new QLabel(operationGroup_pnr);
        vectorForOperLabel_pnr->setObjectName(QString::fromUtf8("vectorForOperLabel_pnr"));
        vectorForOperLabel_pnr->setGeometry(QRect(10, 40, 211, 31));
        radioButtonV1_pnr = new QRadioButton(operationGroup_pnr);
        radioButtonV1_pnr->setObjectName(QString::fromUtf8("radioButtonV1_pnr"));
        radioButtonV1_pnr->setGeometry(QRect(220, 40, 110, 31));
        radioButtonV1_pnr->setChecked(true);
        radioButtonV2_pnr = new QRadioButton(operationGroup_pnr);
        radioButtonV2_pnr->setObjectName(QString::fromUtf8("radioButtonV2_pnr"));
        radioButtonV2_pnr->setGeometry(QRect(340, 40, 110, 31));
        axisZLabelOper_pnr_2 = new QLabel(operationGroup_pnr);
        axisZLabelOper_pnr_2->setObjectName(QString::fromUtf8("axisZLabelOper_pnr_2"));
        axisZLabelOper_pnr_2->setGeometry(QRect(10, 170, 63, 31));
        axisXLabelOper_pnr_2 = new QLabel(operationGroup_pnr);
        axisXLabelOper_pnr_2->setObjectName(QString::fromUtf8("axisXLabelOper_pnr_2"));
        axisXLabelOper_pnr_2->setGeometry(QRect(10, 90, 63, 31));
        axisYLabelOper_pnr_2 = new QLabel(operationGroup_pnr);
        axisYLabelOper_pnr_2->setObjectName(QString::fromUtf8("axisYLabelOper_pnr_2"));
        axisYLabelOper_pnr_2->setGeometry(QRect(10, 130, 63, 31));
        lineEditAxisX_pnr = new QLineEdit(operationGroup_pnr);
        lineEditAxisX_pnr->setObjectName(QString::fromUtf8("lineEditAxisX_pnr"));
        lineEditAxisX_pnr->setGeometry(QRect(80, 90, 501, 31));
        lineEditAxisY_pnr = new QLineEdit(operationGroup_pnr);
        lineEditAxisY_pnr->setObjectName(QString::fromUtf8("lineEditAxisY_pnr"));
        lineEditAxisY_pnr->setGeometry(QRect(80, 130, 501, 31));
        lineEditAxisZ_pnr = new QLineEdit(operationGroup_pnr);
        lineEditAxisZ_pnr->setObjectName(QString::fromUtf8("lineEditAxisZ_pnr"));
        lineEditAxisZ_pnr->setGeometry(QRect(80, 170, 501, 31));
        btnSetX_pnr = new QPushButton(operationGroup_pnr);
        btnSetX_pnr->setObjectName(QString::fromUtf8("btnSetX_pnr"));
        btnSetX_pnr->setGeometry(QRect(20, 250, 131, 41));
        btnSetY_pnr = new QPushButton(operationGroup_pnr);
        btnSetY_pnr->setObjectName(QString::fromUtf8("btnSetY_pnr"));
        btnSetY_pnr->setGeometry(QRect(160, 250, 131, 41));
        btnSetZ_pnr = new QPushButton(operationGroup_pnr);
        btnSetZ_pnr->setObjectName(QString::fromUtf8("btnSetZ_pnr"));
        btnSetZ_pnr->setGeometry(QRect(300, 250, 131, 41));
        btnSetAll_pnr = new QPushButton(operationGroup_pnr);
        btnSetAll_pnr->setObjectName(QString::fromUtf8("btnSetAll_pnr"));
        btnSetAll_pnr->setGeometry(QRect(440, 250, 131, 41));
        btnAddVector_pnr = new QPushButton(operationGroup_pnr);
        btnAddVector_pnr->setObjectName(QString::fromUtf8("btnAddVector_pnr"));
        btnAddVector_pnr->setGeometry(QRect(20, 300, 131, 41));
        btnSubtrVector_pnr = new QPushButton(operationGroup_pnr);
        btnSubtrVector_pnr->setObjectName(QString::fromUtf8("btnSubtrVector_pnr"));
        btnSubtrVector_pnr->setGeometry(QRect(160, 300, 131, 41));
        QFont font1;
        font1.setPointSize(9);
        btnSubtrVector_pnr->setFont(font1);
        btnMultByScalar_pnr = new QPushButton(operationGroup_pnr);
        btnMultByScalar_pnr->setObjectName(QString::fromUtf8("btnMultByScalar_pnr"));
        btnMultByScalar_pnr->setGeometry(QRect(300, 300, 131, 41));
        btnMultByScalar_pnr->setFont(font1);
        btnCalcLength_pnr = new QPushButton(operationGroup_pnr);
        btnCalcLength_pnr->setObjectName(QString::fromUtf8("btnCalcLength_pnr"));
        btnCalcLength_pnr->setGeometry(QRect(440, 300, 131, 41));
        btnCalcScalarProd_pnr = new QPushButton(operationGroup_pnr);
        btnCalcScalarProd_pnr->setObjectName(QString::fromUtf8("btnCalcScalarProd_pnr"));
        btnCalcScalarProd_pnr->setGeometry(QRect(20, 350, 271, 41));
        btnCalcScalarProd_pnr->setFont(font);
        btnCalcVectorProd_pnr = new QPushButton(operationGroup_pnr);
        btnCalcVectorProd_pnr->setObjectName(QString::fromUtf8("btnCalcVectorProd_pnr"));
        btnCalcVectorProd_pnr->setGeometry(QRect(300, 350, 271, 41));
        btnCalcVectorProd_pnr->setFont(font);
        lineEditNum_pnr = new QLineEdit(operationGroup_pnr);
        lineEditNum_pnr->setObjectName(QString::fromUtf8("lineEditNum_pnr"));
        lineEditNum_pnr->setGeometry(QRect(80, 210, 501, 31));
        numLabelOper_pnr = new QLabel(operationGroup_pnr);
        numLabelOper_pnr->setObjectName(QString::fromUtf8("numLabelOper_pnr"));
        numLabelOper_pnr->setGeometry(QRect(10, 210, 63, 31));
        scalarProdLabel_pnr = new QLabel(centralwidget_pnr);
        scalarProdLabel_pnr->setObjectName(QString::fromUtf8("scalarProdLabel_pnr"));
        scalarProdLabel_pnr->setGeometry(QRect(20, 230, 131, 31));
        scalarProdLabel_pnr->setFont(font);
        scalarProdValueLabel_pnr = new QLabel(centralwidget_pnr);
        scalarProdValueLabel_pnr->setObjectName(QString::fromUtf8("scalarProdValueLabel_pnr"));
        scalarProdValueLabel_pnr->setGeometry(QRect(160, 230, 141, 31));
        scalarProdValueLabel_pnr->setFont(font);
        vectorProdLabel_pnr = new QLabel(centralwidget_pnr);
        vectorProdLabel_pnr->setObjectName(QString::fromUtf8("vectorProdLabel_pnr"));
        vectorProdLabel_pnr->setGeometry(QRect(310, 230, 141, 31));
        vectorProdLabel_pnr->setFont(font);
        vectorProdValueLabel_pnr = new QLabel(centralwidget_pnr);
        vectorProdValueLabel_pnr->setObjectName(QString::fromUtf8("vectorProdValueLabel_pnr"));
        vectorProdValueLabel_pnr->setGeometry(QRect(460, 230, 141, 31));
        vectorProdValueLabel_pnr->setFont(font);
        Lab5_PNR->setCentralWidget(centralwidget_pnr);

        retranslateUi(Lab5_PNR);

        QMetaObject::connectSlotsByName(Lab5_PNR);
    } // setupUi

    void retranslateUi(QMainWindow *Lab5_PNR)
    {
        Lab5_PNR->setWindowTitle(QCoreApplication::translate("Lab5_PNR", "Lab5_PNR", nullptr));
        vector1Group_pnr->setTitle(QCoreApplication::translate("Lab5_PNR", "Vector 1", nullptr));
        axisXLabelV1_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Axis X:", nullptr));
        axisYLabelV1_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Axis Y:", nullptr));
        axisZLabelV1_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Axis Z:", nullptr));
        lengthLabelV1_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Length:", nullptr));
        lengthValueLabelV1_pnr->setText(QCoreApplication::translate("Lab5_PNR", "-", nullptr));
        axisZValueLabelV1_pnr->setText(QCoreApplication::translate("Lab5_PNR", "-", nullptr));
        axisYValueLabelV1_pnr->setText(QCoreApplication::translate("Lab5_PNR", "-", nullptr));
        axisXValueLabelV1_pnr->setText(QCoreApplication::translate("Lab5_PNR", "-", nullptr));
        vector2Group_pnr->setTitle(QCoreApplication::translate("Lab5_PNR", "Vector 1", nullptr));
        axisZLabelV2_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Axis Z:", nullptr));
        axisYLabelV2_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Axis Y:", nullptr));
        axisXLabelV2_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Axis X:", nullptr));
        lengthLabelV2_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Length:", nullptr));
        lengthValueLabelV2_pnr->setText(QCoreApplication::translate("Lab5_PNR", "-", nullptr));
        axisYValueLabelV2_pnr->setText(QCoreApplication::translate("Lab5_PNR", "-", nullptr));
        axisXValueLabelV2_pnr->setText(QCoreApplication::translate("Lab5_PNR", "-", nullptr));
        axisZValueLabelV2_pnr->setText(QCoreApplication::translate("Lab5_PNR", "-", nullptr));
        operationGroup_pnr->setTitle(QCoreApplication::translate("Lab5_PNR", "Operation", nullptr));
        vectorForOperLabel_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Vector for operation:", nullptr));
        radioButtonV1_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Vector 1", nullptr));
        radioButtonV2_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Vector 2", nullptr));
        axisZLabelOper_pnr_2->setText(QCoreApplication::translate("Lab5_PNR", "Axis Z:", nullptr));
        axisXLabelOper_pnr_2->setText(QCoreApplication::translate("Lab5_PNR", "Axis X:", nullptr));
        axisYLabelOper_pnr_2->setText(QCoreApplication::translate("Lab5_PNR", "Axis Y:", nullptr));
        btnSetX_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Set X", nullptr));
        btnSetY_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Set Y", nullptr));
        btnSetZ_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Set Z", nullptr));
        btnSetAll_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Set All", nullptr));
        btnAddVector_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Add Vector", nullptr));
        btnSubtrVector_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Subtract Vector", nullptr));
        btnMultByScalar_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Multiply by Scalar", nullptr));
        btnCalcLength_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Calc Length", nullptr));
        btnCalcScalarProd_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Calc Scalar Product", nullptr));
        btnCalcVectorProd_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Calc Vector Product", nullptr));
        lineEditNum_pnr->setText(QString());
        numLabelOper_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Num:", nullptr));
        scalarProdLabel_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Scalar Product:", nullptr));
        scalarProdValueLabel_pnr->setText(QCoreApplication::translate("Lab5_PNR", "-", nullptr));
        vectorProdLabel_pnr->setText(QCoreApplication::translate("Lab5_PNR", "Vector Product:", nullptr));
        vectorProdValueLabel_pnr->setText(QCoreApplication::translate("Lab5_PNR", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab5_PNR: public Ui_Lab5_PNR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB5_PNR_H
