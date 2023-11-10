#include "proj.h"
#include <stdio.h>
int compararStrings(const char str1[], const char str2[]) {
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; // Retorna a diferença dos caracteres
        }
    }

    return str1[i] - str2[i]; // Retorna 0 se as strings forem iguais
}

//função para cadastrar uma nova tarefa
void cadastrarTarefa(struct Tarefa tarefas[], int *numTarefas) {
    if (*numTarefas >= MAX_TAREFAS) {
        printf("A lista de tarefas esta cheia. Nao e possível adicionar mais tarefas.\n");
        return;
    }

    struct Tarefa novaTarefa;

    printf("Cite a urgencia da tarefa (0 a 10): ");
    scanf("%d", &novaTarefa.prioridade);
    printf("Qual a tarefa: ");
    getchar();

    //descrição da tarefa
    int i = 0;
    char c;
    while (i < MAX_DESCRICAO - 1 && (c = getchar()) != '\n') {
        novaTarefa.descricao[i++] = c;
    }
    novaTarefa.descricao[i] = '\0';

    printf("Cite quando sera realizada: ");

    //leitura da categoria da tarefa
    i = 0;
    while (i < MAX_CATEGORIA - 1 && (c = getchar()) != '\n') {
        novaTarefa.categoria[i++] = c;
    }
    novaTarefa.categoria[i] = '\0';

    tarefas[*numTarefas] = novaTarefa;
    (*numTarefas)++;
    printf("Cite o estado da tarefa: ");

    // Leitura do estado da tarefa
    i = 0;
    while (i < MAX_ESTADO - 1 && (c = getchar()) != '\n') {
        novaTarefa.estado[i++] = c;
    }
    novaTarefa.estado[i] = '\0';

    tarefas[*numTarefas] = novaTarefa;
    (*numTarefas)++;

    printf("Tarefa cadastrada com sucesso!\n");
}
