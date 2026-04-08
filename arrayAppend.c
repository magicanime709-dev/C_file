#include<stdio.h>

int main(){
    // Array length
    int n;
    printf("Array length: ");
    scanf("%d", &n);

    int arr[n];
    // Input
    printf("Put num in array: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // Output
    printf("You entered: ");
    for(int i=0; i<n; i++){
        printf("%d, ", arr[i]);
    }
}