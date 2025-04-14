#include "Variables.h"
#include <cmath>
#include "KinematicsChoices.h"
// THESE ARE THE FORMULAS TO CALCULATE VARIABLES WHEN NEEDED (THE DEFENITIONS)


double Variables::varCalculation(double v1, double v2, double v3) {  // WHEN V3 ISN'T NEEDED, JUST PLUG IN 1 FOR V3
    switch (check) {
    case 0: return v1 * v2; // Final Velocity = g * t
    case 1: return sqrt((2 * v1) / v2); // Time Taken
    case 2: return 0.5 * v1 * v2 * v2; // Distance Fell = 0.5 * g * t^2
    case 3: return ((2 * v1) / (v2 * v2)); // G acceleration = (2 * h) / (t^2)
    case 4: return v1 * v2 * v3; // Final Kinetic Energy = m * g * h
    case 5: return v1 * v2; // Net Force: F = m * a
    case 6: return v1 / v2; // Mass: m = F / a
    case 7: return v1 / v2; // Acceleration: a = F / m
    case 8: return v1 + v2; // Initial Mechanical Energy: Ei = Kei + Pei
    case 9: return v1 + v2; // Final Mechanical Energy: Ef = Kef + Pef
    case 10: return sqrt((2 * v1) / v2); // Time Taken: t = sqrt(2 * h / g)
    case 11: return v1 * v2 * v3; // Final Kinetic Energy: Kef = m * g * h
    case 12: return v1 * v2 * v3; // Initial Potential Energy: Pei = m * g * h
    case 13: return v1 * v2; // Momentum: Pf = m * Vf

    default: return 0.0; // Handle invalid 'check' values
    }
}

double Variables::hCalculation(double g, double t) {
    _g = g;
    _t = t;
    //getG();  // Distance Fell
    //getT();
    return 0.5 * _g * _t * _t;
}

double Variables::vfCalculation(double g, double t) {
    _g = g;
    _t = t;   // Final Velocity
    return _g * _t;
}

double Variables::netForceCalc(double m, double a) {
    _m = m;  // Net Force
    _a = a;
    return _m * _a;
}

double Variables::mCalculation(double f, double a) {
    _f = f;
    _a = a;  // Mass
    return _f / _a;
}

double Variables::aCalculation(double f, double m) {
    _f = f;
    _m = m;  // Accaleration
    return _f / _m;
}

double Variables::gCalculation(double h, double t) {
    _h = h;  // G calculation
    _t = t;
    return ((2 * _h) / (_t * _t));
}

double Variables::EiCalculation(double Kei, double Pei) {
    _Kei = Kei;
    _Pei = Pei; // Initial Mechanical Energy
    return _Kei + _Pei;
}

double Variables::EfCalculation(double Kef, double Pef) {
    _Kef = Kef;  // Final Mechanical Energy
    _Pef = Pef;
    return _Kef + _Pef;
}

double Variables::tCalculation(double h, double g) {
    _h = h;  // Time Taken
    _g = g;
    return sqrt((2 * _h) / _g);     
}

double Variables::KefCalculation(double m, double g, double h) {
    _m = m;
    _g = g;
    _h = h;  // Final Kinetic Energy
    return _m * _g * _h;
}

double Variables::PeiCalculation(double m, double g, double h) {
    _m = m;
    _g = g;  // Initial Potential Energy
    _h = h;
    return _m * _g * _h;
}

double Variables::PfCalculation(double m, double Vf) {
    _m = m;
    _Vf = Vf;  // Momentum
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