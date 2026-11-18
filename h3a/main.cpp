#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef objChef("Gordon Ramsay");
    objChef.makeSalad();
    objChef.makeSoup();

    ItalianChef objIchef("Anthony Bourdain");
    objIchef.makeSalad();
    objIchef.makeSoup();
    objIchef.makePasta();
    cout<<"name of the Italian Chef is "<<objIchef.getName()<<endl;

    return 0;
}
