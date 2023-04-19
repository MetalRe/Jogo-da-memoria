#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <ctype.h>
#include "libras.h"
#include "AImagem.h"
#include <locale.h>
using namespace std;

int main()
{
    int sequencia[5]; // Sequência de imagens em ASCII art
    int escolha[4]; // Escolhas do jogador
    int i, acertos;
    int telaLargura; // Substitua pelo valor da largura da tela do seu sistema
    char sim;
    setlocale(LC_ALL,"");
    srand(time(NULL));
    libras();
    getchar(); // Aguarda o jogador pressionar ENTER para começar
    system("clear || cls");
    do
    {

        acertos = 0;
        telaLargura = 6;
        for (i = 0; i < 4; i++)
        {
            sequencia[i] = rand() % 3;
        }
        //logo_libras();
        //getchar(); // Aguarda o jogador pressionar ENTER para começar
        system("clear || cls");
        exibir_desenhos();
        // Exibição do menu
        cout <<"" <<endl;
        cout << "\t\t< 1 > - Jogar o jogo da Memoria Surdos/Mudos." << endl;
        cout << "\t\t< 2 > - Ler as regras do jogo." << endl;
        cout << "\t\t< 3 > - Sair." << endl;
        cout << "\t\tEscolha sua opção: ";
        int opcao;
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            lista_desenhos_ordem();
            getchar(); // Aguarda o jogador pressionar ENTER para começar
            system("clear || cls");

            // Loop para mostrar a sequência de imagens para o jogador
            for (i = 0; i < 4; i++)
            {
                printASCIImagem(sequencia[i]); // Imprime a imagem em ASCII art
                printf("\n%*sMemorize a imagem acima e pressione ENTER para continuar...\n", (telaLargura/2)+9, "");
                getchar(); // Aguarda o jogador pressionar ENTER
                system("clear || cls");
            }

            // Loop para receber as escolhas do jogador
            for (i = 0; i < 4; i++)
            {
                printASCIIPista(); // Imprime a pista
                std::cout << "\t\tQuais foram as imagens que apareceram na ordem? "<<std::endl;
                printf("\t\tDigite a letra correspondente à imagem %d: ", i + 1);
                char escolhaJogador;
                scanf("%c", &escolhaJogador); // Lê a escolha do jogador
                escolhaJogador = toupper(escolhaJogador);
                // Verifica se a escolha do jogador é válida
                if(escolhaJogador >= 'A' && escolhaJogador <= 'D')
                {
                    if(escolhaJogador == 'A')
                    {
                        escolha[i] = 0;
                    }
                    else if(escolhaJogador == 'B')
                    {
                        escolha[i] = 1;
                    }
                    else if(escolhaJogador == 'C')
                    {
                        escolha[i] = 2;
                    }
                    else
                    {
                        escolha[i] = 3;
                    }
                }
                else
                {
                    printf("Escolha inválida. Tente novamente.\n");
                    i--; // Decrementa o índice para repetir a rodada
                    getchar(); // Aguarda o jogador pressionar ENTER
                    system("clear || cls");
                    continue;
                }
                printASCIImagem(escolha[i]); // Imprime a imagem escolhida em ASCII art
                printf("Pressione ENTER para continuar...\n");
                getchar(); // Aguarda o jogador pressionar ENTER
                system("clear || cls"); // Limpa a tela do console

                // Verifica se a escolha do jogador está correta
                if (escolha[i] == sequencia[i])
                {
                    acertos++;
                }
                else
                {
                    printf("\t\tResposta incorreta. Tente novamente.\n");
                }
            }

            // Verifica o resultado do jogo
            if (acertos == 4)
            {
                printf("\t\tParabéns! Você acertou todas as imagens e venceu o jogo!\n");
            }
            else
            {
                printf("\t\tVocê fez %d acerto(s) de 4. Tente novamente!\n", acertos);
            }
            cout << "\n\tGostaria de jogar novamente para testar sua memoria? < s > and < n > ";
            cin >> sim;
            getchar(); // Aguarda o jogador pressionar ENTER
            system("clear || cls"); // Limpa a tela do console

            break;

        case 2:
            // Exibe as regras do jogo
            system("clear || cls"); // Limpa a tela do console
            cout << "Regras do Jogo da Memória Surdos/Mudos:" << endl;
            cout << "1. O jogo exibirá uma sequência de imagens." << endl;
            cout << "2. O jogador deve memorizar a sequência de imagens." << endl;
            cout << "3. Em seguida, o jogador deve digitar a letra correspondente\na cada imagem em ordem." << endl;
            cout << "4. O jogo verificará se as escolhas do jogador estão corretas." << endl;
            cout << "5. O jogador receberá uma pontuação baseada no número de acertos." << endl;
            cout << "6. O jogo possui 4 rodadas e a pontuação máxima é 4." << endl;
            cout << "\nPressione < s >  para voltar ao menu e < n > para sair... " ;
            cin >> sim;
            system("clear || cls"); // Limpa a tela do console

            break;

        case 3:
            // Sai do jogo
            cout << "Obrigado por jogar o Jogo da Memória Surdos/Mudos!" << endl;
            return 0;

        default:
            system("clear || cls"); // Limpa a tela do console
            // Trata opção inválida
            cout << "Opção inválida! Por favor, escolha uma opção válida." << endl;
            cout << "\nPressione < s >  para voltar ao menu e < n > para sair... " ;
            cin >> sim;
            system("clear || cls"); // Limpa a tela do console

        }
    }while(sim == 's' || sim == 'S');



return 0;
}
