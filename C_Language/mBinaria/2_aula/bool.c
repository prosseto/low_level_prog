#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool b;

    printf("Valor de bool é %lu\n", sizeof b);

    b = true;
    b = false;

    printf("Valor de b é %i\n", b);
	return 0;
}
