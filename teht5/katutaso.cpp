#include "katutaso.h"
#include "asunto.h"
#include <iostream>

using namespace std;

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
}

double Katutaso::laskeKulutus(double kulutus)
{


    kulutus = as1.laskeKulutus(kulutus) + as2.laskeKulutus(kulutus) + Kerros::laskeKulutus(kulutus);

    return kulutus;

}
