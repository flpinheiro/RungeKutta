/* 
 * File:   GrowthCosBRand.cpp
 * Author: flpin
 * 
 * Created on 16 de Fevereiro de 2019, 19:39
 */

#include "GrowthCosBRand.h"
#include <math.h>

GrowthCosBRand::GrowthCosBRand(double x, double y, double a, double b, double epsilon, double omega, double epsilon2) :
GrowthCosARand(x, y, a, b, epsilon, omega, epsilon2) {
        this->inPut = "GrowthCosBRand";
}

double GrowthCosBRand::dydx(double x, double y) {
    return getA() * pow(y, _ALPHA_) - getB() * (1 + getEpsilon() * cos(2 * M_PI * getOmega() * x) + getEpsilon2() * getEta()) * y;
}
