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
    printf("Instruções do jogo:\n\n");
    printf("Você deverá escolher um país que seguirá como referência para as suas cartas.\nEste país será dividido em oito estados, identificados pelas letras de A a H.\nCada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado\ne o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02), totalizando assim 32 cartas.\n");
    printf("\n\nCadastre as cartas conforme orientações abaixo:\n\n");

    /////////////////////////////preenchimento das informações das cartas////////////////////////

    printf("Digite o nome do País: "); 
    scanf("%s", &pais);
    printf("\n\n");

    /////Cadastro das cartas do primeiro estado escolhido

    printf("Digite o nome do primeiro estado do %s: ", pais);
    scanf("%s", &estado_1);
    printf("\n\n");

    printf("Digite o nome da primeira cidade de %s: ", estado_1);
    scanf("%s", &cidade_1_1);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_1_1);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao1);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area1);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib1);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo1);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_1_1);

        printf("Pupulação: %d habitantes;\n", populacao1);
        printf("Área: %f Quilômetros Quadrados;\n", area1);
        printf("PIB: %f reais\n", pib1);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo1);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_1_1);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta A01 cadastrada com sucesso\n\n");

    printf("Informações da Carta A01:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", cidade_1_1);
    printf("Pupulação: %d habitantes;\n", populacao1);
    printf("Área: %f Quilômetros Quadrados;\n", area1);
    printf("PIB: %f reais\n", pib1);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo1);

    ////// Cadrastro da segunda cidade do primeiro estado escolhido/////////

    printf("Digite o nome da segunda cidade do estado de %s:", estado_1);
    scanf("%s", &cidade_1_2);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_1_2);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao2);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area2);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib2);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo2);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_1_2);

        printf("Pupulação: %d habitantes;\n", populacao2);
        printf("Área: %f Quilômetros Quadrados;\n", area2);
        printf("PIB: %f reais\n", pib2);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo2);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_1_2);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta A02 cadastrada com sucesso\n\n");

    printf("Informações da Carta A02:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", cidade_1_2);
    printf("Pupulação: %d habitantes;\n", populacao2);
    printf("Área: %f Quilômetros Quadrados;\n", area2);
    printf("PIB: %f reais\n", pib2);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo2);

    ////// Cadrastro da terceira cidade do primeiro estado escolhido/////////

    printf("Digite o nome da terceira cidade do estado de %s:", estado_1);
    scanf("%s", &cidade_1_3);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_1_3);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao3);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area3);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib3);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo3);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_1_3);

        printf("Pupulação: %d habitantes;\n", populacao3);
        printf("Área: %f Quilômetros Quadrados;\n", area3);
        printf("PIB: %f reais\n", pib3);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo3);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_1_3);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta A03 cadastrada com sucesso\n\n");

    printf("Informações da Carta A03:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", cidade_1_3);
    printf("Pupulação: %d habitantes;\n", populacao3);
    printf("Área: %f Quilômetros Quadrados;\n", area3);
    printf("PIB: %f reais\n", pib3);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo3);


    ////// Cadrastro da quarta cidade do primeiro estado escolhido/////////

    printf("Digite o nome da terceira cidade do estado de %s:", estado_1);
    scanf("%s", &cidade_1_4);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_1_4);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao4);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area4);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib4);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo4);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_1_4);

        printf("Pupulação: %d habitantes;\n", populacao4);
        printf("Área: %f Quilômetros Quadrados;\n", area4);
        printf("PIB: %f reais\n", pib4);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo4);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_1_4);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta A04 cadastrada com sucesso\n\n");

    printf("Informações da Carta A04:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", cidade_1_4);
    printf("Pupulação: %d habitantes;\n", populacao4);
    printf("Área: %f Quilômetros Quadrados;\n", area4);
    printf("PIB: %f reais\n", pib4);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo4);

    /////Cadastro das cartas do Segundo estado escolhido ///////////////////////////////////////

    printf("Digite o nome do segundo estado do %s: ", pais);
    scanf("%s", &estado_2);
    printf("\n\n");

    printf("Digite o nome da primeira cidade de %s: ", estado_2);
    scanf("%s", &cidade_2_1);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_2_1);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao5);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area5);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib5);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo5);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_2_1);

        printf("Pupulação: %d habitantes;\n", populacao5);
        printf("Área: %f Quilômetros Quadrados;\n", area5);
        printf("PIB: %f reais\n", pib5);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo5);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_2_1);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta B01 cadastrada com sucesso\n\n");

    printf("Informações da Carta B01:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", cidade_2_1);
    printf("Pupulação: %d habitantes;\n", populacao5);
    printf("Área: %f Quilômetros Quadrados;\n", area5);
    printf("PIB: %f reais\n", pib5);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo5);

    ////// Cadrastro da segunda cidade do segundo estado escolhido/////////

    printf("Digite o nome da segunda cidade do estado de %s:", estado_2);
    scanf("%s", &cidade_2_2);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_2_2);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao6);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area6);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib6);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo6);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_2_2);

        printf("Pupulação: %d habitantes;\n", populacao6);
        printf("Área: %f Quilômetros Quadrados;\n", area6);
        printf("PIB: %f reais\n", pib6);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo6);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_2_2);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta B02 cadastrada com sucesso\n\n");

    printf("Informações da Carta B02:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", cidade_2_2);
    printf("Pupulação: %d habitantes;\n", populacao6);
    printf("Área: %f Quilômetros Quadrados;\n", area6);
    printf("PIB: %f reais\n", pib6);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo6);

    ////// Cadrastro da terceira cidade do segundo estado escolhido/////////

    printf("Digite o nome da terceira cidade do estado de %s:", estado_2);
    scanf("%s", &cidade_2_3);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_2_3);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao7);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area7);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib7);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo7);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_2_3);

        printf("Pupulação: %d habitantes;\n", populacao7);
        printf("Área: %f Quilômetros Quadrados;\n", area7);
        printf("PIB: %f reais\n", pib7);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo7);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_2_3);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta B03 cadastrada com sucesso\n\n");

    printf("Informações da Carta B03:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", cidade_2_3);
    printf("Pupulação: %d habitantes;\n", populacao7);
    printf("Área: %f Quilômetros Quadrados;\n", area7);
    printf("PIB: %f reais\n", pib7);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo7);


    ////// Cadrastro da quarta cidade do segundo estado escolhido/////////

    printf("Digite o nome da terceira cidade do estado de %s:", estado_2);
    scanf("%s", &cidade_2_4);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_2_4);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao8);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area8);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib8);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo8);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_2_4);

        printf("Pupulação: %d habitantes;\n", populacao8);
        printf("Área: %f Quilômetros Quadrados;\n", area8);
        printf("PIB: %f reais\n", pib8);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo8);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_2_4);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta B04 cadastrada com sucesso\n\n");

    printf("Informações da Carta B04:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", cidade_2_4);
    printf("Pupulação: %d habitantes;\n", populacao8);
    printf("Área: %f Quilômetros Quadrados;\n", area8);
    printf("PIB: %f reais\n", pib8);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo8);

        /////Cadastro das cartas do Terceiro estado escolhido ///////////////////////////////////////

        printf("Digite o nome do terceiro estado do %s: ", pais);
        scanf("%s", &estado_3);
        printf("\n\n");

        printf("Digite o nome da primeira cidade de %s: ", estado_3);
        scanf("%s", &cidade_3_1);
        printf("\n\n");

        printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_3_1);

        /*
        o While ira funcionar para que caso o usuário queira corrigir as informações, 
        ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
        o loop do while irá parar e seguir com o código.
        */

        while(correto)
        {
            printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
            scanf("%d", &populacao9);
            printf("\n\n");

            printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
            scanf("%f", &area9);
            printf("\n\n");

            printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
            scanf("%f", &pib9);
            printf("\n\n");

            printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
            scanf("%d", &turismo9);
            printf("\n\n\n\n\n\n");

            // Confirmação dos dados inseridos //

            printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_3_1);

            printf("Pupulação: %d habitantes;\n", populacao9);
            printf("Área: %f Quilômetros Quadrados;\n", area9);
            printf("PIB: %f reais\n", pib9);
            printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo9);

            printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
            scanf("%d", &correto);
            printf("\n\n\n\n\n\n");

            /*
            Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
            escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
            da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
            */

            if (correto)
            {
                printf("Digite novamente os dados referente à cidade %s\n\n", cidade_3_1);
            }
        }

        // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
        correto = 1;

        // Tela de carta cadastrada, mostrando todas as informações.

        printf("Carta C01 cadastrada com sucesso\n\n");

        printf("Informações da Carta C01:\n");
        printf("País: %s\n", pais);
        printf("Estado: %s\n", estado_3);
        printf("Cidade: %s\n", cidade_3_1);
        printf("Pupulação: %d habitantes;\n", populacao9);
        printf("Área: %f Quilômetros Quadrados;\n", area9);
        printf("PIB: %f reais\n", pib9);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo9);

        ////// Cadrastro da segunda cidade do terceiro estado escolhido/////////

        printf("Digite o nome da segunda cidade do estado de %s:", estado_3);
        scanf("%s", &cidade_3_2);
        printf("\n\n");

        printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_3_2);

        /*
        o While ira funcionar para que caso o usuário queira corrigir as informações, 
        ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
        o loop do while irá parar e seguir com o código.
        */

        while(correto)
        {
            printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
            scanf("%d", &populacao10);
            printf("\n\n");

            printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
            scanf("%f", &area10);
            printf("\n\n");

            printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
            scanf("%f", &pib10);
            printf("\n\n");

            printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
            scanf("%d", &turismo10);
            printf("\n\n\n\n\n\n");

            // Confirmação dos dados inseridos //

            printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_3_2);

            printf("Pupulação: %d habitantes;\n", populacao10);
            printf("Área: %f Quilômetros Quadrados;\n", area10);
            printf("PIB: %f reais\n", pib10);
            printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo10);

            printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
            scanf("%d", &correto);
            printf("\n\n\n\n\n\n");

            /*
            Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
            escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
            da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
            */

            if (correto)
            {
                printf("Digite novamente os dados referente à cidade %s\n\n", cidade_3_2);
            }
        }

        // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
        correto = 1;

        // Tela de carta cadastrada, mostrando todas as informações.

        printf("Carta C02 cadastrada com sucesso\n\n");

        printf("Informações da Carta C02:\n");
        printf("País: %s\n", pais);
        printf("Estado: %s\n", estado_3);
        printf("Cidade: %s\n", cidade_3_2);
        printf("Pupulação: %d habitantes;\n", populacao10);
        printf("Área: %f Quilômetros Quadrados;\n", area10);
        printf("PIB: %f reais\n", pib10);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo10);

        ////// Cadrastro da terceira cidade do terceiro estado escolhido/////////

        printf("Digite o nome da terceira cidade do estado de %s:", estado_3);
        scanf("%s", &cidade_3_3);
        printf("\n\n");

        printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_3_3);

        /*
        o While ira funcionar para que caso o usuário queira corrigir as informações, 
        ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
        o loop do while irá parar e seguir com o código.
        */

        while(correto)
        {
            printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
            scanf("%d", &populacao11);
            printf("\n\n");

            printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
            scanf("%f", &area11);
            printf("\n\n");

            printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
            scanf("%f", &pib11);
            printf("\n\n");

            printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
            scanf("%d", &turismo11);
            printf("\n\n\n\n\n\n");

            // Confirmação dos dados inseridos //

            printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_3_3);

            printf("Pupulação: %d habitantes;\n", populacao11);
            printf("Área: %f Quilômetros Quadrados;\n", area11);
            printf("PIB: %f reais\n", pib11);
            printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo11);

            printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
            scanf("%d", &correto);
            printf("\n\n\n\n\n\n");

            /*
            Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
            escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
            da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
            */

            if (correto)
            {
                printf("Digite novamente os dados referente à cidade %s\n\n", cidade_3_3);
            }
        }

        // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
        correto = 1;

        // Tela de carta cadastrada, mostrando todas as informações.

        printf("Carta C03 cadastrada com sucesso\n\n");

        printf("Informações da Carta C03:\n");
        printf("País: %s\n", pais);
        printf("Estado: %s\n", estado_3);
        printf("Cidade: %s\n", cidade_3_3);
        printf("Pupulação: %d habitantes;\n", populacao11);
        printf("Área: %f Quilômetros Quadrados;\n", area11);
        printf("PIB: %f reais\n", pib11);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo11);


        ////// Cadrastro da quarta cidade do terceiro estado escolhido/////////

        printf("Digite o nome da terceira cidade do estado de %s:", estado_3);
        scanf("%s", &cidade_3_4);
        printf("\n\n");

        printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_3_4);

        /*
        o While ira funcionar para que caso o usuário queira corrigir as informações, 
        ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
        o loop do while irá parar e seguir com o código.
        */

        while(correto)
        {
            printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
            scanf("%d", &populacao12);
            printf("\n\n");

            printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
            scanf("%f", &area12);
            printf("\n\n");

            printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
            scanf("%f", &pib12);
            printf("\n\n");

            printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
            scanf("%d", &turismo12);
            printf("\n\n\n\n\n\n");

            // Confirmação dos dados inseridos //

            printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_3_4);

            printf("Pupulação: %d habitantes;\n", populacao12);
            printf("Área: %f Quilômetros Quadrados;\n", area12);
            printf("PIB: %f reais\n", pib12);
            printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo12);

            printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
            scanf("%d", &correto);
            printf("\n\n\n\n\n\n");

            /*
            Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
            escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
            da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
            */

            if (correto)
            {
                printf("Digite novamente os dados referente à cidade %s\n\n", cidade_3_4);
            }
        }

        // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
        correto = 1;

        // Tela de carta cadastrada, mostrando todas as informações.

        printf("Carta C04 cadastrada com sucesso\n\n");

        printf("Informações da Carta C04:\n");
        printf("País: %s\n", pais);
        printf("Estado: %s\n", estado_3);
        printf("Cidade: %s\n", cidade_3_4);
        printf("Pupulação: %d habitantes;\n", populacao12);
        printf("Área: %f Quilômetros Quadrados;\n", area12);
        printf("PIB: %f reais\n", pib12);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo12);

    /////Cadastro das cartas do quarto estado escolhido ///////////////////////////////////////

    printf("Digite o nome do quarto estado do %s: ", pais);
    scanf("%s", &estado_4);
    printf("\n\n");

    printf("Digite o nome da primeira cidade de %s: ", estado_4);
    scanf("%s", &cidade_4_1);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_4_1);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao13);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area13);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib13);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo13);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_4_1);

        printf("Pupulação: %d habitantes;\n", populacao13);
        printf("Área: %f Quilômetros Quadrados;\n", area13);
        printf("PIB: %f reais\n", pib13);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo13);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_4_1);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta D01 cadastrada com sucesso\n\n");

    printf("Informações da Carta D01:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_4);
    printf("Cidade: %s\n", cidade_4_1);
    printf("Pupulação: %d habitantes;\n", populacao13);
    printf("Área: %f Quilômetros Quadrados;\n", area13);
    printf("PIB: %f reais\n", pib13);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo13);

    ////// Cadrastro da segunda cidade do quarto estado escolhido/////////

    printf("Digite o nome da segunda cidade do estado de %s:", estado_4);
    scanf("%s", &cidade_4_2);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_4_2);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao14);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area14);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib14);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo14);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_4_2);

        printf("Pupulação: %d habitantes;\n", populacao14);
        printf("Área: %f Quilômetros Quadrados;\n", area14);
        printf("PIB: %f reais\n", pib14);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo14);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_4_2);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta D02 cadastrada com sucesso\n\n");

    printf("Informações da Carta D02:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_4);
    printf("Cidade: %s\n", cidade_4_2);
    printf("Pupulação: %d habitantes;\n", populacao14);
    printf("Área: %f Quilômetros Quadrados;\n", area14);
    printf("PIB: %f reais\n", pib14);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo14);

    ////// Cadrastro da terceira cidade do quarto estado escolhido/////////

    printf("Digite o nome da terceira cidade do estado de %s:", estado_4);
    scanf("%s", &cidade_4_3);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_4_3);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao15);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area15);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib15);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo15);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_4_3);

        printf("Pupulação: %d habitantes;\n", populacao15);
        printf("Área: %f Quilômetros Quadrados;\n", area15);
        printf("PIB: %f reais\n", pib15);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo15);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_4_3);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta D03 cadastrada com sucesso\n\n");

    printf("Informações da Carta D03:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_4);
    printf("Cidade: %s\n", cidade_4_3);
    printf("Pupulação: %d habitantes;\n", populacao15);
    printf("Área: %f Quilômetros Quadrados;\n", area15);
    printf("PIB: %f reais\n", pib15);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo15);


    ////// Cadrastro da quarta cidade do quarto estado escolhido/////////

    printf("Digite o nome da terceira cidade do estado de %s:", estado_4);
    scanf("%s", &cidade_4_4);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_4_4);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao16);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area16);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib16);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo16);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_4_4);

        printf("Pupulação: %d habitantes;\n", populacao16);
        printf("Área: %f Quilômetros Quadrados;\n", area16);
        printf("PIB: %f reais\n", pib16);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo16);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_4_4);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta D04 cadastrada com sucesso\n\n");

    printf("Informações da Carta D04:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_4);
    printf("Cidade: %s\n", cidade_4_4);
    printf("Pupulação: %d habitantes;\n", populacao16);
    printf("Área: %f Quilômetros Quadrados;\n", area16);
    printf("PIB: %f reais\n", pib16);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo16);

    /////Cadastro das cartas do quinto estado escolhido ///////////////////////////////////////

    printf("Digite o nome do quinto estado do %s: ", pais);
    scanf("%s", &estado_5);
    printf("\n\n");

    printf("Digite o nome da primeira cidade de %s: ", estado_5);
    scanf("%s", &cidade_5_1);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_5_1);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao17);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area17);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib17);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo17);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_5_1);

        printf("Pupulação: %d habitantes;\n", populacao17);
        printf("Área: %f Quilômetros Quadrados;\n", area17);
        printf("PIB: %f reais\n", pib17);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo17);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_5_1);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta E01 cadastrada com sucesso\n\n");

    printf("Informações da Carta E01:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_5);
    printf("Cidade: %s\n", cidade_5_1);
    printf("Pupulação: %d habitantes;\n", populacao17);
    printf("Área: %f Quilômetros Quadrados;\n", area17);
    printf("PIB: %f reais\n", pib17);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo17);

    ////// Cadrastro da segunda cidade do quinto estado escolhido/////////

    printf("Digite o nome da segunda cidade do estado de %s:", estado_5);
    scanf("%s", &cidade_5_2);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_5_2);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao18);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area18);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib18);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo18);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_5_2);

        printf("Pupulação: %d habitantes;\n", populacao18);
        printf("Área: %f Quilômetros Quadrados;\n", area18);
        printf("PIB: %f reais\n", pib18);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo18);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_5_2);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta E02 cadastrada com sucesso\n\n");

    printf("Informações da Carta E02:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_5);
    printf("Cidade: %s\n", cidade_5_2);
    printf("Pupulação: %d habitantes;\n", populacao18);
    printf("Área: %f Quilômetros Quadrados;\n", area18);
    printf("PIB: %f reais\n", pib18);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo18);

    ////// Cadrastro da terceira cidade do quinto estado escolhido/////////

    printf("Digite o nome da terceira cidade do estado de %s:", estado_5);
    scanf("%s", &cidade_5_3);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_5_3);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao19);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area19);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib19);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo19);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_5_3);

        printf("Pupulação: %d habitantes;\n", populacao19);
        printf("Área: %f Quilômetros Quadrados;\n", area19);
        printf("PIB: %f reais\n", pib19);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo19);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_5_3);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta E03 cadastrada com sucesso\n\n");

    printf("Informações da Carta E03:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_5);
    printf("Cidade: %s\n", cidade_5_3);
    printf("Pupulação: %d habitantes;\n", populacao19);
    printf("Área: %f Quilômetros Quadrados;\n", area19);
    printf("PIB: %f reais\n", pib19);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo19);


    ////// Cadrastro da quarta cidade do quinto estado escolhido/////////

    printf("Digite o nome da terceira cidade do estado de %s:", estado_5);
    scanf("%s", &cidade_5_4);
    printf("\n\n");

    printf("Agora insira as informações referente à cidade %s, conforme instruções abaixo:\n\n", cidade_5_4);

    /*
    o While ira funcionar para que caso o usuário queira corrigir as informações, 
    ele irá conseguir. Caso ele digite 0, informando que as informações estejam corretas,
    o loop do while irá parar e seguir com o código.
    */

    while(correto)
    {
        printf("Digite a quantidade de habitantes da cidade (USE APENAS NÚMEROS, EX: 40000): ");
        scanf("%d", &populacao20);
        printf("\n\n");

        printf("Digite a área da cidade em quilômetros quadrados (USE APENAS NÚMEROS, EX: 305.02): ");
        scanf("%f", &area20);
        printf("\n\n");

        printf("Digite o PIB da cidade (USE APENAS NÚMEROS, EX: 4546.55): ");
        scanf("%f", &pib20);
        printf("\n\n");

        printf("Digite o número de pontos turísticos existentes na cidade (USE APENAS NÚMEROS, EX: 10):");
        scanf("%d", &turismo20);
        printf("\n\n\n\n\n\n");

        // Confirmação dos dados inseridos //

        printf("Confira os dados inseridos referentes a cidade %s\n\n", cidade_5_4);

        printf("Pupulação: %d habitantes;\n", populacao20);
        printf("Área: %f Quilômetros Quadrados;\n", area20);
        printf("PIB: %f reais\n", pib20);
        printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo20);

        printf("Os dados estão corretos?\nCaso esteja correto digite 0, se não, digite 1: ");
        scanf("%d", &correto);
        printf("\n\n\n\n\n\n");

        /*
        Se o usuário digitar 1, indicando que os dados não estão corretos, entrará na condição if
        escrevendo na tela para digitar os dados novamente. Caso o usuário digite 0, mudará o valor 
        da variável para 0, fazendo com que não entre na condição if, e assim continua o código.
        */

        if (correto)
        {
            printf("Digite novamente os dados referente à cidade %s\n\n", cidade_5_4);
        }
    }

    // Mudando novamente o valor da variável correto para 1, para que possa entrar nas demais condições.
    correto = 1;

    // Tela de carta cadastrada, mostrando todas as informações.

    printf("Carta E04 cadastrada com sucesso\n\n");

    printf("Informações da Carta E04:\n");
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado_5);
    printf("Cidade: %s\n", cidade_5_4);
    printf("Pupulação: %d habitantes;\n", populacao20);
    printf("Área: %f Quilômetros Quadrados;\n", area20);
    printf("PIB: %f reais\n", pib20);
    printf("Quantidade de Pontos turísticos: %d\n\n\n", turismo20);



    return 0;
}

