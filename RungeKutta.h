/* 
 * File:   RungeKutta.h
 * Author: flpin
 *
 * Created on 14 de Fevereiro de 2019, 16:33
 */

#ifndef RUNGEKUTTA_H
#define RUNGEKUTTA_H
#include <string>

using namespace std;

class RungeKutta {
public:
    RungeKutta(double x, double y);
    virtual double dydx(double x, double y) = 0;
    void RK4(double h);
    string toString();
    double getX();
    double getY();
private:
    double x, y;

};

#endif /* RUNGEKUTTA_H */

