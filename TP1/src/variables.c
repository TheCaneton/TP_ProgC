#include <stdio.h>

int main() {
    char c = 'A';
    signed char sc = -5;
    unsigned char uc = 200;

    short s = -123;
    unsigned short us = 456;

    int i = -1000;
    unsigned int ui = 1000;

    long int li = -50000;
    unsigned long int uli = 50000;

    long long int lli = -9000000000;
    unsigned long long int ulli = 9000000000;

    float f = 3.14;
    double d = 2.718281828;
    long double ld = 1.23456789012345;

    printf("%c\n", c);
    printf("%d\n", sc);
    printf("%u\n", uc);

    printf("%d\n", s);
    printf("%u\n", us);

    printf("%d\n", i);
    printf("%u\n", ui);

    printf("%ld\n", li);
    printf("%lu\n", uli);

    printf("%lld\n", lli);
    printf("%llu\n", ulli);

    printf("%f\n", f);
    printf("%f\n", d);
    printf("%Lf\n", ld);

    return 0;
}
