#include<iostream>
using namespace std;

int main(){
    float c = 0.0;
    float f = 0.0;

    cout << "--CONVERSOR FARENHEIT(F) PARA CELSIUS(C)--\n";
    cout << "Farenheit: ";
    cin >> f;

    c = (5*(f-32)/9);

    cout << f <<"F equivale a " << c << "C\n";

    return 0;
}