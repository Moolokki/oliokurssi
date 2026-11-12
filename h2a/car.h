#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car();
    void printData();
    void setBrand(string);
    void setModel(string);
    void setYearModel(int);

    string getBrand() const;
    string getModel() const;
    int getYearModel() const;
};

#endif // CAR_H
