/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   GrowthCosB.cpp
 * Author: flpin
 * 
 * Created on 16 de Fevereiro de 2019, 14:34
 */

#include "GrowthCosB.h"
#include "GrowthCosA.h"
#include "Growth.h"
#include <math.h>
#include <cstdlib>
#include <iostream>

GrowthCosB::GrowthCosB(double x, double y, double a, double b, double epsilon, double omega) :
GrowthCosA(x, y, a, b, epsilon, omega) {
    this->inPut = "GrowthCosB";
}

double GrowthCosB::dydx(double x, double y) {
    return getA() * pow(y, _ALPHA_) - getB()* (1 + getEpsilon() * cos(2 * M_PI * getOmega() * x)) * y;
}