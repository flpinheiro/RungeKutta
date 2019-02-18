/* 
 * File:   GrowthCosA.cpp
 * Author: flpin
 * 
 * Created on 15 de Fevereiro de 2019, 13:52
 */
#include "GrowthCosA.h"
#include "Growth.h"
#include <math.h>
#include <cstdlib>
#include <iostream>

using namespace std;

GrowthCosA::GrowthCosA(double x, double y, double a, double b, double epsilon, double omega) :
Growth(x, y, a, b) {
    this->epsilon = epsilon;
    this->omega = omega;
    this->inPut = "GrowthCosA";
}

double GrowthCosA::dydx(double x, double y) {
    return getA()* (1 + getEpsilon() * cos(2 * M_PI * getOmega() * x)) * pow(y, _ALPHA_) - getB() * y;
}

void GrowthCosA::setInPut(double M0, double M) {
    Growth::setInPut(M0, M);
    this->inPut += " epsilon=";
    this->inPut += doubleToString(getEpsilon());
    this->inPut += " omega=";
    this->inPut += doubleToString(getOmega());
}

double GrowthCosA::getEpsilon() {
    return this->epsilon;
}

double GrowthCosA::getOmega() {
    return this->omega;
}