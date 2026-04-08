#include <stdio.h>
#include <math.h>

int a, b;
char opp;

void calc()
{
    if (opp == '+')
    {
        printf("Sum: %d %c %d = %d\n", a, opp, b, a + b);
    }
    else if (opp == '-')
    {
        printf("Sub: %d %c %d = %d\n", a, opp, b, a - b);
    }
    else if (opp == '*')
    {
        printf("Mul: %d %c %d = %d\n", a, opp, b, a * b);
    }
    else if (opp == '/')
    {
        if (b > 0)
        {
            printf("Div: %d %c %d =  %.2f\n", a, opp, b, (float)a / b);
        }
        else
        {
            printf("Infinite");
        }
    }
    else if (opp == '^')
    {
        printf("Pow: %d %c %d = %.lf\n", a, opp, b, pow(a, b));
    }
    else
    {
        printf("Invalid opp");
    }
}

int main()
{
    printf("Cal: ");
    scanf("%d %c %d", &a, &opp, &b);
    calc();
    return 0;
}