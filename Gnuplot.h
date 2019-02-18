/* 
 * File:   Gnuplot.h
 * Author: flpin
 * Cria o script para ser usado para criação dos gráficos do gnuplot e chama o programa
 * pelo console oo sistema.
 * Created on 14 de Fevereiro de 2019, 17:58
 */

#ifndef GNUPLOT_H
#define GNUPLOT_H
#include <fstream>
#include <string>

#define _TERM_PS_ "set term postscript  mono enhanced 10 lw 1 dl 1"
#define _TERM_JPG_ "set term jpeg enhanced 10 lw 1 dl 1"

using namespace std;

class Gnuplot {
public:
    Gnuplot(string title, string xl, string yl);
    void makeScript();
    void makeScript( string outputName);
    void makeScript( string outPutName1, string outPutName2);
    void close();
private:
    ofstream file;
    string title,  xl,  yl;

};



#endif /* GNUPLOT_H */

