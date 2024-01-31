#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

using namespace std;
class ItalianChef: public Chef
{
public:
    ItalianChef(string chefName);
    ~ItalianChef();

    string getName();
    void makePasta(int, int);

private:
    int vesi;
    int jauhot;

};

#endif // ITALIANCHEF_H
