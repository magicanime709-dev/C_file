#include<stdio.h>

int main(){
    char type;
    int temp;

    printf("Enter type (C/F/K): ");
    scanf("%c", &type);

    printf("Enter temperature: ");
    scanf("%d", &temp);

    if(type == 'C' || type == 'c'){
        printf("Celcius: %d\n", temp);
        printf("Fahrenheit: %d\n", (temp * 9)/5 + 32);
        printf("Kelvin: %d\n", temp + 273);
    }
    else if(type == 'F' || type == 'f'){
        printf("Fahrenheit: %d\n", temp);
        printf("Celsius: %d\n", (temp - 32) * 5/9);
        printf("Kelvin: %d\n", (temp - 32) * 5/9 + 273);
    }
    else if(type == 'K' || type == 'k'){
        printf("Kelvin: %d\n", temp);
        printf("Celsius: %d\n", temp - 273);
        printf("Fahrenheit: %d\n", (temp - 273) * 9/5 + 32);
    }
    else{
        printf("Invalid input");
    }

    return 0;
}