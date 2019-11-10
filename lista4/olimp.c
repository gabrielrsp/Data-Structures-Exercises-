#include <stdio.h>

int main(){

    int qtdPaises, qtdMods;
    int i, j, k;

    int vetOurowinners[50];
    int vetPratawinners[50];
    int vetBronzewinners[50];

        printf("numero de paises: ");
        scanf("%d", &qtdPaises);

        printf("numero de modalidades: ");
        scanf("%d", &qtdMods);

    int mat[qtdMods][3];
    int vetRanking[qtdMods];

        for(i=1;i<qtdMods+1; i++){
            for(j=0; j< 3; j++){
                scanf("%d", &mat[i][j]);
                    if(j == 0){
                        vetOurowinners[i] = mat[i][j];
                    }
                    else if(j == 1){
                        vetPratawinners[i] = mat[i][j];
                    }
                    else if(j == 2){
                        vetBronzewinners[i] = mat[i][j];
                    }
                }
            }


    int vetPaisOuro[qtdPaises];
    int contOuro =0, contRecOuro = 1;


     for(i=1;i<qtdPaises+1;i++){
            for(j=1;j<qtdMods+1;j++){
                if(i == vetOurowinners[j]){
                    contOuro++;
                }
            } 
            vetPaisOuro[i] = contOuro;
            contOuro =0 ;
        }

        for(i=1;i<qtdPaises+1;i++){
            if(vetPaisOuro[i+1] == vetPaisOuro[i]){
                contRecOuro++;
                }    
        }

        int maiorOuro=0;
            
        for(i=1;i<qtdPaises+1;i++){
            
            if(maiorOuro ==0){
                maiorOuro= 1;
            }
            if(vetPaisOuro[i] > maiorOuro){
             maiorOuro = i;  
            } 
           
        } 
            int newVetOuroPosicionado[qtdPaises-1];
            int idMaiorOuro = 0;

            if(contRecOuro == qtdPaises){
                idMaiorOuro = contRecOuro;
                printf("\n");
                printf("caso de paises com mesma qtd de ouro, logo vence pais de maior id: %d", contRecOuro);
                vetRanking[0] = contRecOuro;
            }else{
                printf("\n");
                printf("pais q recebeu maior qtd de ouro: %d", maiorOuro);
                vetRanking[0] = maiorOuro;
            }

                    
     ///////////////      PRATA       ////////////////

    int vetPaisPrata[qtdPaises];
    int contPrata =0, contRecPrata = 1;


        for(i=1;i<qtdPaises+1;i++){
            for(j=1;j<qtdMods+1;j++){
                if(i == vetPratawinners[j]){
                    contPrata++;
                }
            } 
            
            vetPaisPrata[i] = contPrata;
            contPrata =0 ;
        }

        for(i=1;i<qtdPaises+1;i++){
            if(vetPaisPrata[i+1] == vetPaisPrata[i]){
                contRecPrata++;
            }    
        }

        int maiorPrata=0;
            
        for(i=1;i<qtdPaises+1;i++){
            if(maiorPrata ==0){
                maiorPrata= 1;
            }
            if(vetPaisPrata[i] > maiorPrata){
             maiorPrata = i;  
            } 
        } 
        
            if(contRecPrata == qtdPaises){
                printf("\n");
                printf("caso de paises com mesma qtd de Prata, logo vence pais de maior id: %d", contRecPrata);
                vetRanking[1] = contRecPrata;
            }else{
                printf("\n");
                printf("pais q recebeu maior qtd de Prata: %d", maiorPrata);
                vetRanking[1] = maiorPrata;
            }


   ////////////  BRONZE ////////////////

   int vetPaisBronze[qtdPaises];
   int contBronze =0, contRecBronze = 1;

        for(i=1;i<qtdPaises+1;i++){
            for(j=1;j<qtdMods+1;j++){
                if(i == vetBronzewinners[j]){
                    contBronze++;
                }
            } 
         
            vetPaisBronze[i] = contBronze;
            contBronze =0 ;
        }

        for(i=1;i<qtdPaises+1;i++){
            if(vetPaisBronze[i+1] == vetPaisBronze[i]){
                contRecBronze++;
            }    
        }

        int maiorBronze=0;
            
        for(i=1;i<qtdPaises+1;i++){ 
            if(maiorBronze ==0){
                maiorBronze= 1;
            }
            if(vetPaisBronze[i] > maiorBronze){
             maiorBronze = i;  
            } 
        } 
        
            printf("\n");
            
            if(contRecBronze == qtdPaises){
                printf("caso de paises com mesma qtd de Bronze, logo vence pais de maior id: %d", contRecBronze);
                vetRanking[2]= contRecOuro;
            }
            else{
                printf("\n");
                printf("pais q recebeu maior qtd de Bronze: %d", maiorBronze);
                vetRanking[2] = contRecBronze;
            }

}