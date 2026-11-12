#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>
using namespace std;

int main()
{
    //Car
    Car objC;
    objC.setBrand("Audi");
    objC.setModel("A3");
    objC.setYearModel(2020);

    objC.printData();


    //Rectangle
    Rectangle* objR = new Rectangle;
    objR->setHeight(20);
    objR->setWidth(40);
    cout<<"*************************"<<endl;
    cout<<"Pinta-ala "<<objR->getArea()<<endl;
    cout<<"Circumference "<<objR->getCircum()<<endl;
    delete objR;
    objR =nullptr;

    //Student
    cout<<"**************************"<<endl;
    unique_ptr<Student> objStudent = make_unique<Student>();
    objStudent->setName("Matti");
    objStudent->setStudentNumber(12345);
    objStudent->setAverage(666);

    cout<<objStudent->getName()<<endl;
    cout<<objStudent->getStudentNumber()<<endl;
    cout<<objStudent->getAverage()<<endl;
    return 0;
}
