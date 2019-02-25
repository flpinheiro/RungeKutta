/* 
 * File:   Growth_simples.h
 * Author: flpin
 * Define a classe Growth
 * Created on 14 de Fevereiro de 2019, 17:12
 */

#ifndef GROWTH_H
#define GROWTH_H
#define M_PI 3.1415926535897932384626433832795

#include "RungeKutta.h"
#include <string>

#define _ALPHA_  (double)3/(double)4
#define _T_MAX_ 30

using namespace std;

class Growth : public RungeKutta {
public:
    Growth(double x, double y, double a, double b);
    virtual double dydx(double x, double y) override;
    virtual void setInPut(double M0, double M);
    double getA();
    double getB();
    double getTau();
    double getDelta();
    string getInPut();
    double getChi();
    void runge();
    double maxMass();
    virtual void run();
    double M(double t);
protected:
    string inPut;
private:
    double a, b, chi;

};

string integerToString(int a);
string doubleToString(double a);

#endif /* GROWTH_SIMPLES_H */