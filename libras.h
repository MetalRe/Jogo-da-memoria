#ifndef LIBRAS_H_INCLUDED
#define LIBRAS_H_INCLUDED
void ler_imagem_A();
void ler_imagem_B();
void ler_imagem_C();
void ler_imagem_D();
void exibir_libras();
void exibir_memoria();
void exibir_desenhos();
void logo_libras();
// Função para imprimir a imagem em ASCII art
void printASCIImagem(int indice) {

    // Mudar a ordem das imagens com base no número aleatório
    switch (indice) {
        case 0:
            ler_imagem_A();
            break;
        case 1:
            ler_imagem_B();
            break;
        case 2:
            ler_imagem_C();
            break;
        case 3:
            ler_imagem_D();
            break;
    }
}

// Função para imprimir a ASCII art da pista
void printASCIIPista()
{
   exibir_memoria();
}
void libras()
{

    exibir_libras();

}

void lista_desenhos_ordem()
{

        exibir_desenhos();

}



#endif // LIBRAS_H_INCLUDED
