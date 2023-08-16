#include <stdio.h>

int main(void){
    char c;
    printf("O tamanho e %lu\n",sizeof c); //Long Unsigned
    printf("O tamanho de char e %lu\n",sizeof (char)); //Long Unsigned

    c = 10;
    c = 0xa;
    c = 0b00010010;
    c = '\n';

    printf("O valor contido em c e %i\n", c); //Long Unsigned

	return 0;
}
