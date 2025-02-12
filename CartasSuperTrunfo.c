#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Eu não entendi muito bem como funciona a dinâmica dos cadastros das cartas,
se no cadastro da carta também deveria colocar o nome dos píses, estados e cidades ou não.
Se o usuário deveria cadastrar várias cartas ou apenas uma.

Eu fiz conforme eu entendi, espero que gostem!!
*/

int main() {

    setlocale(LC_ALL, "Portuguese");

    // Nomeando e tipificando cada variável.    
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    char pais[30];
    char estado_1[30];
    char estado_2[30];
    char estado_3[30];
    char estado_4[30];
    char estado_5[30];
    char estado_6[30];
    char estado_7[30];
    char estado_8[30];
    char cidade_1_1[50];
    char cidade_1_2[50];
    char cidade_1_3[50];
    char cidade_1_4[50];
    char cidade_2_1[50];
    char cidade_2_2[50];
    char cidade_2_3[50];
    char cidade_2_4[50];
    char cidade_3_1[50];
    char cidade_3_2[50];
    char cidade_3_3[50];
    char cidade_3_4[50];
    char cidade_4_1[50];
    char cidade_4_2[50];
    char cidade_4_3[50];
    char cidade_4_4[50];
    char cidade_5_1[50];
    char cidade_5_2[50];
    char cidade_5_3[50];
    char cidade_5_4[50];
    char cidade_6_1[50];
    char cidade_6_2[50];
    char cidade_6_3[50];
    char cidade_6_4[50];
    char cidade_7_1[50];
    char cidade_7_2[50];
    char cidade_7_3[50];
    char cidade_7_4[50];
    char cidade_8_1[50];
    char cidade_8_2[50];
    char cidade_8_3[50];
    char cidade_8_4[50];
    char codigo_carta[10];

    //Tela de boas vindas, apresentação e tutorial do jogo

    printf("Bem vindo ao jogo de cartas Super Trunfo.\n\n");
    printf("      Instruções do jogo");
    printf("Você deverá escolher um país que seguirá como referência para as suas cartas. Este país será dividido em oito estados, identificados pelas letras de A a H.\nCada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado\ne o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02), totalizando assim 32 cartas.\n");
    printf("Cadastre as cartas conforme orientações abaixo:\n\n");

    /////////////////////////////preenchimento das informações das cartas////////////////////////
    
    printf("Digite o nome do País: ");
    scanf("%s", &pais);
    printf("\n\n");

    //Carta 01

    printf("Digite o nome de um estado do País escolhido: ");
    scanf("%s", &estado_1);
    printf("\n\n");

    prinf("Digite o nome de uma cidade referente ao estado escolhido anteriormente: ");
    scanf("%s", &cidade_1_1);
    printf("\n\n");

    printf("Digite  ");



    printf("\n\n\n\n\n\n");

    return 0;
}
