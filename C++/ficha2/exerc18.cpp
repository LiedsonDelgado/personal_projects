#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float mb = 0.0; //tamanho arquivo
    float vlink = 0.0; //velocidade download em Mbps
    float tdownload = 0.0; //tempo de download

    cout << "Tamanho do arquivo(MB): ";
    cin >> mb;

    cout << "Velocidade(Mbps): ";
    cin >> vlink;

    tdownload = (mb*8)/vlink/60;

    cout << "Tempo estimado para o download terminar: " << fixed << setprecision(2) << tdownload << " minutos\n";

    return 0;
}