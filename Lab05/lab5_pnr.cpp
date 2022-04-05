// Variant - 3
#include "lab5_pnr.h"
#include "./ui_lab5_pnr.h"
#include <cmath>

Lab5_PNR::Lab5_PNR(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lab5_PNR)
{
    ui->setupUi(this);
}

Lab5_PNR::~Lab5_PNR()
{
    delete ui;
}

void Vector::addVector(double x2, double y2, double z2)
{
    axisX += x2;
    axisY += y2;
    axisZ += z2;
}

void Vector::subtractVector(double x2, double y2, double z2)
{
    axisX -= x2;
    axisY -= y2;
    axisZ -= z2;
}

void Vector::multiplyByScalar(double mult)
{
    axisX *= mult;
    axisY *= mult;
    axisZ *= mult;
}

double Vector::calcVectorLength()
{
    return sqrt(axisX*axisX + axisY*axisY + axisZ*axisZ);
}

double Vector::calcScalarProduct(double x2, double y2, double z2)
{
    return (axisX*x2 + axisY*y2 + axisZ*z2);
}

double Vector::calcVectorProduct(double x2, double y2, double z2)
{
    double newX, newY, newZ;

    newX = axisY * z2 - y2 * axisZ;
    newY = (axisX * z2 - x2 * axisZ)*(-1);
    newZ = axisX * y2 - x2 * axisY;

    axisX = newX;
    axisY = newY;
    axisZ = newZ;

    return calcVectorLength();
}

void Lab5_PNR::updateData()
{
    ui->axisXValueLabelV1_pnr->setText(QString::number(v1.getAxisX()));
    ui->axisXValueLabelV2_pnr->setText(QString::number(v2.getAxisX()));

    ui->axisYValueLabelV1_pnr->setText(QString::number(v1.getAxisY()));
    ui->axisYValueLabelV2_pnr->setText(QString::number(v2.getAxisY()));

    ui->axisZValueLabelV1_pnr->setText(QString::number(v1.getAxisZ()));
    ui->axisZValueLabelV2_pnr->setText(QString::number(v2.getAxisZ()));
}

void Lab5_PNR::on_btnSetX_pnr_clicked()
{
    double number;
    if(!ui->lineEditAxisX_pnr->text().isEmpty())
    {
        number = ui->lineEditAxisX_pnr->text().toDouble();
        if(ui->radioButtonV1_pnr->isChecked())
        {
            v1.setAxisX(number);
        } else if(ui->radioButtonV2_pnr->isChecked())
        {
            v2.setAxisX(number);
        }
        updateData();
    }

}


void Lab5_PNR::on_btnSetY_pnr_clicked()
{
    double number;
    if(!ui->lineEditAxisY_pnr->text().isEmpty())
    {
        number = ui->lineEditAxisY_pnr->text().toDouble();
        if(ui->radioButtonV1_pnr->isChecked())
        {
            v1.setAxisY(number);
        } else if(ui->radioButtonV2_pnr->isChecked())
        {
            v2.setAxisY(number);
        }
        updateData();
    }

}


void Lab5_PNR::on_btnSetZ_pnr_clicked()
{
    double number;
    if(!ui->lineEditAxisZ_pnr->text().isEmpty())
    {
        number = ui->lineEditAxisZ_pnr->text().toDouble();
        if(ui->radioButtonV1_pnr->isChecked())
        {
            v1.setAxisZ(number);
        } else if(ui->radioButtonV2_pnr->isChecked())
        {
            v2.setAxisZ(number);
        }
        updateData();
    }

}


void Lab5_PNR::on_btnSetAll_pnr_clicked()
{
    double numberX, numberY, numberZ;
    if(!ui->lineEditAxisX_pnr->text().isEmpty() ||
            !ui->lineEditAxisY_pnr->text().isEmpty() ||
            !ui->lineEditAxisZ_pnr->text().isEmpty())
    {
        numberX = ui->lineEditAxisX_pnr->text().toDouble();
        numberY = ui->lineEditAxisY_pnr->text().toDouble();
        numberZ = ui->lineEditAxisZ_pnr->text().toDouble();
        if(ui->radioButtonV1_pnr->isChecked())
        {
            v1.setAxisX(numberX);
            v1.setAxisY(numberY);
            v1.setAxisZ(numberZ);
        } else if(ui->radioButtonV2_pnr->isChecked())
        {
            v2.setAxisX(numberX);
            v2.setAxisY(numberY);
            v2.setAxisZ(numberZ);
        }
        updateData();
    }

}


