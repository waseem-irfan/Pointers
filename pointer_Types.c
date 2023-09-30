#include <stdio.h>

int main(void){
    int a = 1033;
    int *p = &a;
    printf("Size of integer = %d\n",sizeof(int));
    printf("Address = %d and Value = %d\n",p,*p);
    char *p0 =(char*) p;
    printf("Size of character = %d\n",sizeof(int));
    printf("Address = %d and Value = %d\n",p0,*p0);
    return 0;
}