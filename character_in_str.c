#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered: %s", str);

    // printf("\nString length: %lu", strlen(str));
    int len=0;
    // '\0' is null
    while(str[len] != '\0'){
        len++;
    }
    printf("\nString length: %d", len);
}