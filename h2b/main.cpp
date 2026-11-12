#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    Car carObj;
    carList.emplace_back("Mazda","6",2008);
    carList.emplace_back("Volvo","V40",2015);
    carList.emplace_back("Toyota", "Corolla", 2010);

    //toisen olion tiedot
    cout<<"Toinen olio: ";
    carList[1].printData();

    cout<<"*****************************"<<endl;

    //Tulostaa kaikkien autojen tiedot
    cout<<"Kaikki oliot:"<<endl;

    for(Car &carObj: carList){
        carObj.printData();
    }

    return 0;
}
