#include "car.h"

Car::Car() {}

string Car::getBrand() const
{
    return brand;
}

string Car::getModel() const
{
    return model;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::printData()
{
    cout<<"Merkki "<<brand<<endl;
    cout<<"Malli "<<model<<endl;
    cout<<"Vuosimalli "<<yearModel<<endl;
}

void Car::setBrand(string newBrand)
{
    brand = newBrand;
}

void Car::setModel(string newModel)
{
    model = newModel;
}

void Car::setYearModel(int  newYearM)
{
    yearModel = newYearM;
}
