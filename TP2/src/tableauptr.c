#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 11

int main() {
    int tabInt[SIZE];
    float tabFloat[SIZE];

    srand(time(NULL));

    int *pInt = tabInt;
    float *pFloat = tabFloat;

    for (int i = 0; i < SIZE; i++) {
        *(pInt + i) = rand() % 101;             
        *(pFloat + i) = (float)(rand() % 1000) / 100; 
    }

    printf("Tableau d'entiers (avant multiplication) :\n");
    for (int *ptr = tabInt; ptr < tabInt + SIZE; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    printf("Tableau de float (avant multiplication) :\n");
    for (float *ptr = tabFloat; ptr < tabFloat + SIZE; ptr++) {
        printf("%.2f ", *ptr);
    }
    printf("\n\n");

    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            *(tabInt + i) *= 3;
            *(tabFloat + i) *= 3;
        }
    }

    printf("Tableau d'entiers (après multiplication) :\n");
    for (int *ptr = tabInt; ptr < tabInt + SIZE; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");

    printf("Tableau de float (après multiplication) :\n");
    for (float *ptr = tabFloat; ptr < tabFloat + SIZE; ptr++) {
        printf("%.2f ", *ptr);
    }
    printf("\n");

    return 0;
}
