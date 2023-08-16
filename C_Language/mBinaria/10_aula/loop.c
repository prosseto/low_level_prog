#include <stdio.h>

int main(void){
    unsigned int i = 0;
imprimir:
    printf("O valor de i eh: %u\n", i);
    i++;
    if (i < 3)
        goto imprimir;

    for (unsigned x = 0; x < 3 ;x++)
        printf("O valor de x eh: %u\n", x);

	return 0;
}
