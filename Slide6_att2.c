#include <stdio.h>

int main(){   
    int n200 = 2, n100 = 2, n50 = 2, n20 = 2, n10 = 2, n5 = 2;
    int u200 = 0, u100 = 0, u50 = 0, u20 = 0, u10 = 0, u5 = 0;
    int saque;
    int quebra = 1;
    
    printf("Informe o valor do saque: ");
    scanf("%d", &saque);
    
    if (saque <= 0) {
        printf ("saque invalido, informe um valor maior que 0");
    }
    if (saque % 5 != 0){
        printf ("saque invalido informe um valor que seja multiplo de 5");
    }
    
    while (n200 > 1 && saque >= 200) {
        n200 = n200 - 1;
        saque = saque - 200;
        u200 = u200 + 1;
    }

    while (n100 > 1 && saque >= 100) {
        n100 = n100 - 1;
        saque = saque - 100;
        u100 = u100 + 1;
    }

    while (n50 > 1 && saque >= 50) {
        n50 = n50 - 1;
        saque = saque - 50;
        u50 = u50 + 1;
    }

    while (n20 > 1 && saque >= 20) {
        n20 = n20 - 1;
        saque = saque - 20;
        u20 = u20 + 1;
    }

    while (n10 > 1 && saque >= 10) {
        n10 = n10 - 1;
        saque = saque - 10 ;
        u10 = u10 + 1;
    }

    while (n5 > 1 && saque >= 5) {
        n5 = n5 - 1;
        saque = saque - 5;
        u5 = u5 + 1;
    }
    
    if (saque != 0){
        printf ("Não foi possivel realizar o saque\n");
        printf ("Valor que não pode ser entregue: %d", saque);
    }
    else{
        printf ("Saque realizado com sucesso\n");
        printf ("quantidade de notas que sobrou:\n %d de 200\n %d de 100\n %d de 50\n %d de 20\n %d de 10\n %d de 5\n", n200, n100, n50, n20, n10, n5);
        printf ("quantidade de notas usadas:\n %d de 200\n %d de 100\n %d de 50\n %d de 20\n %d de 10\n %d de 5", n200, n100, n50, n20, n10, n5);
        
    }    

    return 0;
}