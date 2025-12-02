#include <stdio.h>

int main() {
    int numbers[] = {0, 4096, 65536, 65535, 1024};
    int n, i;

    for (int idx = 0; idx < 5; idx++) {
        n = numbers[idx];
        printf("Nombre : %d -> Binaire : ", n);

        if (n == 0) {
            printf("0\n");
            continue;
        }

        int bits[64];
        int count = 0;

        for (; n > 0; n /= 2) {
            bits[count++] = n % 2;
        }

        for (i = count - 1; i >= 0; i--) {
            printf("%d", bits[i]);
        }

        printf("\n");
    }

    return 0;
}
