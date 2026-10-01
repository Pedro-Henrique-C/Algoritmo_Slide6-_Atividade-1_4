#include <stdio.h>

int main()
{
    int op;
    printf("===== MENU =====\n 1 - Verificar numero impar ou par\n 2 - Verificar numero negativo ou positivo\n 3 - Verifiicar o quadrado do numero\n 4 - Sair\n Qual operação vc deseja testar: ");
    scanf ("%d", &op);
    
    switch (op){
        case 1:
            // numero impar ou par
            int num1;
            printf ("Qual numero vc deseja verificar: ");
            scanf ("%d", &num1);
            
            if (num1 % 2 == 0 ){
                printf ("o numero %d é par", num1);
            }
            else{
                printf ("o numero %d é impar", num1);
            }
            
            if (num1 < 0){
                printf (" e o numero %d é negativo", num1);
            }
            else if (num1 == 0){
                printf (" e o numero %d é neutro", num1);
            }
            else{
                printf (" e o numero %d é positivo", num1);
            }
            break;
        case 2:
            // numero positivo ou negativo
            int num2;
            printf ("Qual numero vc deseja verificar se é negativo ou positivo: ");
            scanf ("%d", &num2);
            
            if (num2 < 0){
                printf ("o numero %d é negativo", num2);
            }
            else if (num2 == 0){
                printf ("o numero %d é neutro", num2);
            }
            else{
                printf ("o numero %d é positivo", num2);
            }
            break;
        case 3:
            // quadrado de um numero
            int num3;
            int quad;
            printf ("Qual numero vc deseja saber o quadrado: ");
            scanf ("%d", &num3);
            
            quad = (num3 * num3);
            printf ("o quadrado do numero %d é %d", num3, quad);
            break;
        case 4:
            printf ("você optou por sair, saindo...");
            break;
    }

    return 0;
}