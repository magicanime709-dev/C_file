#include<stdio.h>

int n;

int even_sum(){
    int sum = 0;
    for(int i=0; i<=n; i++){
        if(i%2 == 0){
            sum += i;
        }
    }
    return sum;
}

int odd_sum(){
    int sum = 0;
    for(int i=0; i<=n; i++){
        if(i%2 != 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    printf("Num: ");
    scanf("%d", &n);

    int even = even_sum();
    int odd = odd_sum();

    printf("\nSum of even: %d", even);
    printf("\nSum of odd: %d", odd);

    even > odd? printf("\nSum of even is greater"): printf("\nSum of odd is greater");

    return 0;
}