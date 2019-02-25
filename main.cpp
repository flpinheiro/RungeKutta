/* 
 * File:   main.cpp
 * Author: flpin
 *
 * Created on 14 de Fevereiro de 2019, 16:32
 */
#include "RungeKutta.h"
#include "Test.h"
#include "Growth.h"
#include "GrowthCosA.h"
#include "GrowthCosAInv.h"
#include "GrowthCosB.h"
#include "GrowthCosAB.h"
#include "GrowthCosARand.h"
#include "GrowthCosBRand.h"
#include "Gnuplot.h"

#include <cstdlib>
#include <math.h>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //    testar();
    string strIn("in/entrada.in");
    ifstream file;
    file.open(strIn);
    if (!file) {
        cout << "fracasso em abrir o arquivo" << endl;
        return 0;
    }
    double x, y, a, b;
    while (file >> x >> y >> a >> b) {
        Growth g(x, y, a, b);
        g.run();
        Gnuplot gnu("massa em função do tempo", "t", "M(t)");
        gnu.makeScript(&g);
        gnu.close();
    }
    file.close();

    strIn = "in/entrada2.in";
    file.open(strIn);
    if (!file) {
        cout << "fracasso em abrir o arquivo" << endl;
        return 0;
    }
    double epsilon, omega;
    while (file >> x >> y >> a >> b >> epsilon >> omega) {
        GrowthCosA ga(x, y, a, b, epsilon, omega);
        ga.run();

        GrowthCosB gb(x, y, a, b, epsilon, omega);
        gb.run();
        
        GrowthCosAInv gai(x, y, a, b, epsilon, omega);
        gai.run();

        Gnuplot gnu("massa em função do tempo", "t", "M(t)");
        gnu.makeScript(ga.getInPut(), gb.getInPut());
        gnu.close();
    }
    file.close();

    strIn = "in/entrada3.in";
    file.open(strIn);
    if (!file) {
        cout << "fracasso em abrir o arquivo" << endl;
        return 0;
    }
    double teta;
    while (file >> x >> y >> a >> b >> epsilon >> omega >> teta) {
        GrowthCosAB gab(x, y, a, b, epsilon, omega, teta);
        gab.run();
    }
    file.close();


    strIn = "in/entrada4.in";
    file.open(strIn);
    if (!file) {
        cout << "fracasso em abrir o arquivo" << endl;
        return 0;
    }
    double epsilon2;
    while (file >> x >> y >> a >> b >> epsilon >> omega >> epsilon2) {
        GrowthCosARand gar(x, y, a, b, epsilon, omega, epsilon2);
        gar.run();

        GrowthCosBRand gbr(x, y, a, b, epsilon, omega, epsilon2);
        gbr.run();
    }
    file.close();

    return 0;
}
