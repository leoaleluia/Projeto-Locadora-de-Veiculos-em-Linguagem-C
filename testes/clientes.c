#include "clientes.h"
#ifndef CLIENTES_h
#define CLIENTES_H
#include <stdio.h>

void criarArquivoCliente(){
    FILE *arqClientess = fopen("listaClientess.txt", "w");
    if(arqClientess != NULL){
        fclose(arqClientess);
    }
}

void cadastrarCliente(){
    clientes c;
    FILE *arqClientess = fopen("listaClientess.txt", "a");
    printf("Digite o seu nome");
    scanf(" %[^\n]", c.nome);
    printf("Digite o seu e-mail");
    scanf(" %[^\n]", c.email);
    printf("Digite o seu cpf");
    scanf("%d", &c.cpf);
    printf("Digite sua senha de acesso");
    scanf("%d", &c.senha);

    fprintf(arqClientess, "%s\n", c.nome);
    fprintf(arqClientess, "%s\n", c.email);
    fprintf(arqClientess, "%d\n", c.cpf);
    fprintf(arqClientess, "%d\n", c.senha);

    fclose(arqClientess);
}
void listarCliente(){
    clientes clientesListas[100];
   
    FILE *arqClientess = fopen("listaClientess.txt", "r");
    clientes c;
    int ctr = 0;
    while(fscanf(arqClientess, " %[^\n]", c.nome) !=EOF){
        
        fscanf(arqClientess, " %[^\n]", c.email);
        fscanf(arqClientess, "%d", &c.senha);
        fscanf(arqClientess, "%d", &c.cpf);
        clientesListas[ctr] = c;
        ctr++;
    }   

    fclose(arqClientess);

    for (int i = 0; i < ctr; i++) {
        printf("Nome:  %s", clientesListas[i].nome);
        printf(" | Email: %s", clientesListas[i].email);
        printf(" | CPF:   %d", clientesListas[i].cpf);
        printf(" | Senha: %d\n", clientesListas[i].senha);
        printf("---------------------------\n");
    }
}
#endif
