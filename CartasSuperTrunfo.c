#include <stdio.h>

int main() {

    char estado[50];
    char codigo[50];
    char cidade[50];
    float PIB;
    float area;
    unsigned long int populacao;
    int turisticos;

    

           printf("Carta:1\n");

           printf("digite o nome do estado: ");
        scanf("%s" , estado);

           printf("digite o código da carta: ");
        scanf("%s" , codigo);

           printf("digite o nome da cidade: ");
        scanf("%s" , cidade);

           printf("digite o PIB: ");
        scanf("%f" , &PIB);

           printf("digite o número de pontos turísticos: ");
        scanf("%d" , &turisticos);

           printf("digite a população: ");
        scanf("%lu" , &populacao);

           printf("digite a área: ");
        scanf("%f" ,&area);

           float percapita, densidade;

           percapita = (PIB * 1e9f) / (float) populacao;
           densidade = (float) populacao / area;

           


           printf("Carta:1\n");

           printf("Estado: %s\n",estado);
           printf("Código: %s\n",codigo);
           printf("Nome da cidade: %s\n",cidade);
           printf("PIB %f bilhões de reais\n",PIB);
           printf("Número de pontos turísticos: %d\n",turisticos);
           printf("População: %lu \n",populacao);
           printf("Área: %f km²\n",area);

              printf("renda per capita: %.2f\n" ,percapita);
              printf("densidade populacional: %.2f \n" ,densidade);

            double super;
              super = populacao + area + (PIB * 1e9f) + turisticos + percapita + (1.0f/densidade); 

              printf("super: %.2f\n" ,super);




    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    float PIB2;
    float area2;
    unsigned long int populacao2;
    int turisticos2;




  
 

           printf("Carta:2\n");

           printf("digite o nome do estado: ");
       scanf("%s" , estado2);

           printf("digite o código da carta: ");
       scanf("%s" , codigo2);

           printf("digite o nome da cidade: ");
       scanf("%s" , cidade2);

           printf("digite o PIB: ");
       scanf("%f" , &PIB2);

           printf("digite o número de pontos turísticos: ");
       scanf("%d" , &turisticos2);

           printf("digite a população: ");
       scanf("%lu" , &populacao2);

           printf("digite a área: ");
       scanf("%f" ,&area2);

           float percapita2, densidade2;

           percapita2 = (PIB2*1e9f) / (float) populacao2;
           densidade2 = (float) populacao2 / area2;

            


           printf("Carta:2\n");

           printf("Estado: %s\n",estado2);
           printf("Código: %s\n",codigo2);
           printf("Nome da cidade: %s\n",cidade2);
           printf("PIB %f bilhões de reais\n",PIB2);
           printf("Número de pontos turísticos: %d\n",turisticos2);
           printf("População: %lu \n",populacao2);
           printf("Área: %f km²\n",area2);


            printf("renda per capita: %.2f\n" ,percapita2);
              printf("densidade populacional: %.2f \n" ,densidade2);

             double super2;
              super2 = populacao2 + area2 + (PIB2 * 1e9f) + turisticos2 + percapita2 + (1.0f/densidade2); 

              printf("super: %.2f\n" ,super2);




                        
                            printf("População: %d\\n", populacao > populacao2); 

                         printf("Area: %d\n", area > area2);

                            printf("PIB: %d\n", PIB > PIB2);

                               printf("Pontos Turisticos: %d\n", turisticos > turisticos2);

                                  printf("PIB p Capita: %d\n", percapita > percapita2);

                                         printf("Super Poder: %d\n", super > super2);
 

             


                     
                     

                     if(populacao > populacao2){
                          printf("população: carta1 venceu\n");}
                      
                  else{printf("população: carta2 venceu\n");}


                     if(area > area2){
                          printf("area: carta1 venceu\n");}
                      
                  else{printf("area: carta2 venceu\n");}

                  
                    if((PIB*1e9f) > (PIB2*1e9f)){
                          printf("PIB: carta1 venceu\n");}
                      
                  else{printf("PIB: carta2 venceu\n");}

                  
                
                    if(turisticos > turisticos2){
                          printf("pontos turisticos: carta1 venceu\n");}
                      
                  else{printf("pontos turisticos: carta2 venceu\n");}


                     
                 if( (1.0f/densidade) > (1.0f/densidade2)){
                          printf("densidade populacional: carta1 venceu\n");}
                      
                  else{printf("densidade populacional: carta2 venceu\n");}

                  
                 if(percapita > percapita2){
                          printf("renda per capita: carta1 venceu\n");}
                      
                  else{printf("renda per capita: carta2 venceu\n");}


                  
                 if(super > super2){
                          printf("super: carta1 venceu\n");}
                      
                  else{printf("super: carta2 venceu\n");}

  




          





    return 0;
}
