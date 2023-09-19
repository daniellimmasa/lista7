#include <stdio.h>

int main() {
    int fruta, quantidade, cod=1;
    double valorTotal= 0.0;

    printf("--------- CARDAPIO DE FRUTAS --------\n");
    printf("1\t\tABACAXI\t\tR$ 5,00\n");
    printf("2\t\tMACA\t\tR$ 1,00\n");
    printf("3\t\tPERA\t\tR$ 4,00\n");
    
    do{
    printf(" digte o numero da fruta escolhida: ");
    scanf("%d", &fruta);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);



    switch (fruta) {
        case 1:
            valorTotal += (quantidade * 5);
            break;
        case 2:
            valorTotal += (quantidade * 1);
            break;
        case 3:
            valorTotal += (quantidade * 4);
            break;
        
        default:
            printf("Código de item inválido.\n");
            return 1;
    }
    
    printf("deseja algo mais: digite 1 para sim / 2 para nao : ");
    scanf("%d", &cod);

    }while(cod ==1);
    printf("Valor a ser pago e: R$ %.2lf\n", valorTotal);
 

    return 0;

    
}