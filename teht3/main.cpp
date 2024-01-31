#include "italianchef.h"
#include "chef.h"
#include <iostream>

using namespace std;

int main()
{

    Chef chef("Jyrki");
    ItalianChef italianchef("Mario", 250, 100);


    chef.makeSalad();
    chef.makeSoup();
    italianchef.makePasta();

    return 0;
}
