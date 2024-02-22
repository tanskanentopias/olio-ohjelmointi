#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string chefName, int j, int v) : Chef(chefName)
{
    jauhot = j;
    vesi = v;
    cout << "Chef " << getName() << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Chef " << getName() << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << getName() << " makes pasta with special recipe" << endl;
    cout << getName() << " uses jauhot = " << jauhot << endl;
    cout << getName() << " uses vesi = " << vesi << endl;

}
