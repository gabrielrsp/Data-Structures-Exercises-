#include <stdio.h>

int main(){
    int i,q,d;
    int x=0;
    int num, aux;
    int dividendo, quociente;
    int resultado;
    int resto;
    char comb[5];
    char combr[5];
    char pack[5];
    int cont = 0;
    char totalVet[5];
    char conjunto[10];
   
    scanf("%d", &q);
 
    int vetor[q];                           
    
    for (i=0; i<q ; i++){
     
        scanf("%d", &vetor[i] );
    }

        for (i = 0; i< q ; i++){

        num = vetor[i];

               if (vetor[i] == 0){
                    totalVet[i] = 'A';  
                               
                }
              else if (vetor[i] == 1){
                    totalVet[i]= 'C';
                   
                }
               else if (vetor[i] == 2){
                    totalVet[i]= 'G';    
                    
                    }
                 else if (vetor[i] == 3){
                    totalVet[i]= 'T';    
                    
                    } else  {


        while( num % 4 == 0 || num > 4 ){
        resultado = num / 4;
       
        resto = num % 4;
        
            if (resto == 0){
                    combr[x] = 'A'; 
                    cont+=1;
                }
                if (resto == 1){
                    combr[x]= 'C'; 
                    cont+=1;
                }
                    if (resto == 2){
                    combr[x]= 'G'; 
                    cont+=1;
                }
                    if (resto == 3){
                    combr[x]= 'T';   
                    cont+=1;                  
                }
                 

        resto = 0;
        num = 0;
        x++;
    
        num = resultado;
           if (resultado == 0){
                    comb[0] = 'A';  
                    cont+=1;            
                }
                if (resultado == 1){
                    comb[0]= 'C';
                    cont+=1;
                }
                    if (resultado == 2){
                    comb[0]= 'G';
                    cont+=1;
                }
                    if (resultado == 3){
                    comb[0]= 'T';    
                    cont+=1; 
                    }  
         }   
                    
        
        int j = 1;
        for(i=cont-2; i>-1; i--){ 
                
                pack[j] = combr[i];
                j+=1;
        }
         //   printf("%s", pack);

        totalVet[0] = comb[0];
        
          for(i=1; i<cont; i++){
            totalVet[i]= pack[i];
            printf("\n");
            }
        
           }

        }
    
    
       for (i=0; i<q ; i++){   
       printf("\n%c", totalVet[i]);   //imprime  varios, mas todos contendo apenas um algarismo exemplo  A C T G
         }

       printf("\n%s", totalVet);  //imprime apenas 1 mas quando tem mais de 1 algarismo exemplo TAG
     
     

    return 0;
    
    }
