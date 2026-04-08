#include<stdio.h>

int main(){
    // length
    int len;
    printf("Array length: ");
    scanf("%d", &len);
    
    int arr[len];
    // Array input
    printf("Input Array: \n");
    for(int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }

    // int len=sizeof(arr)/sizeof(arr[0]);

    // Main arr printing
    printf("Main arr: ");
    for(int i=0; i<len; i++){
        printf("%d", arr[i]);
        if(i<len-1){
            printf(", ");
        }
    }

    int temp;
    for(int i=0; i<len/2; i++){
        // Array reversing
        temp = arr[i];
        arr[i]=arr[len-1-i];
        arr[len-1-i]=temp;
    }

    // Array reprinting
    printf("\nReversed arr: ");
    for(int i=0; i<len; i++){
        printf("%d", arr[i]);
        if(i<len-1){
            printf(", ");
        }
    }

    return 0;
}