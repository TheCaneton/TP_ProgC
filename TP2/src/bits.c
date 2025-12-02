#include <stdio.h>

int main() {
    int d = 0x10001000;  

   
    int bit4  = (d >> 28) & 1;
   
    int bit20 = (d >> 12) & 1;
  
    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}
