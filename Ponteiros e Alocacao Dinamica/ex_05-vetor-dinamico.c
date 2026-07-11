/**
 * @file ex3_vetores_dinamicos.c
 * @brief Criação e manipulação de vetores dinâmicos usando potências matemáticas.
 *
 * Atividades realizadas:
 * a) Cria uma variável inteira e dois ponteiros do tipo inteiro.
 * b) Pergunta ao usuário o tamanho do vetor e armazena na variável inteira.
 * c) Aloca dinamicamente os dois vetores (um com tamanho N e outro com 2N).
 * d) Preenche o primeiro vetor com potências de 2.
 * e) Preenche o segundo vetor com potências de 3.
 * f) Usa a função pow() da biblioteca math.h para os cálculos.
 *
 * @author Giselle Oliveira (GitHub: @pythanx)
 * @date 16/05/2026
 * @see https://github.com/pythanx/Estrutura-de-Dados
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável para armazenar o tamanho e dois ponteiros
    int size;
    int* vet1, * vet2;

    printf("\nInsira o tamanho do vetor 1: ");
    scanf("%d", &size);

    // Aloca dinamicamente os dois vetores
    vet1 = (int*)malloc(size * sizeof(int));
    vet2 = (int*)malloc((2 * size) * sizeof(int));

    // Preenche o vetor 1 com potências de 2
    printf("\nVetor 1 com potencias de 2:\n");
    for (int i = 0; i < size; i++) {
        vet1[i] = (int)pow(2, i);
        printf("Posicao %d: %d\n", i, vet1[i]);
    }

    // Preenche o vetor 2 com potências de 3
    printf("\nVetor 2 com potencias de 3:\n");
    for (int i = 0; i < (2 * size); i++) {
        vet2[i] = (int)pow(3, i);
        printf("Posicao %d: %d\n", i, vet2[i]);
    }

    // Libera a memória alocada
    free(vet1);
    free(vet2);

    return 0;
}