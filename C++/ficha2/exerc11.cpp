#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

//Enunciado: 11-Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.
int main(){
    int n1 = 0;
    int n2 = 0;
    float n3 = 0;
    float res1 = 0.0;
    float res2 = 0.0;
    float res3 = 0.0;
    
    cout << "N1(inteiro): ";
    cin >> n1;
    res1 = ((2*n1)*(n2/2));

    cout << "N2(inteiro): ";
    cin >> n1;
    res2 = (3*n1)+n3;

    cout << "N3(real): ";
    cin >> n3;
    res3 = n3*n3*n3;


    cout << ">" << res1 << fixed << setprecision(3) << "\n";
    cout << ">" << res2 << fixed << setprecision(3) << "\n";
    cout << ">" << res3 << fixed << setprecision(3) << "\n";

    return 0;
}