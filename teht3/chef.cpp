#include "chef.h"
#include <iostream>

Chef::Chef(string chefName) : name(chefName)
{
    cout << "Chef " << name << " konsturktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " desturktori" << endl;

}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;

}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup" << endl;

}
