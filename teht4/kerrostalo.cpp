#include "kerrostalo.h"
#include <iostream>
using namespace std;


Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritetaan kerrostalon kaikki asunnot" << endl;

    eka.maaritaAsunnot();
    toka.maaritaAsunnotKerros();
    kolmas.maaritaAsunnotKerros();

}

double Kerrostalo::laskeKulutus(double kulutus)
{
    kulutus = eka.laskeKulutus(kulutus) + toka.laskeKulutus(kulutus) + kolmas.laskeKulutus(kulutus);

    cout << "Kerrostalon kulutus = " << kulutus << endl;

    return kulutus;
}
