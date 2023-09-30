#include <stdio.h>

int main(void){
    int A[] = {3,5,7,9};
    int* p = A;
    // p++; //Valid
    // A++; //Invalid

    
    // printf("Address: %d\n",A);
    // printf("Address: %d\n",&A[0]);
    // printf("Value: %d\n",A[0]);
    // printf("Value: %d\n",*A);
    for(int i=0 ; i<4; i++){
        printf("Address: %d\n",A+i);
        printf("Address: %d\n",&A[i]);
        printf("Value: %d\n",A[i]);
        printf("Value: %d\n",*(A+i));

    }
    return 0;
}