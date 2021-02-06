// Swapping 2 numbers using 2 variables

#include<stdio.h>

int main(void)
{ 
    int num1 = 0;
    int num2 = 0;
    
    printf("Enter two numbers to be swapped: ");
    scanf("%d %d", &num1, &num2);
    printf("Number 1 = %d\tNumber 2 = %d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping\n");
    printf("Number 1 = %d\tNumber 2 = %d", num1, num2);

    return 0;
}


