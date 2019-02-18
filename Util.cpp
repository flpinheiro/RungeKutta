/* 
 * File:   Util.cpp
 * Author: flpin
 * 
 * Created on 16 de Fevereiro de 2019, 18:54
 */

#include "Util.h"
#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

Util::Util() {
    srand(time(NULL));
}

double Util::eta() {
    return 2 * (double) rand() / (double) RAND_MAX - 1;
}