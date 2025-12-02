#include <stdio.h>

int main() {

    char s1[100] = "Hello";      
    char s2[100] = " World!";    

    int len = 0;
    while (s1[len] != '\0') {
        len++;
    }
    printf("Longueur de s1 = %d\n", len);

    char s3[100];
    int i = 0;
    while (s1[i] != '\0') {
        s3[i] = s1[i];
        i++;
    }
    s3[i] = '\0'; 
    printf("Copie de s1 dans s3 : %s\n", s3);

    
    char s4[200];
    int j = 0;

    
    i = 0;
    while (s1[i] != '\0') {
        s4[j] = s1[i];
        i++;
        j++;
    }

    
    i = 0;
    while (s2[i] != '\0') {
        s4[j] = s2[i];
        i++;
        j++;
    }

    s4[j] = '\0';

    printf("Concaténation de s1 et s2 : %s\n", s4);

    return 0;
}
