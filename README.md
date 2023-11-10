# Projeto_3

Este programa em C é um sistema simples de gerenciamento de tarefas. Ele permite ao usuário:
0.compararStrings: Uma função auxiliar que compara duas strings caractere a caractere. Retorna a diferença entre os caracteres quando são diferentes ou zero se as strings são iguais.
1 - cadastrarTarefa: Permite ao usuário cadastrar uma nova tarefa. Solicita informações como urgência (prioridade), descrição, categoria e estado. Adiciona a nova tarefa à lista de tarefas.
2 - listarTarefas: Exibe na tela todas as tarefas cadastradas, mostrando prioridade, descrição e categoria.
3 - deletarTarefa: Permite ao usuário deletar uma tarefa existente, informando o índice da tarefa a ser deletada.
4 - alterarTarefa: Permite ao usuário alterar informações de uma tarefa existente, como prioridade, categoria, estado e descrição.
5 - filtrarPorPrioridade: Exibe na tela as tarefas que têm uma determinada prioridade, informada pelo usuário.
6 - filtrarPorEstado: Exibe na tela as tarefas que têm um determinado estado, informado pelo usuário.
7 - filtrarPorCategoria: Exibe na tela as tarefas ordenadas por prioridade que têm uma determinada categoria, informada pelo usuário.
8 - filtrarPorPrioridadeECategoria: Exibe na tela as tarefas que têm uma determinada prioridade e categoria, informadas pelo usuário.
9 - exportarPorPrioridade: Cria um arquivo chamado "export_por_prioridade.txt" e salva as tarefas com uma determinada prioridade nesse arquivo.
10 - exportarPorCategoria: Cria um arquivo chamado "export_por_categoria.txt" e salva as tarefas com uma determinada categoria nesse arquivo.
11 - exportarPorPrioridadeECategoria: Cria um arquivo chamado "export_por_prioridade_e_categoria.txt" e salva as tarefas com uma determinada prioridade e categoria nesse arquivo. 
0. Sair: Encerra o programa. Quando o usuário escolhe esta opção, o loop principal é interrompido, e o programa finaliza.
O programa utiliza uma estrutura de dados para representar uma tarefa e organiza suas operações por meio de um menu interativo em um loop, onde o usuário escolhe as opções até decidir sair do programa.
