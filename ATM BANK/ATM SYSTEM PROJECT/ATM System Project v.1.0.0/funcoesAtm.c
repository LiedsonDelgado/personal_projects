#include "AtmBank.h"
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

void setColor(int color){//Funcão utilizada para mudar a cor dos caracteres do terminal[nesse caso para verde(color 2)]
    HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void coletaDados(){
    printf("N");
        scanf("");
    printf("");
        scanf("");
}

void realizarLevantamento(){

}

void gerenciarSaldo(){

}

void gerarRecibo(){

}

void realizarTransferencia(){

}

void reclamacao(){

}