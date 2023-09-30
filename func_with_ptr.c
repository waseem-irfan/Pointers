// pointer as a function Argument - Call by reference
#include <stdio.h>

void Increment(int* a){
    *a = *a +1;
}
int main(void){
    int a;
    a = 10;
    Increment(&a); // Call by Reference
    printf("a = %d\n",a);
    return 0;
}