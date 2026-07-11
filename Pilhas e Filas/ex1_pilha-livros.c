/**
 * @file atv1_estrutura_pilha.c
 * @brief Sistema de controle para a pilha de livros devolvidos na recepção da biblioteca.
 *
 * Atividades realizadas:
 * a) Cria uma estrutura para a pilha de livros contendo dados (código, nome e autor)
 *    e dois números inteiros para controle de início e final.
 * b) Define a variável que será um vetor do tipo pilha de livros.
 * c) Cria a função de empilhamento (push), validando o limite máximo de armazenamento.
 * d) Cria a função de desempilhamento (pop), validando se a estrutura contém elementos.
 * e) Função para exibir em tela todos os livros atualmente empilhados.
 *
 * @author Giselle Oliveira (GitHub: @pythanx)
 * @date 16/05/2026
 * @see https://github.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define SIZE 4 // Tamanho máximo da pilha

 // Estrutura que representa um livro
struct livros {
    int code;
    char name[50];
    char author[50];
};

// Estrutura que representa a pilha de livros
struct pilha_livros {
    struct livros data[SIZE];
    int ini, fim;
};

// Variável global do tipo pilha de livros
struct pilha_livros livro;

// Função para empilhar um livro
void push(struct livros l) {
    // Verifica se a pilha está cheia
    if (livro.fim == SIZE) {
        printf("\nPilha de livros cheia!\n");
    }
    else {
        livro.data[livro.fim] = l;
        livro.fim++;
    }
}

// Função para desempilhar um livro
void pop() {
    if (livro.fim == livro.ini) {
        printf("\nPilha de livros vazia!\n");
    }
    else {
        printf("\nLivro Removido: %s\n", livro.data[livro.fim - 1].name);
        livro.fim--;
    }
}

// Função para exibir todos os livros da pilha
void mostrar() {
    printf("\n------ Pilha de livros (base -> topo): -------\n");
    for (int i = 0; i < livro.fim; i++) {
        printf("Codigo: %d\n", livro.data[i].code);
        printf("Nome: %s\n", livro.data[i].name);
        printf("Autor: %s\n", livro.data[i].author);
        printf("--------------------------------\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Inicializa a pilha
    livro.fim = 0;
    livro.ini = 0;

    // Cria os livros
    struct livros l1 = { 101, "Harry Potter e a Pedra Filosofal", "J.K. Rowling" };
    struct livros l2 = { 102, "Cinquenta Tons de Cinza", "E.L James" };
    struct livros l3 = { 103, "O Senhor dos Aneis", "J.R.R. Tolkien" };
    struct livros l4 = { 104, "O Pequeno Principe", "Antoine de Saint-Exupery" };
    struct livros l5 = { 105, "As Cronicas de Gelo e Fogo", "George R.R. Martin" };
    struct livros l6 = { 106, "O Principe", "Nicolau Maquiavel" };

    // Testa as funções da pilha
    push(l1);
    push(l2);
    pop();
    push(l3);
    push(l4);
    push(l5); // Não entra porque a pilha está cheia
    pop();
    push(l6);
    mostrar();

    return 0;
}