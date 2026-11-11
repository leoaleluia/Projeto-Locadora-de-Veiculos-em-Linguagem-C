#ifndef CLIENTES_h
#define CLIENTES_H
#define TAM 100

typedef struct clientes{
    char nome[TAM];
    char email[TAM];
    int senha;
    int cpf;
    int codCliente;
}clientes;

void cadastrarCliente();
void listarCliente();
void criarArquivoCliente();










#endif