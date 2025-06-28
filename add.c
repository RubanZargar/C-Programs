#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int c = a + b;
    printf("The sum is: %d", c);

    return 0;
}