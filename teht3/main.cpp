#include "italianchef.h"
#include "chef.h"
#include <iostream>

using namespace std;

int main()
{

    Chef chef("Jyrki");
    ItalianChef italianchef("Mario");


    chef.makeSalad();
    chef.makeSoup();
    italianchef.makePasta(250, 100);

    return 0;
}
