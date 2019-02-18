/* 
 * File:   GrowthCosA.h
 * Author: flpin
 *
 * Created on 15 de Fevereiro de 2019, 13:52
 */

#ifndef GROWTHCOSA_H
#define GROWTHCOSA_H

#include "Growth.h"

class GrowthCosA : public Growth {
public:
    GrowthCosA(double x, double y, double a, double b, double epsilon, double omega);
    virtual double dydx(double x, double y) override;
    virtual void setInPut(double M0, double M) override;
    double getEpsilon();
    double getOmega();
private:
    double epsilon, omega;
};

#endif /* GROWTHCOSA_H */

