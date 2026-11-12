#include "car.h"

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

Car::Car() {}

void Car::printData()
{
    cout<<"Merkki = "<<brand<<", Malli = "<<model<<", Vuosimalli = "<<yearModel<<endl;

}

Car::Car(string br, string mo, int yM)
{
    brand = br;
    model = mo;
    yearModel = yM;
}
