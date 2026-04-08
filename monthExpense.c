#include <stdio.h>
#include <string.h>

int a,b,c;
char mnt[10];

int sum(){
    return a+b+c;
}

void month() {
    int total = 0;

    if(strcmp(mnt, "jan") == 0 || strcmp(mnt, "Jan") == 0) total = sum() * 31;
    else if(strcmp(mnt, "feb") == 0 || strcmp(mnt, "Feb") == 0) total = sum() * 28;
    else if(strcmp(mnt, "mar") == 0 || strcmp(mnt, "Mar") == 0) total = sum() * 31;
    else if(strcmp(mnt, "apr") == 0 || strcmp(mnt, "Apr") == 0) total = sum() * 30;
    else if(strcmp(mnt, "may") == 0 || strcmp(mnt, "May") == 0) total = sum() * 31;
    else if(strcmp(mnt, "jun") == 0 || strcmp(mnt, "Jun") == 0) total = sum() * 30;
    else if(strcmp(mnt, "jul") == 0 || strcmp(mnt, "Jul") == 0) total = sum() * 31;
    else if(strcmp(mnt, "aug") == 0 || strcmp(mnt, "Aug") == 0) total = sum() * 31;
    else if(strcmp(mnt, "sep") == 0 || strcmp(mnt, "Sep") == 0) total = sum() * 30;
    else if(strcmp(mnt, "oct") == 0 || strcmp(mnt, "Oct") == 0) total = sum() * 31;
    else if(strcmp(mnt, "nov") == 0 || strcmp(mnt, "Nov") == 0) total = sum() * 30;
    else if(strcmp(mnt, "dec") == 0 || strcmp(mnt, "Dec") == 0) total = sum() * 31;

    printf("\nCost in %s is %d\n", mnt, total);
}


int main(){
    printf("Breakfast (taka): ");
    scanf("%d", &a);
    printf("Lunch (taka): ");
    scanf("%d", &b);
    printf("Dinner (taka): ");
    scanf("%d", &c);
    printf("Month (3C): ");
    scanf("%s", &mnt);

    month();
    printf("Average cost per month: %d", sum()*30);
}