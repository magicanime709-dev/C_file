#include<stdio.h>

float a,b,c,d,e;

float calc(){
    return (a*e)+b;
}

int main(){
    printf("Rice per day(kg): ");
    scanf("%f", &e);
    printf("Rice cost(per kg): ");
    scanf("%f", &a);
    printf("Bazar cost(per day): ");
    scanf("%f", &b);
    printf("Electric + wifi bill(month): ");
    scanf("%f", &c);
    printf("Monthly rent: ");
    scanf("%f", &d);

    printf("Average cost per month: %.2f", calc()*30+c+d);
}