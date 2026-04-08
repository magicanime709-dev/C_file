#include<stdio.h>

int n;

void even(){
    for(int i=1; i<=n; i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
}

void odd(){
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            printf("%d\n", i);
        }
    }
}

int main(){
    printf("Num: ");
    scanf("%d", &n);

    printf("Even: \n");
    even();

    printf("\nOdd: \n");
    odd();
    
    return 0;
}