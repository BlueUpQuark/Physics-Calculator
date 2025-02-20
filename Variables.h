#pragma once


class Variables {
    double _a; // Acceleration *
    double _g; // Acceleration due to gravity *
    double _h; // Height *
    double _t; // Time *
    double _Vf; // Final velocity *
    double _m; // Mass *
    double _Nf; // Net force *
    double _f; // ?? I forgot what this was
    double _Ei; // Initial total energy *
    double _Ef; // Final total energy *
    double _Kef; // Final kinetic energy *
    double _Kei = 0; // Initial kinetic energy, will always be zero in this scenario
    double _Pei; // Initial potential energy
    double _Pef = 0; // Final potential energy, will always be zero in this scenario
    double _Pf; // Final momentum
public:
    // THESE ARE THE FORMULAS TO CALCULATE VARIABLES WHEN NEEDED
    double hCalculation(double g, double t);
    double vfCalculation(double g, double t);
    double netForceCalc(double m, double a);
    double mCalculation(double f, double a);
    double aCalculation(double f, double m);
    double gCalculation(double h, double t);
    double EiCalculation(double Kei, double Pei);
    double EfCalculation(double Kef, double Pef);
    double tCalculation(double h, double g);
    double KefCalculation(double m, double g, double h);
    double PeiCalculation(double m, double g, double h);
    double PfCalculation(double m, double Vf);
    double varCalculation(double v1, double v2, double v3);



     
    // GETTERS AND SETTERS FOR VARIABLES
    void setG(double g);
    double getG();

    void setT(double t);
    double getT();

    void setA(double a);
    double getA();

    void setH(double h);
    double getH();

    void setVf(double Vf);
    double getVf();

    void setM(double m);
    double getM();

    void setNf(double Nf);
    double getNf();

    void setF(double f);
    double getF();

    void setEi(double Ei);
    double getEi();

    void setEf(double Ef);
    double getEf();

    void setKef(double Kef);
    double getKef();

    void setKei(double Kei);
    double getKei();

    void setPef(double Pef);
    double getPef();

    void setPei(double Pei);
    double getPei();

    void setPf(double Pf);
    double getPf();

};

