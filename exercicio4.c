#include<stdio.h>
#include<math.h>

int main(){
int numero =1;
int contagem = 0;

printf("Os cinco primeiros multiplos de 3 maiores que 0 sao:\n");
while(contagem< 5){
if (numero % 3 ==0){

printf("%d\n", numero);
   contagem++;}
   
   numero++;


}

return 0;
}

