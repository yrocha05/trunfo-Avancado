#include <stdio.h>

    int main() {


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
    
       
        
        printf("Qual é a Populacao? \n");
        scanf("%d" , &populacao);
    
       
    
        //adição avançado - Pib per capita e densidade populacional
    
        pib_p1 =  ( pib / populacao );
        densidade1 =  ( populacao / area );
    
        //Questionário para cadastro da segunda carta 
    
 
        
        printf("Qual é a Populacao? \n");
        scanf("%d" , &populacao2);
    

        //adição intermediaria - Pib per capita e densidade populacional
    
        pib_p2 =  ( pib2 / populacao2);
        densidade2 =  (populacao2 / area2);
    
        // Adição avançada
    
        s_poder1 = (populacao + pib + ponto_turistico + area + (densidade1 * 1) );
        s_poder2 = (populacao2 + pib2 + ponto_turistico2 + area2 + (densidade2 * 2));
    
        // Exposição de dados das cartas
    
        
    
        // Comparação cartas 
        
        printf (" População Carta1 = %d    População Carta2 = %d \n", populacao, populacao2);
        printf (" A população da carta1 ganha da carta2? %f\n", populacao > populacao2);
    
    
    
    
        return 0;
    }

