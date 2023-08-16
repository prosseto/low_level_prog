#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void){
    float f = 1;

    printf("O tamanho de f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f * 8); //size_t
    printf("Valor de f é %f\n", f);

    double f_1 = 5e2; //3 * 10 ^ 2

    printf("O tamanho de f_1 (float): %zu bytes / %zu bits\n", sizeof f_1, sizeof f_1 * 8); //size_t
    printf("Valor de f_1 é %.3330f\n", f_1+3);

    char c = 4;

    printf("O tamanho de c (char): %zu bytes / %zu bits\n", sizeof c, sizeof c * 8); //size_t
    printf("Valor de c é %.10f\n", c+3.123456789);

    int i = 4;

    printf("O tamanho de i (integer): %zu bytes / %zu bits\n", sizeof i, sizeof i * 8); //size_t
    printf("Valor de i é %.0i\n", i);

	return 0;
}
