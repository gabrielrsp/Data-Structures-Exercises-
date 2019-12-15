#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAX 100
    typedef struct deque Deque;

    struct deque{
    int comprimento;
    int elementos[TAMANHO_MAX];
};

Deque * criarDeque(){
    Deque *l = (Deque *)malloc(sizeof(Deque));
    if(l != NULL){
        l->comprimento = 0;
    }
    return l;
}

int deque_vazio(Deque *deque){
    if(deque == NULL) printf("falha");
    
    if(deque->comprimento == 0) return 1;
    
    return 0;
}

int deque_cheio(Deque *deque){
     if(deque == NULL) printf("falha");
    
    if(deque->comprimento == TAMANHO_MAX) return 1;
    
    return 0;
}

int pushEsquerda(Deque *deque, int elemento){
  int i;

    if(deque == NULL) printf("falha");
    
    if( deque_cheio(deque) ) printf("falha");
    
    if( deque_vazio(deque) ) {
        deque->elementos[0] = elemento; 
        deque->comprimento++;
        return 1;
    }
    
    for(i = deque->comprimento; i >= 1; i--){
        deque->elementos[i] = deque->elementos[i-1];
    }
    
    deque->elementos[0] = elemento;
    deque->comprimento++;
    return 1;
}

int pushDireita(Deque *deque, int elemento){
    if(deque == NULL) printf("falha");
    
    if(deque_cheio(deque)) printf("falha");
    
    deque->elementos[deque->comprimento] = elemento;
    deque->comprimento++;
    return 1;
}

int popEsquerda(Deque *deque){
  int i;
    if(deque == NULL) printf("falha");
    
    if(deque->comprimento == 0) printf("falha");
    
    for (i = 0; i < deque->comprimento-1; i++){
        deque->elementos[i] = deque->elementos[i+1];
    }

    deque->comprimento--;
    return 1;

}

int popDireita(Deque *deque){
    if(deque == NULL) printf("falha");
    
    if(deque->comprimento == 0) printf("falha");
    
    deque->comprimento--;
    return 1;
}

void listEsquerda(Deque *deque){
  int i;
    if(deque == NULL) printf("falha");
    
    if(deque->comprimento == 0){
      printf("vazio");
    } else
    for(i = 0; i < deque->comprimento; i++){
        printf("%d ",deque->elementos[i]);   
    }
    printf("\n");
}

void listDireita(Deque *deque){
    int i;

    if(deque == NULL) printf("falha");
    
    if(deque->comprimento == 0) printf("vazio");;
  
    for(i = deque->comprimento -1; i>=0 ;i--){
        printf("%d ",deque->elementos[i]);    
    }
    printf("\n");
}

int main(){

  Deque *d = criarDeque();
    
  criarDeque(d);
  pushEsquerda(d, 3);
  pushDireita(d, 7);
  pushEsquerda(d, 8);
  pushDireita(d, 5);
  listEsquerda(d);
  popEsquerda(d);
  listEsquerda(d);
  popEsquerda(d);
  listDireita(d);
  popEsquerda(d);
  popEsquerda(d);
  listEsquerda(d);

}

