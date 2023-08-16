#include <stdio.h>

/*
 * + uniario e binario
 * - unario e binario
 * * e / binarios
 *
*/

int main(void){
    int i = 10 / 3;
    printf("O valor de i inteiro é %i\n", i);
    printf("O valor de i inteiro com cast de float é %f\n", (float)i);

    float f = 10. / 3.;
    printf("O valor de f float é %.10f\n", f);

	return 0;
}
