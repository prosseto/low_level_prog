#include <stdio.h>

int strsize(char *s){
    char *p = s;
    while (*p++)
        ;
    return p - s - 1;
}

int strend(char *s, char *t){
    int sS = strsize(s);
    int sT = strsize(t);
    char r = 0;

    for (; sS && sT; sT--, sS--){
       if (*(s+sS) != *(t+sT))
          break;
    }
             
    if (sT == 0)
        r = 1;

    return r;
}

int main(char argc, char *argv[]){
    
    if (argc != 3){
        printf("Precisa de dois argumentos para comparação");
        return 1;
    }

    int r = strend(argv[1], argv[2]);

    printf("Resultado %s e %s é: %d\n", argv[1], argv[2], r);

    return 0;
}
