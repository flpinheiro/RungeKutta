/* 
 * File:   GrowthCosB.h
 * Author: flpin
 *
 * Created on 16 de Fevereiro de 2019, 14:34
 */

#ifndef GROWTHCOSB_H
#define GROWTHCOSB_H

#include "Growth.h"
#include "GrowthCosA.h"

class GrowthCosB : public GrowthCosA {
public:
    GrowthCosB(double x, double y, double a, double b, double epsilon, double omega);
    virtual double dydx(double x, double y) override;
private:
};

#endif /* GROWTHCOSB_H */

