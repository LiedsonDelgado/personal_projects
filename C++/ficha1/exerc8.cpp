#include<iostream>
using namespace std;

int main(){
    float pagamento = 0.0;
    float horas = 0.0;
    float salario; //refere-se ao salario mensal(numero de horas trabalhadas x pagamento por hora)

    cout << "Quanto vc ganha por hora: ";
    cin >> pagamento;

    cout << "Quantas horas vc trabalha por mes: ";
    cin >> horas;

    salario = pagamento*horas;

    cout << "O seu salario sera de " << salario << "CVE\n";

    return 0;
}