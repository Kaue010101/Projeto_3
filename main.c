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
        printf("3. Deletar Tarefa\n");
        printf("4. Alterar Tarefa\n");
        printf("5. Filtrar por Prioridade\n");
        printf("6. Filtrar por Estado\n");
        printf("7. Filtrar por Categoria\n");
        printf("8. Filtrar por Prioridade e Categoria\n");
        printf("9. Exportar por Prioridade\n");
        printf("10. Exportar por Categoria\n");
        printf("11. Exportar por Prioridade e Categoria\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

 switch (opcao) {
            case 1:
                cadastrarTarefa(tarefas, &numTarefas);//função para cadastrar uma nova tarefa
                break;
            case 2:
                listarTarefas(tarefas, numTarefas);//função para listar todas as tarefas
                break;
            case 3:
                deletarTarefa(tarefas, &numTarefas);// função para deletar uma tarefa
                break;
            case 4:
                alterarTarefa(tarefas, numTarefas);
                break;
            case 5:
                filtrarPorPrioridade(tarefas, numTarefas);
                break;
            case 6:
                filtrarPorEstado(tarefas, numTarefas);
                break;
            case 7:
                filtrarPorCategoria(tarefas, numTarefas);
                break;
            case 8:
                filtrarPorPrioridadeECategoria(tarefas, numTarefas);
                break;
            case 9:
                exportarPorPrioridade(tarefas, numTarefas);
                break;
            case 10:
                exportarPorCategoria(tarefas, numTarefas);
                break;
            case 11:
                exportarPorPrioridadeECategoria(tarefas, numTarefas);
                break;
            case 0:
                printf("Saindo do programa. Ate mais!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
