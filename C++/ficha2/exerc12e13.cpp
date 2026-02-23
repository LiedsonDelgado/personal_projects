#include<iostream>
#include<iomanip>
using namespace std;

//Exercicio 12 e 13
int main(){
    float h = 0.0; //altura
    float imc = 0.0; //indice de massa corporal
    int opc;

    cout << "--CALCULADORA IMC--\n";
    cout << "1-Homem\n";
    cout << "2-Mulher\n";
    cout << "Seu sexo: ";
    cin >> opc;

    cout << "Sua altura(m): ";
    cin >> h;

    switch(opc){
        case 1:
            imc = (72.7*h)-58;
            cout << "O seu peso ideal(IMC) deve ser: " << fixed << setprecision(2) << imc <<"kg\n";
            break;

        case 2:
            imc = (62.1*h)-44.7;
            cout << "O seu peso ideal(IMC) deve ser: " << fixed << setprecision(2) << imc <<"kg\n";
            break;

        default:
            cout << "Opcao invalida!\n";
            break;
    }

    return 0;
}