#include <stdio.h>

int main(){

    int max = 0;
    int n1 = 0;
    int n2 = 0;
    char C;
    int N = 0;
    int res = 0;

      scanf("%d", &N);
      scanf("%d %c %d", &n1, &C, &n2);
    
    if (C == '+'){
       res = n1 + n2;
       if(res > N ){
           printf("overflow");
       }else{
           printf("no overflow");
       }
    }
    else  if (C == 'x'){
       res = n1 * n2;
       if(res > N ){
           printf("overflow ");
       }else{
           printf("no overflow");
       }

    }



    return 0;
}