#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>
using namespace std;

class Kerros
{
public:
    Kerros();
    virtual void maaritaAsunnotKerros();
    double laskeKulutus(double kulutus);

private:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
};

#endif // KERROS_H
