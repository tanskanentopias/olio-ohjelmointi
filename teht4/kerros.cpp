#include "kerros.h"
#include <iostream>
using namespace std;


Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}

void Kerros::maaritaAsunnotKerros()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double Kerros::laskeKulutus(double kulutus)
{
    kulutus = as1.laskeKulutus(kulutus) + as2.laskeKulutus(kulutus) + as3.laskeKulutus(kulutus) + as4.laskeKulutus(kulutus);
    return kulutus;
}
