#ifndef ATM_H
#define ATM_H

#define MAX_Accounts 1000000000
#define MAX_Char_Name 100000

//Estrutura de Dados
struct Dados_Cliente_ATM{
    int pin;
    int n_conta;
    float saldo;
    char nome[MAX_Char_Name];
};

typedef struct Dados_Cliente_ATM dados_cliente;

//Variaveis Globais
dados_cliente user_c; //user_c => coletor de dados do usuario
dados_cliente Cliente[MAX_Accounts]={ //vetor que guardar cada cliente e seus dados

    //Clientes para Teste
    {1234,246810,1000.0,"John"},
    {4321,231232,2000.0,"Jimmy"}
};

//Funcoes Usuario > ATM > Sistema Bancario
int autenticar_dados(); //recebe os dados e valida os dados presentes no sistema
int realizar_levantamento(); //realiza um levantamento e atualiza o saldo
int gerenciar_conta(); //exibe todas as informacoes da conta
int realizar_transferencia(); //realizar uma ou varias transferencia(s) de um cliente para outro diretamente do ATM

//Funcoes do ATM > Sistema Bancario
int carregar_base_dados(); //carrega o ficheiro que contem a base de dados gerado pelo Sistema do Banco
int atualizar_base_dados(); //atualiza o ficheiro com modificacoes(ex:saldo,etc) feitas para ser lido pelo Sistema do Banco
int gerar_recibo(); //gera um recibo que exibe as movimentacoes feitas+info do cliente(ex:saldo disponivel,saldo levantado)

#endif