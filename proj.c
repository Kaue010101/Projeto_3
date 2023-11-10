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

//função para listar todas as tarefas cadastradas
void listarTarefas(struct Tarefa tarefas[], int numTarefas) {
    if (numTarefas == 0) {
        printf("A lista de tarefas esta vazia.\n");
        return;
    }

    printf("Lista de Tarefas:\n");
    for (int i = 0; i < numTarefas; i++) {
        printf("Tarefa %d:\n", i + 1);
        printf("Prioridade: %d\n", tarefas[i].prioridade);
        printf("Descricao: %s\n", tarefas[i].descricao);
        printf("Categoria: %s\n", tarefas[i].categoria);
    }
}

//função para deletar uma tarefa
void deletarTarefa(struct Tarefa tarefas[], int *numTarefas) {
    if (*numTarefas == 0) {
        printf("A lista de tarefas esta vazia. Nao ha tarefas para deletar.\n");
        return;
    }

    int indice;
    printf("Informe a tarefa que deseja deletar (1 a %d): ", *numTarefas);
    scanf("%d", &indice);

    if (indice < 1 || indice > *numTarefas) {
        printf("Indice invalido. Informe um índice valido.\n");
        return;
    }

    for (int i = indice - 1; i < *numTarefas - 1; i++) {
        tarefas[i] = tarefas[i + 1];
    }

    (*numTarefas)--;
    printf("Tarefa deletada com sucesso!\n");
}

void alterarTarefa(struct Tarefa tarefas[], int numTarefas) {
    // Implementação da função para alterar uma tarefa
    int indice;
    printf("Digite o índice da tarefa que deseja alterar: ");
    scanf("%d", &indice);

    if (indice >= 0 && indice < numTarefas) {
        // Lógica para obter novos valores do usuário e alterar a tarefa
        printf("Digite a nova prioridade: ");
        scanf("%d", &tarefas[indice].prioridade);

        printf("Digite a nova categoria: ");
        scanf("%s", tarefas[indice].categoria);

        printf("Digite o novo estado: ");
        scanf("%s", tarefas[indice].estado);

        printf("Digite a nova descricao: ");
        scanf("%s", tarefas[indice].descricao);

        printf("Tarefa alterada com sucesso!\n");
    } else {
        printf("Índice inválido!\n");
    }
}
