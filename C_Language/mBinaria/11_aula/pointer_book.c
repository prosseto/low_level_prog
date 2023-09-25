#include <stdio.h>
#define size 20

int strcat2(char *s, char *t){
    
    while (*s){
       *s++;
    }
    while(*s++ = *t++)
        ;
}

int main(char argc, char *argv[]){
    
    char name[size]="Test_String";
    char name2[]="Concat";

    printf("name[size]: %s\n", name);
    printf("name2: %s\n", name2);

    strcat2(name, name2);
    printf("Concatenated string: %s\n", name);
 }
