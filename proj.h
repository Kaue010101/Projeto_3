#ifndef PROJ_H
#define PROJ_H

#define MAX_TAREFAS 100
#define MAX_DESCRICAO 300
#define MAX_CATEGORIA 100
#define MAX_ESTADO 100

//estrutura que representa uma tarefa
struct Tarefa {
    int prioridade;//prioridade da tarefa
    char descricao[MAX_DESCRICAO];//descrição da tarefa
    char categoria[MAX_CATEGORIA];//categoria da tarefa
    char estado[MAX_ESTADO];
    int tamanho_descricao;
    int tamanho_categoria;
};

//função para cadastrar uma nova tarefa
void cadastrarTarefa(struct Tarefa tarefas[], int *numTarefas);
//função para listar todas as tarefas cadastradas
void listarTarefas(struct Tarefa tarefas[], int numTarefas);
//função para deletar uma tarefa do sistema
void deletarTarefa(struct Tarefa tarefas[], int *numTarefas);
void alterarTarefa(struct Tarefa tarefas[], int numTarefas);
void filtrarPorPrioridade(struct Tarefa tarefas[], int numTarefas);
void filtrarPorEstado(struct Tarefa tarefas[], int numTarefas);
void filtrarPorCategoria(struct Tarefa tarefas[], int numTarefas);
void filtrarPorPrioridadeECategoria(struct Tarefa tarefas[], int numTarefas);
void exportarPorPrioridade(struct Tarefa tarefas[], int numTarefas);
void exportarPorCategoria(struct Tarefa tarefas[], int numTarefas);
void exportarPorPrioridadeECategoria(struct Tarefa tarefas[], int numTarefas);

#endif // PROJ_H
