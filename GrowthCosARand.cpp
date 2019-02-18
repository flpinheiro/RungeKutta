/* 
 * File:   GrowthCosARand.cpp
 * Author: flpin
 * 
 * Created on 16 de Fevereiro de 2019, 19:06
 */

#include "GrowthCosARand.h"
#include "GrowthCosA.h"
#include <math.h>

GrowthCosARand::GrowthCosARand(double x, double y, double a, double b, double epsilon, double omega, double epsilon2) :
GrowthCosA(x, y, a, b, epsilon, omega) {
    this->epsilon2 = epsilon2;
    this->inPut = "GrowthCosARand";
}

double GrowthCosARand::dydx(double x, double y) {
    return getA()* (1 + getEpsilon() * cos(2 * M_PI * getOmega() * x) + getEpsilon2() * getEta()) * pow(y, _ALPHA_) - getB() * y;
}

void GrowthCosARand::setInPut(double M0, double M) {
    GrowthCosA::setInPut(M0, M);
    this->inPut += " epsilon_2=";
    this->inPut += doubleToString(getEpsilon2());
}

double GrowthCosARand::getEpsilon2() {
    return this->epsilon2;
}

double GrowthCosARand::getEta() {
    return this->u.eta();
}