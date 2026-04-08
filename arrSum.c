#include<stdio.h>

int main(){
    int arr[]= {1,2,3,4,5,6,6,7,5};
    int sum=0;

    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<len; i++){
        sum = sum + arr[i];
    }
    printf("Sum of Array: %d", sum);
}