/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Test.h
 * Author: flpin
 *
 * Created on 14 de Fevereiro de 2019, 16:49
 */

#ifndef TEST_H
#define TEST_H

#include "RungeKutta.h"

class Test : public RungeKutta{
public:
    Test(double x, double y);
    double dydx(double x, double y) override;
private:

};
    void testar();
#endif /* TEST_H */

