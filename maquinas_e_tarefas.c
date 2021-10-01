#include <stdio.h>
#include <malloc.h>

typedef struct maquina{
    int numero;
    int tarefa;
    int tarefa_custo;
}Maquina;

int main(void) {
    FILE *arquivo;

    Maquina *maquina;

    int tarefa_numero;
    int custo_total = 0;
    int quantidade_maquinas;
    int quantidade_tarefas;

    printf("Insira a quantidade de máquinas: ");
    scanf("%i", &quantidade_maquinas);
    printf("Insira a quantidade de tarefas para cada máquina: ");
    scanf("%i", &quantidade_tarefas);

    int tarefas_custos[quantidade_maquinas][quantidade_tarefas];

    maquina = (Maquina *)malloc(sizeof(int)*quantidade_maquinas);

    for(int i = 0; i < quantidade_maquinas; i++){
        printf("Máquina[%i]\n", i+1);
        for(int j = 0; j < quantidade_tarefas; j++){
            printf("Tarefa[%i] = ", j+1);
            scanf("%i", &tarefas_custos[i][j]);
        }
    }    

    //selecionar a tarefa menos dispendiosa
    for(int i = 0; i < quantidade_maquinas; i++){
        int menor_custo = tarefas_custos[i][0];
        for(int j = 0; j < quantidade_tarefas; j++){
            if(tarefas_custos[i][j] <= menor_custo){
                menor_custo = tarefas_custos[i][j];
                tarefa_numero = j+1;
            }
            
        }
        maquina[i].numero = i+1;
        maquina[i].tarefa_custo = menor_custo;
        maquina[i].tarefa = tarefa_numero;
    }

    //criação de arquivo
    arquivo = fopen("solucao.txt", "w");
    
    for(int i = 0; i < quantidade_maquinas; i++){
        fprintf(arquivo, "Máquina %i realizará a tarefa %i\n", maquina[i].numero, maquina[i].tarefa);
        custo_total += maquina[i].tarefa_custo;
    }
    fprintf(arquivo, "Custo total: %i", custo_total);

    fclose(arquivo);

    return 0;
}