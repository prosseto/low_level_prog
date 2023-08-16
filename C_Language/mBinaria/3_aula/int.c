#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){
    uint32_t i;
    i = UINT_MAX;

    printf("O tamanho de i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i * 8); //size_t
    printf("Valor de i é %u\n", i);

    short a = UINT16_MAX;
    long b = UINT64_MAX;

    printf("O tamanho de a (ushort): %zu bytes / %zu bits\n", sizeof a, sizeof a * 8); //size_t
    printf("Valor de a é %hu\n", a);
    printf("O tamanho de b (ulong): %zu bytes / %zu bits\n", sizeof b, sizeof b * 8); //size_t
    printf("Valor de b é %lu\n", b);

    size_t t;

    printf("O tamanho de b (size_t): %zu bytes / %zu bits\n", sizeof t, sizeof t * 8); //size_t
    printf("Valor de size_t é %zu\n", t);

    register int reg = 0; //prioriza ficar no registrador

    printf("O tamanho de reg (ulong): %zu bytes / %zu bits\n", sizeof reg, sizeof reg * 8); //size_t
    printf("Valor de reg é %d\n", reg);

	return 0;
}
