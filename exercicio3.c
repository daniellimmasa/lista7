#include<stdio.h>
#include<math.h>

int main(){
int N;
printf("digite um numero inteiro: ");
scanf("%d", &N);


    if (N <= 0) {
        printf("insira um número inteiro positivo.\n");
    } else {

        int numeroImpar = 1;
        
    
        for (int i = 0; i < N; i++) {
            printf("%d\n", numeroImpar);
            
            numeroImpar += 2;
        }
    }
    
    return 0;
}


