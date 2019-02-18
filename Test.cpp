/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Test.cpp
 * Author: flpin
 * 
 * Created on 14 de Fevereiro de 2019, 16:49
 */

#include "Test.h"
#include "RungeKutta.h"
#include <iostream>

using namespace std;

Test::Test(double x, double y)
: RungeKutta(x, y) {
}

double Test::dydx(double x, double y) {
    return ((x - y) / 2);
}

void testar() {
    float x0 = 0, y = 1, x = 2, h = 0.2;
    Test t(x0, y);
    int n = (int) ((x - x0) / h);
    for (int i = 1; i <= n; i++) {
        t.RK4(h);
    }
    cout << t.toString() << endl;
}