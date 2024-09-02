
typedef struct ContaBancaria ContaBancaria;

//função que aloca memoria para uma struct conta e retorna seu endereço:
ContaBancaria * Cria_Conta(char * titular, float saldo, int numero);

//função para fazer a operação de depositar
void Deposita(ContaBancaria * conta, float deposito);

//função para fazer a operação de saque
void Saca(ContaBancaria * conta, float saque);

//Funçao para fazer uma operação de Transferencia
void Transfere(ContaBancaria * conta1, ContaBancaria * conta2, float transferencia);

//Função que verificaa saldo disponivel na conta:
void Verifica_Saldo(ContaBancaria * conta);

//função de deletar conta
void DeletaConta(ContaBancaria * conta, ContaBancaria * conta2);
