#include <stdio.h>

int main(void){
    char *array[] = {"teste1", "teste2"};
	printf("Array[0]: %p\n", array);
	printf("Array[1]: %p\n", &array[1]);
    return 0;

}
