#ifndef LAB5_PNR_H
#define LAB5_PNR_H

#include <QMainWindow>

class Vector
{
private:
    double axisX;
    double axisY;
    double axisZ;
public:
    void setAxisX(double x) {axisX = x;}
    void setAxisY(double y) {axisY = y;}
    void setAxisZ(double z) {axisZ = z;}

    double getAxisX() {return axisX;}
    double getAxisY() {return axisY;}
    double getAxisZ() {return axisZ;}

    void addVector(double x2, double y2, double z3);
    void subtractVector(double x2, double y2, double z3);
    void multiplyByScalar(double mult);
    double calcScalarProduct(double x2, double y2, double z3);
    double calcVectorProduct(double x2, double y2, double z3);
    double calcVectorLength();

    Vector()
    {}
    Vector(double x)
        : axisX{x}
    {}
    Vector(double x, double y)
        : axisX{x}, axisY{y}
    {}
    Vector(double x, double y, double z)
        : axisX{x}, axisY{y}, axisZ{z}
    {}
};

QT_BEGIN_NAMESPACE
namespace Ui { class Lab5_PNR; }
QT_END_NAMESPACE

class Lab5_PNR : public QMainWindow
{
    Q_OBJECT

public:
    Lab5_PNR(QWidget *parent = nullptr);
    ~Lab5_PNR();
    void updateData();
private slots:
    void on_btnSetX_pnr_clicked();

    void on_btnSetY_pnr_clicked();

    void on_btnSetZ_pnr_clicked();

    void on_btnSetAll_pnr_clicked();

    void on_btnAddVector_pnr_clicked();

    void on_btnSubtrVector_pnr_clicked();

    void on_btnMultByScalar_pnr_clicked();

    void on_btnCalcLength_pnr_clicked();

    void on_btnCalcScalarProd_pnr_clicked();

    void on_btnCalcVectorProd_pnr_clicked();

private:
    Ui::Lab5_PNR *ui;
    Vector v1{0, 0, 0};
    Vector v2{0, 0, 0};
};




#endif // LAB5_PNR_H