void Lab5_PNR::on_btnAddVector_pnr_clicked()
{
    double numberX, numberY, numberZ;
    if(ui->radioButtonV1_pnr->isChecked())
    {
        numberX = v2.getAxisX();
        numberY = v2.getAxisY();
        numberZ = v2.getAxisZ();

        v1.addVector(numberX, numberY, numberZ);
    } else if(ui->radioButtonV2_pnr->isChecked())
    {
        numberX = v1.getAxisX();
        numberY = v1.getAxisY();
        numberZ = v1.getAxisZ();

        v2.addVector(numberX, numberY, numberZ);
    }

    updateData();
}


void Lab5_PNR::on_btnSubtrVector_pnr_clicked()
{
    double numberX, numberY, numberZ;
    if(ui->radioButtonV1_pnr->isChecked())
    {
        numberX = v2.getAxisX();
        numberY = v2.getAxisY();
        numberZ = v2.getAxisZ();

        v1.subtractVector(numberX, numberY, numberZ);
    } else if(ui->radioButtonV2_pnr->isChecked())
    {
        numberX = v1.getAxisX();
        numberY = v1.getAxisY();
        numberZ = v1.getAxisZ();

        v2.subtractVector(numberX, numberY, numberZ);
    }

    updateData();
}


void Lab5_PNR::on_btnMultByScalar_pnr_clicked()
{
    double mult;

    if(!ui->lineEditNum_pnr->text().isEmpty())
    {
        mult = ui->lineEditNum_pnr->text().toDouble();
        if(ui->radioButtonV1_pnr->isChecked())
        {
            v1.multiplyByScalar(mult);
        } else if(ui->radioButtonV2_pnr->isChecked())
        {
            v2.multiplyByScalar(mult);
        }

        updateData();
    }
}


void Lab5_PNR::on_btnCalcLength_pnr_clicked()
{
    double length;

    updateData();
    if(ui->radioButtonV1_pnr->isChecked())
    {
        length = v1.calcVectorLength();
        ui->lengthValueLabelV1_pnr->setText(QString::number(length));
    } else if(ui->radioButtonV2_pnr->isChecked())
    {
        length = v2.calcVectorLength();
        ui->lengthValueLabelV2_pnr->setText(QString::number(length));
    }
}


void Lab5_PNR::on_btnCalcScalarProd_pnr_clicked()
{
    double scalarProd, numberX, numberY, numberZ;

    updateData();
    if(ui->radioButtonV1_pnr->isChecked())
    {
        numberX = v2.getAxisX();
        numberY = v2.getAxisY();
        numberZ = v2.getAxisZ();

        scalarProd = v1.calcScalarProduct(numberX, numberY, numberZ);
        ui->scalarProdValueLabel_pnr->setText(QString::number(scalarProd));
    } else if(ui->radioButtonV2_pnr->isChecked())
    {
        numberX = v1.getAxisX();
        numberY = v1.getAxisY();
        numberZ = v1.getAxisZ();

        scalarProd = v2.calcScalarProduct(numberX, numberY, numberZ);
        ui->scalarProdValueLabel_pnr->setText(QString::number(scalarProd));
    }
}


void Lab5_PNR::on_btnCalcVectorProd_pnr_clicked()
{
    double vectorProd, numberX, numberY, numberZ;

    updateData();
    if(ui->radioButtonV1_pnr->isChecked())
    {
        numberX = v2.getAxisX();
        numberY = v2.getAxisY();
        numberZ = v2.getAxisZ();

        vectorProd = v1.calcVectorProduct(numberX, numberY, numberZ);
        ui->vectorProdValueLabel_pnr->setText(QString::number(vectorProd));
        updateData();
    } else if(ui->radioButtonV2_pnr->isChecked())
    {
        numberX = v1.getAxisX();
        numberY = v1.getAxisY();
        numberZ = v1.getAxisZ();

        vectorProd = v2.calcVectorProduct(numberX, numberY, numberZ);
        ui->vectorProdValueLabel_pnr->setText(QString::number(vectorProd));
        updateData();
    }
}

