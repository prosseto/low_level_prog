#include <stdio.h>

/*
 * Conjuncao (E, AND)
 * 0 0 = 0
 * 0 1 = 0
 * 1 0 = 0
 * 1 1 = 1
 *
 * Disjuncao (OU, OR)
 * 0 0 = 0
 * 0 1 = 1
 * 1 0 = 1
 * 1 1 = 1
 *
 * >, <, ==, !=, <=, >=
*/

int main(void){
    int a = 10;
    int b = 10;

    printf("O resultado lógico é: %d", !(a == b));

	return 0;
}
