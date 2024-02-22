#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

using namespace std;
class ItalianChef: public Chef
{
public:
    ItalianChef(string chefName, int, int);
    ~ItalianChef();

    string getName();
    void makePasta();

private:
    int vesi;
    int jauhot;

};

#endif // ITALIANCHEF_H
