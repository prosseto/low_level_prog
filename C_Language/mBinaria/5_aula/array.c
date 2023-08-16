#include <stdio.h>

int main(void){
    char c[3];

    printf("O tamanho de c eh: %p\n", sizeof c); //retorna o tamanho em bytes
    printf("A quantidade de elementos de c eh: %p\n", sizeof c / sizeof (char));//retorna a quantidade de elementos
    
    c[0] = 'A';
    c[1] = 0x42;
    c[2] = 67; //Conversões implícitas de int para char

    printf("Valor de c[0] e %c\n", c[0]);
    printf("Valor de c[1] e %c\n", c[1]);
    printf("Valor de c[2] e %c\n", c[2]);
    printf("Valor de c[10] e %d\n", c[10]);
    //memória
    
    printf("O end de memória de c e %p\n", c);
    printf("O end de memória de c e %p\n", &c);
    printf("O end de memória de c[1] e %p\n", &c[1]);
    printf("Leitura fora do limite do array c[10] e %p\n", &c[10]);//Em C o array é convertido em um endereco de memória e somado ao subscrito
	return 0;
}
