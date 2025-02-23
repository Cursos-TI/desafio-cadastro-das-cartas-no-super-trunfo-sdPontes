#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    //Declaração das variáveis. Sendo daclarado duas variáveis de cada para armazenar o valor de cada carta.

    char estado1, estado2;
    char codigoCarta1[20], codigoCarta2[20];
    char nomeCidade1[100], nomeCidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    //Apresentação do jogo

    printf("*******Bem vindo ao jogo SUPER TRUNFO*******\n\n");
    printf("Cadastre duas cartas conforme instruções abaixo:\n\n");

    //Cadastro das cartas

    //*****************************DADOS DA PRIMEIRA CARTA*************************************

    //INSERINDO DADOS DO ESTADO
    printf("Digite uma letra de 'A' ao 'H', para o código da carta que representará o estado escolhido:\n");
    scanf("%c", &estado1); //Atribuindo valor à variável estado1.
    printf("\n\n"); // Pulando linha para deixar a tela mais limpa.

    //INSERINDO DADOS DO CÓDIGO DA CARTA

    printf("Digite a letra do estado escolhido seguido de um número de '01' ao '04'. Ex (A01, B03):\n");
    scanf("%s", &codigoCarta1);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    //INSERINDO DADOS DO NOME DA CIDADE;

    getchar(); //// Limpar o buffer do caractere de nova linha
    printf("Digite o nome da cidade: \n");
    scanf("%[^\n]s", nomeCidade1);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    // INSERINDO OS DADOS DA QUANTIDADE DE HABITANTES

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao1);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    //INSERINDO OS DADOS DA AREA

    printf("Digite o tamanho em Km2 da cidade: \n");
    scanf("%f", &area1);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    //INSERINDO OS DADOS DO PIB

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    //INSERINDO A QUANTIDADE DE PONTOS TURÍSTICOS

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos1);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    //PRIMEIRA CARTA CADASTRADA.

    printf("Primeira carta cadastrada com sucesso. Insira os dados da segunda carta:\n\n");

    //********************************DADOS DA SEGUNDA CARTA****************************************

    //INSERINDO DADOS DO ESTADO
    getchar(); //// Limpar o buffer do caractere de nova linha
    printf("Digite uma letra de 'A' ao 'H', para o código da carta que representará o estado escolhido:\n");
    scanf("%c", &estado2);
    printf("\n\n"); // Pulando linha para deixar a tela mais limpa.

    //INSERINDO DADOS DO CÓDIGO DA CARTA

    printf("Digite a letra do estado escolhido seguido de um número de '01' ao '04'. Ex (A01, B03):\n");
    scanf("%s", &codigoCarta2);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    //INSERINDO DADOS DO NOME DA CIDADE;

    getchar(); //// Limpar o buffer do caractere de nova linha
    printf("Digite o nome da cidade: \n");
    scanf("%[^\n]s", &nomeCidade2);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    // INSERINDO OS DADOS DA QUANTIDADE DE HABITANTES

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    //INSERINDO OS DADOS DA AREA

    printf("Digite o tamanho em Km2 da cidade: \n");
    scanf("%f", &area2);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    //INSERINDO OS DADOS DO PIB

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    //INSERINDO A QUANTIDADE DE PONTOS TURÍSTICOS

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);
    printf("\n\n");// Pulando linha para deixar a tela mais limpa.

    //SEGUNDA CARTA CADASTRADA.

    //APRESENTAÇÃO DAS CARTAS.

    printf("Cartas cadastradas com sucesso.\n\n");

    //EXIBIÇÃO CARTA 01;

    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km2\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Números de pontos turísticos: %d\n", pontosTuristicos1);
    printf("\n\n\n");

    //EXIBIÇÃO CARTA 02;

    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km2\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Números de pontos turísticos: %d\n", pontosTuristicos2);
    printf("\n\n\n");

    //Fim do Programa!!

    return 0;

}
