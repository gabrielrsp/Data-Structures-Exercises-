#include <stdio.h>

int main(){
    int unidade, dezena, centena, milhar, resultado, i, n;
    int vetor[n];

    scanf("%d", &n);

    for (i=0; i< n; i++){
        scanf("%d", &vetor[i]);
    }


    for (i=0; i< n; i++){

    if(vetor[i] > 999 && vetor[i] < 10000){ 

    unidade = vetor[i] / 1000 ;   
    dezena =  (vetor[i]/ 100) - ( unidade * 10 ) ; 
    centena =  (vetor[i]/10) - (dezena *10)  - (unidade * 100); 
    milhar =  vetor[i] - (unidade *1000) - (dezena * 100) - (centena * 10);
    resultado = (milhar* 1000) + (centena*100) + (dezena*10) + unidade;
    
    }else if(vetor[i] > 99 &&  vetor[i] < 1000 ){

    unidade = vetor[i]/ 100 ;   
    dezena =  (vetor[i]/10) - (unidade *10);
    centena =  vetor[i] - (dezena * 10) - (unidade * 100);
    resultado = (centena*100) + (dezena*10) + unidade;
    }
    else if(vetor[i] > 9 || vetor[i] < 100){ 
    unidade =  (vetor[i]/10) ;
    dezena =  vetor[i] - (unidade * 10);
    resultado =  (dezena*10) + unidade;
    }

    if(resultado == vetor[i])
    printf("yes ");
    else
    printf("no ");
    
    }
    return 0;
}
