#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
    int n = 4;
    float soma = 0;
    float nota = 0.0;
    float media = 0.0;

    for(int i=0;i<n;i++){
        cout << "Introduza uma nota: ";
        cin >> nota;

        soma += nota;
    }
    media = soma/n;
    cout << "A media das nota bimestrais foi " << fixed << setprecision(1) << media << "\n";
    system("pause");

    return 0;
}