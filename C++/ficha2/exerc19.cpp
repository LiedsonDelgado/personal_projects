#include<iostream>
using namespace std;

int main(){
    int a,b,maior;

    cout << "-Digite um valor: ";
    cin >> a;
    cout << "Valor digitado foi " << a << "\n\n";

    cout << "-Digite outro valor: ";
    cin >> b;
    cout << "Valor digitado foi " << b << "\n\n";

    if(a > b){
        maior = a;
    }
    
    if(a < b){
        maior = b;
    }

    cout << ">>O maior digitado foi " << maior << "\n";

    return 0;
}