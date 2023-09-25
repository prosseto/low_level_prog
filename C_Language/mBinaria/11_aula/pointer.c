#include <stdio.h>

void imprimir(char *s){
    while (*s)
        putchar(*s++);//++ incrementa o ponteiro
    printf("\n");
    
}
int main(void){
    int i[] = { 2019, 300, 200 };
    // Caminhar pelo array com ponteiros

    for (char c = 0; c < 3; c++)
        printf("*i+c: %d\t *(i+c): %d\t&i+c: %p\t*(&i[0]+c): %d\n", *i+c, *(i+c), &i+c, *(&i[0]+c));
    
    printf("*i+c: Primeiro Valor Somado(i[1]+c)\n *(i+c): Caminhando pelos valores de memória(i[c])\n&i+c: Endereços de Memória\n*(&i[0]+c): Dereferencia ponteiros\n");
    printf("*(i+c) != *(&i+c) sendo o primeiro correto com a intenção de percorrer os valores de memoria\n\n");
    // teste 2

    int f = 200;

    int *p = &f;//Atribui em memoria p o end da memoria f
    printf("O end de memoria p(32 bits) contem o end de memoria:%p\n", p);
    printf("O valor de memoria p(32) consulta a memoria contida neste end de memoria (*p):%d\n\n", *p);//Dereferencia p pelo seu valor de memoria
    
    //int *p2 = f;//Warning integer pointer without a cast
    //printf("O end de memoria p2(32 bits) contem o end de memoria:%d\n", p2);
    //printf("O valor de memoria p2(32) consulta a memoria contida neste end de memoria (*p):%d\n", *p2);//Seg fault porque tenta acessar uma memoria que não pode ser lida


    char c[] = "Uma frase bem longa";
    imprimir(c); 

    //incrementos
    int n = 2020;
    p = &n;
    printf("O valor de *p(n) é: %u\n", *p);
    printf("Incrementa o valor de ++*p: %u\n", ++*p);
    printf("O valor de (*p)++(+1) é: %u\n\n", (*p)++);

    p = &i[0];
    printf("*p(n) aponta para i: %u\n", *p);
    printf("++p* soma o primeiro valor do array i: %u\n", ++*p);
    printf("(*p)++ também soma o primeiro valor do array i: %u\n", (*p)++);
    printf("*p++ é i[1]: %u\n", *p++);
	return 0;
}
