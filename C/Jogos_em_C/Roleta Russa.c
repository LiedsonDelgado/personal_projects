#include<stdio.h>
#include<stdlib.h>

#include<locale.h>
#include<unistd.h>

int main(){
	setlocale (LC_ALL,"PORTUGUESE");

int random_bullet;
int keep_shooting;

do{
	printf("\n");
	printf("-----------------------------------------------------------\n");
printf("Atirar?\n");
	printf("[1]-Sim [0]-Nao:");
		scanf("%d",&keep_shooting);
			random_bullet=1+rand()%6;

if (keep_shooting==0){
	printf("VOCE DECIDIU NAO ARRISCAR SUA VIDA\n");
		break;
}
printf("Carregando uma bala nos 6 espacos(vazios) da arma...\n");
	sleep(3);

	if(random_bullet==1){
		printf(">BAANNG!!!<\n");
			sleep(1);
			printf("VOCE MORREU!!!\n");
				break;
	}else{
		printf(">BAANNG!!!<\n");
			sleep(2);
			printf("VOCE AINDA ESTA VIVO!!!\n");
	}

}
while (keep_shooting!=0);
	printf("[FIM DO JOGO!]");
return 0;
}
