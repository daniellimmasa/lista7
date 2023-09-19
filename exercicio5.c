#include<stdio.h>
int main(){
int soma =0;
printf("os 50 primeiros numeros pares:\n");
for (int i = 2; i <= 100 ; i +=2){

soma += i;

}
printf("\nA soma dos 50 primeiros numeros pares e: %d\n", soma);

return 0;


}