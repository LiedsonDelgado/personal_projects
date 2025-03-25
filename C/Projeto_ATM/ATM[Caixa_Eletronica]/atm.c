//Bibliotecas
#include "atm.h"
#include<unistd.h> //para funcionalidades relacionados ao terminal do Linux ou #include<windows.h> para Windows>
#include<time.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//Funcoes Usuario > ATM > Sistema Bancario
int autenticar_dados(){

}

int realizar_levantamento(){

}

int gerenciar_conta(){

}

int realizar_transferencia(){

}

//Funcoes do ATM > Sistema Bancario
int carregar_base_dados(){
    
}

int atualizar_base_dados(){

}

int gerar_recibo(){
//Obtem a hora atual
    	time_t now;
    	time(&now); // Obter a hora atual
    	char *timeString = ctime(&now);

    FILE *ficheiro;

ficheiro=fopen("ficheiro.txt","w+");//Abertura
    if(ficheiro==NULL){
        printf("Erro ao abrir ficheiro\n");
    }

    fprintf(ficheiro,"...............[Recibo BCV ATM SERVICES]...............\n");
    fprintf(ficheiro," RECIBO N:%d                                           \n",);
    fprintf(ficheiro,".......................................................\n");
    fprintf(ficheiro,"                                                       \n");
        fprintf(ficheiro," CLIENTE: %s                                           \n",);
        fprintf(ficheiro," N CONTA: %s                                           \n",);
        fprintf(ficheiro," VALOR DO LEVANTAMENTO FEITO.............[%d CVE]      \n",);
        fprintf(ficheiro," VALOR DISPONIVEL NA CONTA...............[%d CVE]      \n",);
    fprintf(ficheiro,"                                                       \n");
    fprintf(ficheiro,"                                                       \n");
    fprintf(ficheiro,"                                                       \n");
        fprintf(ficheiro," HORARIO DAS OPERACOES FEITAS:AS [%s]\n",timeString);
    fprintf(ficheiro,".......................................................\n");

fclose(ficheiro);
    return 0;
}