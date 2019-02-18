/* 
 * File:   GrowthCosAB.cpp
 * Author: flpin
 * 
 * Created on 16 de Fevereiro de 2019, 15:32
 */

#include "GrowthCosAB.h"
#include "GrowthCosA.h"
#include "Growth.h"
#include <math.h>
#include <cstdlib>
#include <iostream>

GrowthCosAB::GrowthCosAB(double x, double y, double a, double b, double epsilon, double omega, double teta) :
GrowthCosA(x, y, a, b, epsilon, omega) {
    this->teta = teta;
    this->inPut = "GrowthCosAB";
}

double GrowthCosAB::dydx(double x, double y) {
    return getA() * (1 + getEpsilon() * cos(2 * M_PI * getOmega() * x)) * pow(y, _ALPHA_)
            - getB()* (1 + getEpsilon() * cos(2 * M_PI * getOmega() * x + 2 * M_PI * getTeta())) * y;
}

void GrowthCosAB::setInPut(double M0, double M) {
    GrowthCosA::setInPut(M0,M);
    this->inPut += " teta=";
    this->inPut += doubleToString(getTeta());
}

double GrowthCosAB::getTeta() {
    return this->teta;
}