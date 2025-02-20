#include "Variables.h"
#include <cmath>
#include "KinematicsChoices.h"
// THESE ARE THE FORMULAS TO CALCULATE VARIABLES WHEN NEEDED (THE DEFENITIONS)


double Variables::varCalculation(double v1, double v2, double v3) {
    switch (check) {
    case 1: return v1 * v2;
    case 2: return sqrt((2 * v1) / v2);
    case 3: return 0.5 * v1 * v2 * v2;
    case 4: return ((2 * v1) / (v2 * v2));
    case 5: return v1 * v2 * v3;

    }
}

double Variables::hCalculation(double g, double t) {
    _g = g;
    _t = t;
    //getG();
    //getT();
    return 0.5 * _g * _t * _t;
}

double Variables::vfCalculation(double g, double t) {
    _g = g;
    _t = t;
    return _g * _t;
}

double Variables::netForceCalc(double m, double a) {
    _m = m;
    _a = a;
    return _m * _a;
}

double Variables::mCalculation(double f, double a) {
    _f = f;
    _a = a;
    return _f / _a;
}

double Variables::aCalculation(double f, double m) {
    _f = f;
    _m = m;
    return _f / _m;
}

double Variables::gCalculation(double h, double t) {
    _h = h;
    _t = t;
    return ((2 * _h) / (_t * _t));
}

double Variables::EiCalculation(double Kei, double Pei) {
    _Kei = Kei;
    _Pei = Pei;
    return _Kei + _Pei;
}

double Variables::EfCalculation(double Kef, double Pef) {
    _Kef = Kef;
    _Pef = Pef;
    return _Kef + _Pef;
}

double Variables::tCalculation(double h, double g) {
    _h = h;
    _g = g;
    return sqrt((2 * _h) / _g);     
}

double Variables::KefCalculation(double m, double g, double h) {
    _m = m;
    _g = g;
    _h = h;
    return _m * _g * _h;
}

double Variables::PeiCalculation(double m, double g, double h) {
    _m = m;
    _g = g;
    _h = h;
    return _m * _g * _h;
}

double Variables::PfCalculation(double m, double Vf) {
    _m = m;
    _Vf = Vf;
    return _m * _Vf;
}

// GETTERS AND SETTERS FOR VARIABLES



void Variables::setG(double g) {
    _g = g;
}

double Variables::getG() {
    return _g;
}

void Variables::setT(double t) {
    _t = t;
}

double Variables::getT() {
    return _t;
}

void Variables::setA(double a) {
    _a = a;
}

double Variables::getA() {
    return _a;
}

void Variables::setH(double h) {
    _h = h;
}

double Variables::getH() {
    return _h;
}

void Variables::setVf(double Vf) {
    _Vf = Vf;
}

double Variables::getVf() {
    return _Vf;
}

void Variables::setM(double m) {
    _m = m;
}

double Variables::getM() {
    return _m;
}

void Variables::setNf(double Nf) {
    _Nf = Nf;
}

double Variables::getNf() {
    return _Nf;
}

void Variables::setF(double f) {
    _f = f;
}

double Variables::getF() {
    return _f;
}

void Variables::setEi(double Ei) {
    _Ei = Ei;
}

double Variables::getEi() {
    return _Ei;
}

void Variables::setEf(double Ef) {
    _Ef = Ef;
}

double Variables::getEf() {
    return _Ef;
}

void Variables::setKef(double Kef) {
    _Kef = Kef;
}

double Variables::getKef() {
    return _Kef;
}

void Variables::setPei(double Pei) {
    _Pei = Pei;
}

double Variables::getPei() {
    return _Pei;
}

void Variables::setPf(double Pf) {
    _Pf = Pf;
}

double Variables::getPf() {
    return _Pf;
}