cmake_minimum_required(VERSION 3.10)
project(Estrutura_de_Dados C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Lista os arquivos fonte do projeto
set(SOURCES
    "Ponteiros e Alocacao Dinamica/ex_01-ponteiro-alocacao.c"
    "Ponteiros e Alocacao Dinamica/ex_02-semaforo.c"
    "Ponteiros e Alocacao Dinamica/ex_05-vetor-dinamico.c"
    "Pilhas e Filas/ex1_pilha-livros.c"
)

# Cria o executável principal
add_executable(Estrutura_de_Dados ${SOURCES})

# Linka com a biblioteca math (necessária para pow() e outras funções)
target_link_libraries(Estrutura_de_Dados m)

# Se quiser usar matemática, descomente a linha abaixo
# find_package(Math REQUIRED)