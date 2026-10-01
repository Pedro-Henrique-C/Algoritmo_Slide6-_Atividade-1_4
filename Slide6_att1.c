#include <stdio.h>

int main ()
    {
    int lado1;
    int lado2;
    int lado3;

    printf("Digite o valor do lado 1: ");
    scanf("%d", &lado1);
    printf("Digite o valor do lado 2: ");
    scanf("%d", &lado2);
    printf("Digite o valor do lado 3: ");
    scanf("%d", &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
    {
        printf("Os lados formam um triangulo.\n");
        
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("O triangulo e equilatero.\n");
        }
        else if (lado1 == lado2 && lado2 != lado3 || lado1 == lado3 && lado3 != lado2 || lado2 == lado3 && lado3 != lado1)
        {
            printf("O triangulo e isosceles.\n");
        }
        else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
        {
            printf("O triangulo e escaleno.\n");
        }
    }
    else
    {
        printf("Os lados nao formam um triangulo.\n");
    }
}