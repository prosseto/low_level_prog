#include <stdio.h>
#define size1 100

int strsize(char *s){
    char *p = s;
    while (*p++)
        ;
    return p - s - 1;
}

int strncat2(char *s, char **argv){
   char *p = argv[1];
   char *size = s;

   for (;*s = *p; *s++, *p++)
    ;
   p = argv[2];

   while(*s++ = *p++)
    ;   
   return s - size;
}

int verify(int argc, char *argv[]){
    if (argc != 3){
        printf("Precisa de dois argumentos para comparação");
        return 1;
    }
    int s1 = strsize(argv[1]);
    int s2 = strsize(argv[2]);
    
    if (s1 +s2 > size1){
        printf("Soma dos argumentos maior que 100, %d, %d", s1, s2);
        return 2;
    }
    return 0;
}

int main(char argc, char *argv[]){
    
    int r = verify(argc, argv);
    if (r)
       return r;

    char ar1[size1];
    int s = strncat2(ar1, argv);

    printf("Resultado da cópia é: %s\nCopiados %d bytes", ar1, s);

    return 0;
}
