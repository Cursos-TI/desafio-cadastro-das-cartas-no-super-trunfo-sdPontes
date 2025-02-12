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
    
    int populacao1,populacao2,populacao3,populacao4,populacao5,populacao6,populacao7,populacao8,populacao9,populacao10;
    int populacao11,populacao12,populacao13,populacao14,populacao15,populacao16,populacao17,populacao18,populacao19,populacao20;
    int populacao21,populacao22,populacao23,populacao24,populacao25,populacao26,populacao27,populacao28,populacao29,populacao30,populacao31,populacao32;
    
    float area1,area2,area3,area4,area5,area6,area7,area8,area9,area10,area11,area12,area13,area14,area15;
    float area16,area17,area18,area19,area20,area21,area22,area23,area24,area25,area26,area27,area28;
    float area29,area30,area31,area32;

    float pib1,pib2,pib3,pib4,pib5,pib6,pib7,pib8,pib9,pib10;
    float pib11,pib12,pib13,pib14,pib15,pib16,pib17,pib18,pib19,pib20;
    float pib21,pib22,pib23,pib24,pib25,pib26,pib27,pib28,pib29,pib30,pib31,pib32;
    
    int turismo1,turismo2,turismo3,turismo4,turismo5,turismo6,turismo7,turismo8,turismo9,turismo10;
    int turismo11,turismo12,turismo13,turismo14,turismo15,turismo16,turismo17,turismo18,turismo19,turismo20;
    int turismo21,turismo22,turismo23,turismo24,turismo25,turismo26,turismo27,turismo28,turismo29,turismo30,turismo31,turismo32;
    
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

    // Variável para informar se as informações da carta estão corretas;

    int correto = 1;

    //Tela de boas vindas, apresentação e tutorial do jogo

    printf("Bem vindo ao jogo de cartas Super Trunfo.\n\n");
    printf("Instruções do jogo\n\n");
    printf("Você deverá escolher um país que seguirá como referência para as suas cartas.\nEste país será dividido em oito estados, identificados pelas letras de A a H.\nCada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado\ne o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02), totalizando assim 32 cartas.\n");
    printf("\n\nCadastre as cartas conforme orientações abaixo:\n\n");

    /////////////////////////////preenchimento das informações das cartas////////////////////////

    printf("Digite o nome do País: ");
    scanf("%s", &pais);
    printf("\n\n");

    //Cadastro das cartas do primeiro estado escolhido

    printf("Digite o nome de um estado do %s: ", pais);
    scanf("%s", &estado_1);
    printf("\n\n");

    printf("Digite o nome de uma cidade do %s: ", estado_1);
    scanf("%s", &cidade_1_1);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_1_1);

    while(correto);
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao1);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.402): ");
        scanf("%f", &area1);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4.546.551,55): ");
        scanf("%f", &pib1);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo1);
        printf("\n\n\n\n\n\n");

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_1_1);

        printf("Pupulação: %d habitantes;\n", populacao1);
        printf("Área: %f Quilômetros Quadrados;\n", area1);
        printf("PIB: %f de reais\n", pib1);
        printf("Quantidade de Pontos turísticos: %d\n", turismo1);

        printf("Os dados estão corretos? Caso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");
    }

    correto = 1;

    printf("Carta A01 cadastrada com sucesso\n\n");

    printf("");



    return 0;
}

