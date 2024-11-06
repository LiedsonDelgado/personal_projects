#ifndef ATMBANK_H
#define ATMBANK_H

struct DADOS_CLIENTE{
int senha;
int n_conta;
int saldo_bancario;
};

typedef struct DADOS_CLIENTE user_info;

//Funções

void coletaDados(int dados);
void realizarLevantamento();
void gerenciarSaldo();
void gerarRecibo();
void realizarTransferencia();
void reclamacao();

#endif //ATMBANK_H