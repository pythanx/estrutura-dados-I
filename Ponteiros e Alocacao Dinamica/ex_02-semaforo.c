/**
 * @file ex2_semaforo.c
 * @brief Teste de protótipo de hardware de semáforo usando aritmética de ponteiros.
 *
 * Atividades realizadas:
 * a) Cria uma estrutura com dois atributos: cor (string) e id (inteiro).
 * b) Cria três variáveis do tipo definido no item a.
 * c) Cria um ponteiro do mesmo tipo.
 * d) Inicializa as estruturas:
 *    - cor vermelha, id 1
 *    - cor amarela, id 2
 *    - cor verde, id 3
 * e) Faz o ponteiro apontar para a primeira variável.
 * f) Usa aritmética de ponteiros para percorrer a memória e exibir os valores.
 *
 * @author Giselle Oliveira (GitHub: @pythanx)
 * @date 16/05/2026
 * @see https://github.com/pythanx/Estrutura-de-Dados
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

 // Estrutura que representa um semáforo
struct semaforo {
    char cor[30];
    int id;
};

// Vetor com as 3 variáveis do tipo semáforo
struct semaforo s[3];

// Ponteiro para o mesmo tipo
struct semaforo* ptr;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Inicializa os semáforos
    strcpy(s[0].cor, "vermelha");
    s[0].id = 1;
    strcpy(s[1].cor, "amarela");
    s[1].id = 2;
    strcpy(s[2].cor, "verde");
    s[2].id = 3;

    // Faz o ponteiro apontar para o primeiro elemento
    ptr = s; // ou ptr = &s[0];

    // Percorre a memória usando aritmética de ponteiros
    printf("\nSemaforo: \n");
    for (int i = 0; i < 3; i++) {
        printf("\n * cor: %s, id: %d", ptr->cor, ptr->id);
        ptr++; // Avança para o próximo elemento
    }

    return 0;
}