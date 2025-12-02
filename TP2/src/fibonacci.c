#include <stdio.h>

int main() {
    int n;
    int U0 = 0, U1 = 1;   
    int Un;             
  
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    printf("Suite de Fibonacci jusqu'à U%d :\n", n);

    printf("0 1 ");

    for (int i = 2; i <= n; i++) {
        Un = U0 + U1;
        printf("%d ", Un);

        U0 = U1;
        U1 = Un;
    }

    printf("\n");
    return 0;
}
