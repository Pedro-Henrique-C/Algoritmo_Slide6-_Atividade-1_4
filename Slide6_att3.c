#include <stdio.h>

int main()
{
    int A;
    int B;
    int C;
    printf("informe o valor de A: ");
    scanf("%d", &A);
    printf("informe o valor de B: ");
    scanf("%d", &B);
    printf("informe o valor de C: ");
    scanf("%d", &C);
    
    
    // valores iguais
    
    if ((A == B) || (B == C) || (C == A)){
        
        printf ("  Existe valores iguais");
        
        if ((A == B) && (B == C) && (C == A)){
        
            printf ("  Os três valores são iguais");
        }
    }
    
    else {
        
         //maior, menor e intermediario
        if ((A > B) && (A > C)){
            printf ("Maior valor = A");
        
            if ((B > C)){
                printf ("  Menor valor = C e Intermediario = B");
            }
        
            else{
                printf ("  Menor Valor = B e Intermediario = C");   
            }
        }
    
        else if ((B > C) && (B > A)){
            printf ("Maior Valor = B");
        
            if ((A > C)){
                printf ("  Menor valor = C e Intermediario = A");
            }
        
            else{
                printf ("  Menor Valor = A e Intermediario = C");   
            }
        
        }
    
        else {
            printf ("Maior Valor  = C");
        
            if ((A > B)){
                printf ("  Menor valor = B e Intermediario = A");
            }
        
            else{
                printf ("  Menor Valor = A e Intermediario = B");   
            }
        }
        
    }
    
    //ordem crescente ou decrescente
    if ((A < B) && (B < C)){
        
        printf ("  Esta em ordem crescente");
    }
        
    else if ((C < B) && (B < A)){
        
        printf ("  Esta em ordem decrescente");
    }
    
    else{
        
        printf ("  Esta em ordem aleatoria");
    }
    
    return 0;
}