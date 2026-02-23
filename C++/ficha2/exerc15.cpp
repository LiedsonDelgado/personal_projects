#include<iostream>
using namespace std;

int main(){
    float salario = 0.0;
    float liquido = 0.0;
    float bruto = 0.0;
    float ir = 0.0;
    float inss = 0.0;
    float sind = 0.0;
    float horas = 0.0;

    cout << "Salario por hora(R$): ";
    cin >> salario;

    cout << "Horas trabalhadas no mes: ";
    cin >> horas;

    bruto = (salario*horas);
    cout << "+ Salario Bruto: R$ " << bruto <<"\n";

    ir = bruto*0.11;
    cout << "- IR(11%): R$" << ir <<"\n";

    inss = bruto*0.08;
    cout << "- INSS(8%): R$" << inss <<"\n";

    sind = bruto*0.05;
    cout << "- Sindicato(5%): R$" << sind <<"\n";

    liquido = bruto-ir-inss-sind;
    cout << "= Salario Liquido: R$" << liquido <<"\n";

    return 0;
}