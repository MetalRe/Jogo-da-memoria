#ifndef AIMAGEM_H_INCLUDED
#define AIMAGEM_H_INCLUDED
#include <stdio.h>

void ler_imagem_A()
{

    FILE *file; // Ponteiro para o arquivo
    char line[256]; // Buffer para armazenar cada linha lida

    file = fopen("A.txt", "r"); // Abre o arquivo em modo de leitura

    if (file == NULL) { // Verifica se o arquivo foi aberto com sucesso
        printf("Nao foi possivel abrir o arquivo.\n");

    }

    while (fgets(line, sizeof(line), file) != NULL) { // Lê uma linha do arquivo
        printf("%s", line); // Exibe a linha lida na tela
    }

    fclose(file); // Fecha o arquivo

}
void ler_imagem_B()
{

    FILE *file; // Ponteiro para o arquivo
    char line[256]; // Buffer para armazenar cada linha lida

    file = fopen("B.txt", "r"); // Abre o arquivo em modo de leitura

    if (file == NULL) { // Verifica se o arquivo foi aberto com sucesso
        printf("Nao foi possivel abrir o arquivo.\n");

    }

    while (fgets(line, sizeof(line), file) != NULL) { // Lê uma linha do arquivo
        printf("%s", line); // Exibe a linha lida na tela
    }

    fclose(file); // Fecha o arquivo

}
void ler_imagem_C()
{

    FILE *file; // Ponteiro para o arquivo
    char line[256]; // Buffer para armazenar cada linha lida

    file = fopen("C.txt", "r"); // Abre o arquivo em modo de leitura

    if (file == NULL) { // Verifica se o arquivo foi aberto com sucesso
        printf("Nao foi possivel abrir o arquivo.\n");

    }

    while (fgets(line, sizeof(line), file) != NULL) { // Lê uma linha do arquivo
        printf("%s", line); // Exibe a linha lida na tela
    }

    fclose(file); // Fecha o arquivo

}
void ler_imagem_D()
{

    FILE *file; // Ponteiro para o arquivo
    char line[256]; // Buffer para armazenar cada linha lida

    file = fopen("D.txt", "r"); // Abre o arquivo em modo de leitura

    if (file == NULL) { // Verifica se o arquivo foi aberto com sucesso
        printf("Nao foi possivel abrir o arquivo.\n");

    }

    while (fgets(line, sizeof(line), file) != NULL) { // Lê uma linha do arquivo
        printf("%s", line); // Exibe a linha lida na tela
    }

    fclose(file); // Fecha o arquivo

}

void exibir_libras()
{

    FILE *file; // Ponteiro para o arquivo
    char line[256]; // Buffer para armazenar cada linha lida

    file = fopen("imprimirlibras.txt", "r"); // Abre o arquivo em modo de leitura

    if (file == NULL) { // Verifica se o arquivo foi aberto com sucesso
        printf("Nao foi possivel abrir o arquivo.\n");

    }

    while (fgets(line, sizeof(line), file) != NULL) { // Lê uma linha do arquivo
        printf("%s", line); // Exibe a linha lida na tela
    }

    fclose(file); // Fecha o arquivo

}
void logo_libras()
{

    FILE *file; // Ponteiro para o arquivo
    char line[256]; // Buffer para armazenar cada linha lida

    file = fopen("libras.txt", "r"); // Abre o arquivo em modo de leitura

    if (file == NULL) { // Verifica se o arquivo foi aberto com sucesso
        printf("Nao foi possivel abrir o arquivo.\n");

    }

    while (fgets(line, sizeof(line), file) != NULL) { // Lê uma linha do arquivo
        printf("%s", line); // Exibe a linha lida na tela
    }

    fclose(file); // Fecha o arquivo

}

void exibir_memoria()
{

    FILE *file; // Ponteiro para o arquivo
    char line[256]; // Buffer para armazenar cada linha lida

    file = fopen("memoria.txt", "r"); // Abre o arquivo em modo de leitura

    if (file == NULL) { // Verifica se o arquivo foi aberto com sucesso
        printf("Nao foi possivel abrir o arquivo.\n");

    }

    while (fgets(line, sizeof(line), file) != NULL) { // Lê uma linha do arquivo
        printf("%s", line); // Exibe a linha lida na tela
    }

    fclose(file); // Fecha o arquivo

}

void exibir_desenhos()
{

    FILE *file; // Ponteiro para o arquivo
    char line[256]; // Buffer para armazenar cada linha lida

    file = fopen("desenhoscorretos.txt", "r"); // Abre o arquivo em modo de leitura

    if (file == NULL) { // Verifica se o arquivo foi aberto com sucesso
        printf("Nao foi possivel abrir o arquivo.\n");

    }

    while (fgets(line, sizeof(line), file) != NULL) { // Lê uma linha do arquivo
        printf("%s", line); // Exibe a linha lida na tela
    }

    fclose(file); // Fecha o arquivo

}


#endif // AIMAGEM_H_INCLUDED
