#include<iostream>
using namespace std;

//Calcula da area de um quadrado
int main(){
    float l = 0.0;
    float a = 0.0;
    float dobroArea = 0.0;

    cout << "Insira um lado do quadrado: ";
    cin >> l;

    a = l*l;
    dobroArea = 2*a;

    cout << "Dobro da area = " << dobroArea << "\n";

    return 0;
}