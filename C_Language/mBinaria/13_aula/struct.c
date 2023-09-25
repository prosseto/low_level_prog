#include <stdio.h>
#include <strings.h>

struct teste{
    int a;
    char b;
    union {
        char c;
        short d;
        int e;
    };
}; 

int main(void){
    struct teste t;
    struct teste t2;
    char *p = &t;
    t.a = 10;
    t.b = 65;
    t.c = 67;
    t2.b = 66;
    printf("Tamanho da estrutura %d\n", sizeof(struct teste));
    printf("Endereco da estrutura t %p\n", &t);
    printf("Endereco da estrutura t2 %p\n", &t2);
    printf("Valor em t.a %d\n", t.a);
    printf("Valor em byte 1 de t.a %d\n", *p);
    printf("Valor em byte 2 + 1 de t.a %d\n", *(p+1)+1);
    printf("Valor em byte 3 de t.a %d\n", *(p+2));
    printf("Valor em byte 4 de t.a %d\n", *(p+3));

    *(p+3) = 10;
    printf("Alocando em byte 3 de t.a com saída de t.a %d\n", t.a);
    return 0;

}
