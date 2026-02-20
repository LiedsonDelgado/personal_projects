#include<iostream>
#include<cmath>
using namespace std;

#define pi 3.14

//Calculo da Area de um circulo(A = PI*R^2)
int main(){
    float a;
    float r;

    cout << "Raio do circulo: ";
    cin >> r;

    //a = pi*(r*r);
    //ou
    a = pi*pow(r,2);

    cout << "Area = " << a << "\n";

    return 0;
}