#include <stdio.h>

int main(){

    int unidade, dezena, centena, milhar, resultado, i;
    int vetor[2];
    int n[2];
    int n1, n2;

      scanf("%d %d", &n1, &n2);

      n[0] = n1;
      n[1] = n2;

    for (i=0; i< 2; i++){

    if(n[i] > 999 && n[i] < 10000){ 

        unidade = n[i] / 1000 ;   
        dezena =  (n[i]/ 100) - ( unidade * 10 ) ; 
        centena =  (n[i]/10) - (dezena *10)  - (unidade * 100); 
        milhar =  n[i] - (unidade *1000) - (dezena * 100) - (centena * 10);
        resultado = (milhar* 1000) + (centena*100) + (dezena*10) + unidade;
        vetor[i] = resultado;
        
        }else if(n[i] > 99 &&  n[i] < 1000 ){

        unidade = n[i]/ 100 ;   
        dezena =  (n[i]/10) - (unidade *10);
        centena =  n[i] - (dezena * 10) - (unidade * 100);
        resultado = (centena*100) + (dezena*10) + unidade;
        vetor[i] = resultado;
        }

        else if(n[i] > 9 || n[i] < 100){ 
        unidade =  (n[i]/10) ;
        dezena =  n[i] - (unidade * 10);
        resultado =  (dezena*10) + unidade;
        vetor[i] = resultado;
        }

    }

    if (vetor[0] > vetor[1]){
        printf("%d", vetor[0]);
    } else {
        printf("%d", vetor[1]);
    }

    return 0;
}