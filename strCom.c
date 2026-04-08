#include<stdio.h>
#include<string.h>

int main(){
    char str1[100], str2[100];
    printf("Enter str1: ");
    scanf("%s", str1);
    printf("Enter str2: ");
    scanf("%s", str2);

    int value = strcmp(str1, str2);
    if(value==0){
        printf("%s and %s are equal", str1, str2);
    }
    else if(value>0){
        printf("%s is greater than %s", str1, str2);
    }
    else if(value<0){
        printf("%s is less than %s", str1, str2);
    }
}