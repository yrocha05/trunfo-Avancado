#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Variaveis da 1 carta
    char estado [20] , sigla [5] , nome_cidade [30] ;
    int  populacao ;
    float area ;
    float pib ; 
    float pib_p1;
    float densidade1;
    int ponto_turistico;
    float s_poder1;
    float s_poder2;


    //Variaveis da 2 carta

    char estado2 [20] , sigla2 [10] , nome_cidade2 [30] ;
    int  populacao2 ;
    float area2 ;
    float pib2 ; 
    int ponto_turistico2;
    float densidade2;
    float pib_p2;

    printf("Carta 01\n");
    printf("Qual é o Estado da sua Carta? \n");
    scanf("%s" , &estado);
    
    printf("Qual é a Sigla da carta? \n");
    scanf("%s" , &sigla);

    printf("Qual é o Nome da Cidade? \n");
    scanf("%s" , &nome_cidade);
    
    printf("Qual é a Populacao? \n");
    scanf("%d" , &populacao);

    printf("Qual é a área? \n");
    scanf("%f" , &area);

    printf("Qual é o PIB? \n");
    scanf("%f" , &pib);

    printf("Quantos Pontos Turisticos ? \n");
    scanf("%d" , &ponto_turistico);

    //adição avançado - Pib per capita e densidade populacional

    pib_p1 =  ( pib / populacao );
    densidade1 =  ( populacao / area ) * 1;

    //Questionário para cadastro da segunda carta 

    printf("Carta 02\n");
    printf("Qual é o Estado da sua Carta? \n");
    scanf("%s" , &estado2);
    
    printf("Qual é a Sigla da carta? \n");
    scanf("%s" , &sigla2);

    printf("Qual é o Nome da Cidade? \n");
    scanf("%s" , &nome_cidade2);
    
    printf("Qual é a Populacao? \n");
    scanf("%d" , &populacao2);

    printf("Qual é a área? \n");
    scanf("%f" , &area2);

    printf("Qual é o PIB? \n");
    scanf("%f" , &pib2);

    printf("Quantos Pontos Turisticos ? \n");
    scanf("%d" , &ponto_turistico2);

    //adição intermediaria - Pib per capita e densidade populacional

    pib_p2 =  ( pib2 / populacao2);
    densidade2 =  (populacao2 / area2) * 1;

    // Adição avançada

    s_poder1 = (populacao + pib + ponto_turistico + area + densidade1 );
    s_poder2 = (populacao2 + pib2 + ponto_turistico2 + area2 + densidade2 );

    // Exposição de dados das cartas

    
    printf("Carta 01 \n");
    printf("O Estado é : %s\n" , estado);
    printf("A Sigla é : %s\n" , sigla);
    printf("A Cidade é : %s\n" , nome_cidade);
    printf("A população é : %d\n" , populacao);
    printf("A área é : %f Km² \n" , area);
    printf("O PIB é : %f\n" , pib);
    printf("A quantidade de ponto turístico é : %d\n" , ponto_turistico);
    printf("Densidade Populacional : %.3f\n" , densidade1);
    printf("PIB per Capita : %.3f\n" , pib_p1);
    printf("Super Poder : %.3f\n" , s_poder1);

    printf("Carta 02 \n");
    printf("O Estado é : %s\n" , estado2);
    printf("A Sigla é : %s\n" , sigla2);
    printf("A Cidade é : %s\n" , nome_cidade2);
    printf("A população é : %d\n" , populacao2);
    printf("A área é : %f Km² \n" , area2);
    printf("O PIB é : %f\n" , pib2);
    printf("A quantidade de ponto turístico é : %d\n" , ponto_turistico2);
    printf("Densidade Populacional : %.3f\n" , densidade2);
    printf("PIB per Capita : %.3f\n" , pib_p2);
    printf("Super Poder : %.3f\n" , s_poder2);


    // Comparação cartas 

    printf (" População Carta1 = %d    População Carta2 = %d \n", populacao, populacao2);
    printf (" A população da carta1 ganha da carta2? %d\n", populacao > populacao2);

    printf (" Área Carta1 = %f    Área Carta2 = %f \n", area , area2);
    printf (" A Área da carta1 ganha da carta2? %d\n", area > area2);

    printf (" PIB   Carta1 = %f    PIB  Carta2 = %f \n", pib, pib2);
    printf (" O PIB da carta1 ganha da carta2? %d\n", pib > pib2);

    printf (" Pontos Turísticos Carta1 = %d   Pontos Turísticos Carta2 = %d \n", ponto_turistico, ponto_turistico2);
    printf (" Os Pontos Turísticos da carta1 ganha da carta2? %d\n", ponto_turistico> ponto_turistico2);

    printf (" Densidade Populacional Carta1 = %.2f   Densidade Populacional Carta2 = %.2f \n", densidade1, densidade2);
    printf (" A Densidade Populacional da carta1 ganha da carta2? %d\n", densidade1 < densidade2);

    printf (" Super Poder Carta1 = %.2f   Super Poder Carta2 = %.2f \n", s_poder1, s_poder2);
    printf (" O Super Poder da carta1 ganha da carta2? %d\n", s_poder1 > s_poder2);









    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}