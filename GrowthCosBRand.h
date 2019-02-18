/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GrowthCosBRand.h
 * Author: flpin
 *
 * Created on 16 de Fevereiro de 2019, 19:39
 */

#ifndef GROWTHCOSBRAND_H
#define GROWTHCOSBRAND_H


#include "GrowthCosARand.h"
#include "Util.h"

class GrowthCosBRand : public GrowthCosARand{
public:
    GrowthCosBRand(double x, double y, double alpha, double beta, double epsilon, double omega, double epsilon2);
    virtual double dydx(double x, double y) override;
private:

};

#endif /* GROWTHCOSBRAND_H */

