#include <stdio.h>
#include <stdint.h>  
#include <inttypes.h> 

int main() {

    
    char c = 'A';
    short s = 12345;
    int i = 0xabcdef;
    long int li = 0x12345678;
    long long int lli = 0x1122334455667788;
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.41421356237L;

   
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    
    printf("=== Avant manipulation ===\n");
    printf("Adresse de c : %p, Valeur : %x\n", (void*)pc, *(unsigned char*)pc);
    printf("Adresse de s : %p, Valeur : %x\n", (void*)ps, *(unsigned short*)ps);
    printf("Adresse de i : %p, Valeur : %x\n", (void*)pi, *(unsigned int*)pi);
    printf("Adresse de li : %p, Valeur : %lx\n", (void*)pli, *(unsigned long*)pli);
    printf("Adresse de lli : %p, Valeur : %llx\n", (void*)plli, *(unsigned long long*)plli);
    
    
    union { float f; unsigned int u; } uf = {f};
    union { double d; unsigned long long u; } ud = {d};
    union { long double ld; unsigned long long u[2]; } uld = {{ld}};
    
    printf("Adresse de f : %p, Valeur : %x\n", (void*)pf, uf.u);
    printf("Adresse de d : %p, Valeur : %llx\n", (void*)pd, ud.u);
    printf("Adresse de ld : %p, Valeur (64 premiers bits) : %llx\n", (void*)pld, uld.u[0]);

    
    *pc = 'B';
    *ps += 1;
    *pi -= 1;
    *pli += 2;
    *plli -= 3;
    uf.f = 1.0f;
    *pf = uf.f;
    ud.d = 1.0;
    *pd = ud.d;
    uld.ld = 2.0L;
    *pld = uld.ld;

    // --- Affichage après manipulation ---
    printf("\n=== Après manipulation ===\n");
    printf("Adresse de c : %p, Valeur : %x\n", (void*)pc, *(unsigned char*)pc);
    printf("Adresse de s : %p, Valeur : %x\n", (void*)ps, *(unsigned short*)ps);
    printf("Adresse de i : %p, Valeur : %x\n", (void*)pi, *(unsigned int*)pi);
    printf("Adresse de li : %p, Valeur : %lx\n", (void*)pli, *(unsigned long*)pli);
    printf("Adresse de lli : %p, Valeur : %llx\n", (void*)plli, *(unsigned long long*)plli);
    
    uf.f = *pf;
    ud.d = *pd;
    uld.ld = *pld;
    
    printf("Adresse de f : %p, Valeur : %x\n", (void*)pf, uf.u);
    printf("Adresse de d : %p, Valeur : %llx\n", (void*)pd, ud.u);
    printf("Adresse de ld : %p, Valeur (64 premiers bits) : %llx\n", (void*)pld, uld.u[0]);

    return 0;
}
