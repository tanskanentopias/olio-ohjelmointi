#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"
#include <iostream>
using namespace std;

int main()
{

    Kerrostalo * kerrostalo;

    kerrostalo = new Kerrostalo;

    kerrostalo->laskeKulutus(200);

    delete kerrostalo;

    return 0;
}
