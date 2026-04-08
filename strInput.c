#include<stdio.h>

int main(){
    char str[1000];
    printf("Enter a string: ");
    scanf("%s", str);
    // Only prints word before space <That's_one_way_to_do_it!>
    printf("You entered: ");
    printf("%s", str);
}