#include<iostream>
using namespace std;

int main(){
    int x = 0;
    int y = 0;
    int soma = 0;

    cout << "Insira um valor para x: ";
    cin >> x;

    cout << "Insira um valor para y: ";
    cin >> y;

    soma = x+y;
    cout << "A soma de x + y = " << soma << "\n";

    return 0;
}