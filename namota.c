#include<stdio.h>

int n;

int main(){
    printf("Num: ");
    scanf("%d", &n);

    printf("Namota of %d:\n", n);
    for(int i=1; i<=n; i++){
        printf("%d\n", n*i);
    }
    return 0;
}