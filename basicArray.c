#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,10,100};
    // To find the lenth of arr 
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<len; i++){
        printf("%d\n", arr[i]);
    }
    
    printf("\nArray length: %d", len);

    return 0;
}