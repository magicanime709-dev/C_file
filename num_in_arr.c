#include<stdio.h>

int main(){
    int arr[]={1,2,4,5,6,77,8,66,75,4,6,334,34,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    int key;
    printf("Enter a key: ");
    scanf("%d", &key);

    // Key finding
    int i;
    for(i=0; i<len; i++){
        if(arr[i]==key){
            printf("key %d is found in the arr", key);
            break;
        }
    }
    if(i==len){
        printf("Key %d is not found in the arr", key);
    }
}