/* 
 * File:   GrowthCosAB.h
 * Author: flpin
 *
 * Created on 16 de Fevereiro de 2019, 15:32
 */

#ifndef GROWTHCOSAB_H
#define GROWTHCOSAB_H

#include "GrowthCosA.h"

class GrowthCosAB : public GrowthCosA{
public:
    GrowthCosAB(double x, double y, double alpha, double beta, double epsilon, double omega, double teta);
    virtual double dydx(double x, double y) override;
    virtual void setInPut(double M0, double M) override;  
    double getTeta();
private:
    double teta;

};

#endif /* GROWTHCOSAB_H */

