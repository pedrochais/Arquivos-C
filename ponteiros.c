#include <stdio.h>
#include <malloc.h>

int menu(char *titulo, char **texto, int quantidade_opcoes);

int main(void){
    char **opcoes;

    opcoes = (char**)malloc(sizeof(char)*3);

    for(int i = 0; i < 3; i++){
        opcoes[i] = (char*)malloc(sizeof(char)*20);
    }

    opcoes[0] = "Opção 1";
    opcoes[1] = "Opção 2";

    int decisao = menu("Menu", opcoes, 2);

    if(decisao == 1) printf("Opção 1 escolhida\n");
    if(decisao == 2) printf("Opção 2 escolhida\n");

    return 0;
}

int menu(char *titulo, char **texto, int quantidade_opcoes){
    int entrada, boolean = 0;
    
    while(boolean == 0){
        system("clear");
        printf("%s\n", titulo);

        for(int i = 0; i < quantidade_opcoes; i++){
            printf("%i. %s\n", i+1, texto[i]);
        }
        printf("~ ");

        scanf("%i", &entrada);
        
        for(int i = 0; i < quantidade_opcoes; i++){
            if(entrada == i+1){
                return i+1;
            };
        }
    }
    return 0;
}
