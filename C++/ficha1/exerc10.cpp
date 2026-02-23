#include<iostream>
using namespace std;

int main(){
    float c = 0.0;
    float f = 0.0;

    cout << "--CONVERSOR CELSIUS(C) PARA FARENHEIT(F)--\n";
    cout << "Celsius: ";
    cin >> c;

    f = (c*1.8)+32;

    cout << c <<"C equivale a " << f << "F\n";

    return 0;
}