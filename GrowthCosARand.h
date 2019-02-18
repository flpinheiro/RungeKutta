/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GrowthCosARand.h
 * Author: flpin
 *
 * Created on 16 de Fevereiro de 2019, 19:06
 */

#ifndef GROWTHCOSARAND_H
#define GROWTHCOSARAND_H

#include "GrowthCosA.h"
#include "Util.h"

class GrowthCosARand : public GrowthCosA {
public:
    GrowthCosARand(double x, double y, double a, double b, double epsilon, double omega, double epsilon2);
    virtual double dydx(double x, double y) override;
    virtual void setInPut(double M0, double M) override;
    double getEpsilon2();
    double getEta();
private:
    Util u;
    double epsilon2;
};

#endif /* GROWTHCOSARAND_H */

