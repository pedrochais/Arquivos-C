#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct _pessoa_{
    char nome[20];
    char idade[3];
}Pessoa;

int main(void){
    FILE *arquivo;
    //fopen retorna um ponteiro para a estrutura FILE arquivo
    if((arquivo = fopen("arquivo.txt", "r")) == NULL){ //caso a abertura do arquivo retorne NULL -> 1
        printf("[Erro ao abrir arquivo.txt]\n\n");
        arquivo = fopen("arquivo.txt", "w"); //1. o arquivo será criado
        printf("[Arquivo arquivo.txt criado]\n\n");
    } else {
        printf("[Sucesso ao abrir arquivo.txt]\n\n");
        arquivo = fopen("arquivo.txt", "w");
    }

    int quantidade;

    printf("Quantidade de pessoas que serão registrada\n~ ");
    scanf("%i", &quantidade);

    for(int i = 0; i < quantidade; i++){
        Pessoa pessoa;
        char nome[20];
        char idade[3];

        printf("Cadastro\n");

        printf("Nome: ");
        getchar();
        fgets(nome, 20, stdin);
        strcpy(pessoa.nome, nome);

        printf("Idade: ");
        fgets(idade, 3, stdin);
        strcpy(pessoa.idade, idade);


        fputs("Pessoa\nNome: ", arquivo);
        fputs(pessoa.nome, arquivo);
        fputs("Idade: ", arquivo);
        fputs(pessoa.idade, arquivo);
        fputs("\n", arquivo);

        printf("\n[Informações registradas em arquivo.txt]\n\n");
    }

    fclose(arquivo);
    return 0;
}