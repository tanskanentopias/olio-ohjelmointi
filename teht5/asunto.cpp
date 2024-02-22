#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto()
{
    cout << "Asunto luotu" << endl;
}

void Asunto::maarita(int asukasMaara, int neliot)
{
    cout << "Asunto maaritetty, asukkaita = " << asukasMaara << " nelioita = " << neliot <<endl;
}

double Asunto::laskeKulutus(double kulutus)
{
    return kulutus;
}
