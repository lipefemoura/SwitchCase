#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op = 0;
    int a = 0;
    int b = 0;
    int resultado = 0;
    float resultado_div = 0;

    printf("----------CALCULADORA----------\n\n");
    printf("Entre com o numero da operacao desejada\n\n");
    printf("1-Soma\n");
    printf("2-Subtracao\n");
    printf("3-Multiplicacao\n");
    printf("4-Divisao\n\n");

    scanf("%d", &op);

    switch(op){

        case(1):

            printf("\nSoma selecionada.\n");
            printf("Digite A:");
            scanf("%d", &a);
            printf("\nDigite B:");
            scanf("%d", &b);
            resultado = a + b;
            printf("\n%d + %d = %d\n", a, b, resultado);

            break;

        case(2):

            printf("\nSubtracao selecionada.\n");
            printf("Digite A:");
            scanf("%d", &a);
            printf("\nDigite B:");
            scanf("%d", &b);
            resultado = a - b;
            printf("\n%d - %d = %d\n", a, b, resultado);

            break;

        case(3):

            printf("\nMultiplicacao selecionada.\n");
            printf("Digite A:");
            scanf("%d", &a);
            printf("\nDigite B:");
            scanf("%d", &b);
            resultado = a * b;
            printf("\n%d * %d = %d\n", a, b, resultado);

            break;

        case(4):

            printf("\nDivisao selecionada.\n\n");
            printf("Observar que A deve ser multiplo de B.\n\n");
            printf("Digite A:");
            scanf("%d", &a);
            printf("\nDigite B:");
            scanf("%d", &b);
            if(b!=0){
            resultado_div = a / b;
            printf("\n%d / %d = %f\n", a, b, resultado_div);
            }
            else {
                printf("\nOperacao invalida! Divisao por 0.\n");
            }

            break;

        default:

            printf("\nValor invalido!\n\n");

            break;
                }

    return 0;
}
