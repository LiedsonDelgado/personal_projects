#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a = 0.0; //tamanho de area(m^2) a ser pintada
    float cobertura = 0.0; //1 litro por cada 3m^2
    float custo = 0.0; //18 latas de R$80,00 cada
    int qLatas; //quantidade de latas
    float preco = 0.0; //preco total 

    cout << "--LOJA DE TINTAS--\n";
    cout << "Area a ser pintada(m^2): ";
    cin >> a;

    cobertura = a/3;
    qLatas = ceil(cobertura/18);
    
    preco = qLatas*80.00;

    cout << "Serao necessarios: " << qLatas << " lata(s) de tinta\n";
    cout << "Preco total: R$" << preco;

    return 0;
}