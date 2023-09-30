#include <stdio.h>
int sumOfElements(int *A, int size){ // int* A or int A[] produces same result
    int sum = 0;
    for(int i = 0; i<size ; i++){
        sum += A[i];
    }
    return sum;
}
int main(void){
    int A[] = {4,6,7,8};
    int total = sumOfElements(A,sizeof(A)/sizeof(A[0]));
    printf("Sum is %d\n",total);

    return 0;
}