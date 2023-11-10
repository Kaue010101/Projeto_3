#include "proj.h"
#include <stdio.h>

// função principal que gerencia o menu e as operações das tarefas
int main() {
    struct Tarefa tarefas[MAX_TAREFAS];
    int numTarefas = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar Tarefa\n");
        printf("2. Listar Tarefas\n");

 switch (opcao) {
            case 1:
                cadastrarTarefa(tarefas, &numTarefas);//função para cadastrar uma nova tarefa
                break;
                listarTarefas(tarefas, numTarefas);//função para listar todas as tarefas
                break;
