#include<stdio.h>

int main(){
    // Length input
    int len; 
    printf("Array length: ");
    scanf("%d", &len);

    // Array input
    int arr[len];
    for(int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }
    // Array print 
    printf("Normal Array: ");
    for(int i=0; i<len; i++){
        printf("%d", arr[i]);
        if(i<len-1){
            printf(", ");
        }
    }

    int temp;
    // Arr reversing
    for(int i=0; i<len/2; i++){
        temp = arr[i];
        arr[i]= arr[len-1-i];
        arr[len-1-i]= temp;
    }

    // Arr reprinting
    printf("\nReversed Array: ");
    for(int i=0; i<len; i++){
        printf("%d", arr[i]);
        if(i<len-1){
            printf(", ");
        }
    }
}