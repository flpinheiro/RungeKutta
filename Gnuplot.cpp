/* 
 * File:   Gnuplot.cpp
 * Author: Felipe Luís Pinheiro
 * Define a classe Gnuplot
 * Created on 14 de Fevereiro de 2019, 17:58
 */
#include "Gnuplot.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

/**
 * Construtor Gnuplot - Define o Titulo principal e os títulos do eixos x e y
 * @param title - titulo principal
 * @param xl - titulo do eixo x
 * @param yl - titulo do eixo y
 */
Gnuplot::Gnuplot(string title, string xl, string yl) {
    this->file.open("gnuplot.plt");
    this->title = title;
    this->xl = xl;
    this->yl = yl;
}

/**
 * Função close - fecha o arquivo do script e chama o prompt para executar o gnuplot.
 */
void Gnuplot::close() {
    this->file.close();
    system("gnuplot 'gnuplot.plt'");
}

void Gnuplot::makeScript() {
    this->file << "reset" << endl;
    this->file << "set key off" << endl;
    this->file << "set yr [0:]" << endl;
    this->file << "set title \"" << this->title << "\"" << endl;
    this->file << "set xl \"" << this->xl << "\"" << endl;
    this->file << "set yl \"" << this->yl << "\"" << endl;
}

/**
 * função makeScript - cria o script gnuplot para ser executado.
 * @param outPutName - nome do arquivo de saida e de entrada de dados.
 */
void Gnuplot::makeScript(string outPutName) {
    makeScript();
    this->file << _TERM_PS_ << endl;
    this->file << "set out 'ps/" << outPutName << ".ps'" << endl;
    this->file << "plot 'out/" << outPutName << ".out' " << endl;
    this->file << _TERM_JPG_ << endl;
    this->file << "set out 'jpg/" << outPutName << ".jpg'" << endl;
    this->file << "replot" << endl;
}

void Gnuplot::makeScript(string outPutName1, string outPutName2) {
    makeScript();
    this->file << _TERM_PS_ << endl;
    this->file << "set out 'ps/" << outPutName1 << " vs " << outPutName2 << ".ps'" << endl;
    this->file << "plot 'out/" << outPutName1 << ".out' " << ", 'out/" << outPutName2 << ".out' " << endl;
    this->file << _TERM_JPG_ << endl;
    this->file << "set out 'jpg/" << outPutName1 << " vs " << outPutName2 << ".jpg'" << endl;
    this->file << "replot" << endl;
}