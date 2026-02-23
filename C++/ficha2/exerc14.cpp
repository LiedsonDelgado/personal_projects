#include<iostream>

using namespace std;

int main(){
    float p = 0.0; //peso(kg)
    float excesso = 0.0; //excesso de peso(kg)
    float multa = 0.0; //total da multa a pagar

    cout << "REGULADOR DE PESCA\n";
    cout << "Peso do peixe(kg): ";
    cin >> p;

    if(p > 50){
        excesso = p-50;
        multa = 4.00*excesso;

        cout << "Foi pescado um peixe de " << p << "kg que teve " << excesso << "kg de excesso logo a multa a pagar sera de R$" << multa;
    }else{
        cout << "Foi pescado um peixe de " << p << "kg entao nao tera multa por excesso\n";
    }

    return 0;
}