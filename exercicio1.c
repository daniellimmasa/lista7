#include<stdio.h>
#include<math.h>

int main(){
int N;
printf("digite um numero inteiro: ");
scanf("%d", &N);


if (N <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    } else {
        
        for (int i = 0; i <= N; i++) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}

