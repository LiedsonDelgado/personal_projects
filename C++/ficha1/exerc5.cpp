#include<iostream>
using namespace std;

int main(){
    float metros = 0.0;
    float centimetros = 0.0;

    cout << "CONVERSOR DE METROS(m) PARA CENTIMETROS(cm)\n";
    cout << "Metros: ";
    cin >> metros;

    centimetros = metros*100.00;

    cout << metros << "m e equivalente a " << centimetros <<"cm\n";

    return 0;
}