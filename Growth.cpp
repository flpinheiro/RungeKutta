/* 
 * File:   Growth_simples.cpp
 * Author: Felipe Luís PInheiro
 * Define a classe Growth
 * Created on 14 de Fevereiro de 2019, 17:12
 */

#include "Growth.h"
#include "Gnuplot.h"

#include <math.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

/**
 * Construtor Growth
 * @param x - tempo inicial
 * @param y - massa inicial
 * @param a - parametros da equação de crescimento - a m ^ alpha 
 * @param b - paramentro da equação de crescimento - b m
 */
Growth::Growth(double x, double y, double a, double b)
: RungeKutta(x, y) {
    this->a = a;
    this->b = b;
    this->inPut = "Growth";
}

/**
 * função dydx é a "função" a ser chamada pela classe RungeKUtta
 * @param x - tempo
 * @param y - massa
 * @return getA() * pow(y, (double) 3 / (double) 4) - getB() * y;
 */
double Growth::dydx(double x, double y) {
    return getA() * pow(y, (double) 3 / (double) 4) - getB() * y;
}

/**
 * funcção getA retorna o valor de 'a'
 * @return a
 */
double Growth::getA() {
    return this->a;
}

/**
 * função getB retorna o valor de 'b'
 * @return b
 */
double Growth::getB() {
    return this->b;
}

/**
 * função runge - realiza as ações de calculo até o limite de tempo _T_MAX_
 */
void Growth::runge() {
    ofstream file;
    file.open("out/" + getInPut() + ".out");
    while (getX() <= _T_MAX_) {
        RK4(0.01);
        file << toString() << endl;
    }
    file.close();
}

/**
 * função maxMass - calcula a massa máxima do animal
 * @return massa máxima
 */
double Growth::maxMass() {
    return pow( getB() / getA(), 1 / (_ALPHA_ - 1));
}

/**
 * finção setInPut - define o nome do arquivo de saida de dados
 * @param M0 - massa inicial
 * @param M - massa maxima
 */
void Growth::setInPut(double M0, double M) {
    this->inPut += " M_0=";
    this->inPut += doubleToString(M0);
    this->inPut += " M=";
    this->inPut += doubleToString(M);
}

/**
 * função getInPut - retorna o nome do arquivo de saida
 * @return arquivo de saida
 */
string Growth::getInPut() {
    return this->inPut;
}

/**
 * função integerToString - transforma um inteiro em um string
 * @param a (int)
 * @return (string)
 */
string integerToString(int a) {
    ostringstream strS;
    strS << a;
    return strS.str();
}

/**
 * função doubleToStrig
 * @param a (double)
 * @return (strint)
 */
string doubleToString(double a) {
    ostringstream strS;
    strS << a;
    return strS.str();
}

/**
 * função run - realiza todas as contas necessárias
 */
void Growth::run(){
    setInPut(getY(), maxMass());
    runge();
    Gnuplot gnu("massa em função do tempo", "t", "M(t)");
    gnu.makeScript(getInPut());
    gnu.close();
}