/* 
 * File:   GrowthCosAInv.cpp
 * Author: flpin
 * 
 * Created on 25 de Fevereiro de 2019, 15:26
 */
#include "GrowthCosAInv.h"
#include "Gnuplot.h"

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

GrowthCosAInv::GrowthCosAInv(double x, double y, double a, double b, double epsilon, double omega) :
GrowthCosA(x, y, a, b, -epsilon, omega) {
    this->inPut = "GrowthCosAInv";
}
#define t0 1
void GrowthCosAInv::run() {
    double m0 = getY();
    
    setInPut(getY(), maxMass());
    ofstream file;
    file.open("out/" + getInPut() + ".out");
    for (double x = 0; x <= t0; x += 0.01) {
        setX(x);
        setY(m0);
        while (getX() <= t0) {
            RK4(0.01);
        }
        file << x << " " << getY() << " " << M( t0 - x) << endl;
    }

    file.close();
    Gnuplot gnu("massa em função do tempo", "t", "M(t)");
    gnu.makeScript2(getInPut());
    gnu.close();
}

