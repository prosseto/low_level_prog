#include <stdio.h>
#include <stdlib.h>

struct teste{
    int a;
    char b;
    union {
        char c;
        short d;
        int e;
    };
}; 

void *malloc_s(int size){
    void *p;
    p = malloc(size);
    if (!p){
        fprintf(stderr, "memoria insuficiente\n");
        return 0;
    }

    return p;
}

int main(int argc, char **argv){
    struct teste *t;
    t = malloc_s(sizeof(struct teste));
    t->a = 10;
    printf("t.a é %d\n", t->a);
    return 0;

}
