## Estrutura de Dados I

Exercícios resolvidos da disciplina de Estrutura de Dados I.

## Estrutura do projeto
```
estrutura-dados-I/
├── README.md
├── CMakeLists.txt
├── Ponteiros e Alocacao Dinamica/
│ ├── ex_01-ponteiro-alocacao.c
│ ├── ex_02-semaforo.c
│ └── ex_05-vetor-dinamico.c
└── Pilhas e Filas/
└── ex1_pilha-livros.c
```

## Conteúdo

- Ponteiros e alocação dinâmica
- Pilhas e Filas
- Listas dinâmicas (em breve)
- Grafos e algoritmos de busca (em breve)

## Como compilar

### No CLion:
1. Abra o projeto como diretório
2. O CMake vai configurar automaticamente
3. Clique em "Build" e "Run"

### Pelo terminal:

```bash
mkdir build && cd build
cmake ..
make
./ex01
````

### Compilação manual:
```bash
gcc -o ex01 "Ponteiros e Alocacao Dinamica/ex_01-ponteiro-alocacao.c" -lm
./ex01
```

 A flag -lm é necessária para linkar a biblioteca math.h (função pow()).

## Exercícios
### Ponteiros e Alocação Dinâmica

| Arquivo | Descrição |
|---------|-----------|
| `ex_01-ponteiro-alocacao.c` | Alocação dinâmica de um inteiro e uso de ponteiros |
| `ex_02-semaforo.c` | Aritmética de ponteiros com estruturas de semáforo |
| `ex_05-vetor-dinamico.c` | Vetores dinâmicos com potências de 2 e 3 |

### Pilhas e Filas

| Arquivo | Descrição |
|---------|-----------|
| `ex1_pilha-livros.c` | Pilha de livros com funções push, pop e exibição |


## Desenvolvido por
Gis • Estudante de Análise e Desenvolvimento de Sistemas

## Objetivo
Este repositório tem como objetivo registrar minha evolução na disciplina de Estrutura de Dados I, servindo como material de estudo e consulta.
