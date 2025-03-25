#include<stdio.h>

int main(){
int valor_levantado=5000;
int valor_disponivel=10000;
int n_recibo=101;

char n_conta[]="AA01B67NV44";
char nome[]="Jose Dias da Luz";

int horario_hora=12;
int horario_minuto=27;

int dia= 12;
int mes= 01;
int ano= 2024;

FILE *ficheiro;

ficheiro=fopen("ficheiro.txt","w+");//Abertura
    if(ficheiro==NULL){
        printf("Erro ao abrir ficheiro\n");
    }

    fprintf(ficheiro,"...............[Recibo BCV ATM SERVICES]...............\n");
    fprintf(ficheiro," RECIBO N:%d                                           \n",n_recibo);
    fprintf(ficheiro,".......................................................\n");
    fprintf(ficheiro,"                                                       \n");
        fprintf(ficheiro," CLIENTE: %s                                           \n",nome);
        fprintf(ficheiro," N CONTA: %s                                           \n",n_conta);
        fprintf(ficheiro," VALOR DO LEVANTAMENTO FEITO.............[%d CVE]      \n",valor_levantado);
        fprintf(ficheiro," VALOR DISPONIVEL NA CONTA...............[%d CVE]      \n",valor_disponivel);
    fprintf(ficheiro,"                                                       \n");
    fprintf(ficheiro,"                                                       \n");
    fprintf(ficheiro,"                                                       \n");
        fprintf(ficheiro," HORARIO DAS OPERACOES FEITAS:AS [%dh%d] de [%d/%d/%d] \n",horario_hora,horario_minuto,dia,mes,ano);
    fprintf(ficheiro,".......................................................\n");

fclose(ficheiro);

return 0;
}