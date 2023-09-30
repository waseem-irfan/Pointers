#include <stdio.h>

int main(void){
    int a = 1033;
    int *p = &a;
    printf("Size of integer = %d\n",sizeof(int));
    printf("Address = %d and Value = %d\n",p,*p);
    printf("Address = %d and Value = %d\n",p+1,*(p+1));
    char *p0 =(char*) p; // Type Casting
    printf("Size of character = %d\n",sizeof(char));
    printf("Address = %d and Value = %d\n",p0,*p0);
    printf("Address = %d and Value = %d\n",p0+1,*(p0+1));
    // void *p; // Generic pointer
    return 0;
}