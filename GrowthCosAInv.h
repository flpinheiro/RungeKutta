/* 
 * File:   GrowthCosAInv.h
 * Author: flpin
 *
 * Created on 25 de Fevereiro de 2019, 15:25
 */

#ifndef GROWTHCOSAINV_H
#define GROWTHCOSAINV_H

#include "GrowthCosA.h"

class GrowthCosAInv : public GrowthCosA {
public:
    GrowthCosAInv(double x, double y, double a, double b, double epsilon, double omega);
    virtual void run() override;
private:

};

#endif /* GROWTHCOSAINV_H */

