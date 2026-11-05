#include <iostream>
#include <iomanip>
using namespace std;

void calcSum(int a, int b);
void calcDiv(float a, float b);
int retSum(int a, int b);
float retDiv(float a, float b);

int main()
{
    int a;
    int b;
    float result;
    cout<<"Anna eka kokonaisluku "<<endl;
    cin>>a;
    cout<<"Anna toka kokonaisluku "<<endl;
    cin>>b;
    calcSum(a, b);
    calcDiv(a, b);
    retSum(a, b);{
        cout<<"Yhteenlaskettuna = "<<retSum(a,b)<<endl;
    };

    try {
    result = retDiv(a,b);
        cout << a << "/" << b << " = "<<fixed<< setprecision(2)<< result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<<e.what()<< endl;
    };

    return 0;
}
void calcSum(int a, int b)
{
    cout<<"calcSum: Yhteenlaskettuna = "<<a+b<<endl;
}

void calcDiv(float a, float b)
{
    float result = a / b;
    if(b == 0)
    {
        cout<<"Jakaja ei saa olla nolla!"<<endl;
    } else {
        cout<<"caldDiv: Jaettuna = "<<fixed<<setprecision(2)<< result <<endl;
        cout<<"----------------------------"<<endl;
    }
}

int retSum(int a, int b){
    return a + b;
}

float retDiv(float a, float b){
    if(b==0)
    {
        throw runtime_error("jakaja ei saa olla nolla");
    }else{
        return a / b;
    }

}
