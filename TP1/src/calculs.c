#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Résultat : %d\n", num1 + num2);
            break;

        case '-':
            printf("Résultat : %d\n", num1 - num2);
            break;

        case '*':
            printf("Résultat : %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0) {
                printf("Résultat : %d\n", num1 / num2);
            } else {
                printf("Erreur : division par zéro !\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                printf("Résultat : %d\n", num1 % num2);
            } else {
                printf("Erreur : modulo par zéro !\n");
            }
            break;

        case '&':
            printf("Résultat (ET bit-à-bit) : %d\n", num1 & num2);
            break;

        case '|':
            printf("Résultat (OU bit-à-bit) : %d\n", num1 | num2);
            break;

        case '~':
            
            printf("Résultat (~num1) : %d\n", ~num1);
            break;

        default:
            printf("Opérateur inconnu !\n");
            break;
    }

    return 0;
}

//Valeurs de num1, num2 et de op testées sur VSCode. Le code est fontionnel 


