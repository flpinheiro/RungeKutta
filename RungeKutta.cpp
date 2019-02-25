/* 
 * File:   RungeKutta.cpp
 * Author: flpin
 * 
 * Created on 14 de Fevereiro de 2019, 16:33
 */
#include "RungeKutta.h"
#include <string>
#include <sstream>

using namespace std;

RungeKutta::RungeKutta(double x, double y) {
    this->x = x;
    this->y = y;
}

void RungeKutta::RK4(double h) {
    double k1, k2, k3, k4, k5;

    // Apply Runge Kutta Formulas to find 
    // next value of y 
    k1 = h * dydx(x, y);
    k2 = h * dydx(x + 0.5 * h, y + 0.5 * k1);
    k3 = h * dydx(x + 0.5 * h, y + 0.5 * k2);
    k4 = h * dydx(x + h, y + k3);

    // Update next value of y 
    y += (1.0 / 6.0)*(k1 + 2 * k2 + 2 * k3 + k4);

    // Update next value of x 
    x += h;
}

string RungeKutta::toString() {
    ostringstream strsX;
    strsX << this->x;
    ostringstream strsY;
    strsY << this->y;
    return strsX.str() + " " + strsY.str();
}
void RungeKutta::setX(double x){
    this->x = x;
}
double RungeKutta::getX(){
    return this->x;
}
void RungeKutta::setY(double y){
    this->y = y;
}

double RungeKutta::getY(){
    return this->y;
}