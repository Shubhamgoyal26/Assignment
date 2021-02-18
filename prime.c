// Checking whether a number is prime or not using recursion
#include<stdio.h>
#include<stdbool.h>

int prime(int, int);

int main(void){ 
    int num;
    bool isPrime;

    printf("%s", "Enter a number: ");
    scanf("%d", &num);

    isPrime = prime(num, 2);

    if(isPrime){
        printf("%d is a prime number.\n", num);
    }
    else{
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

int prime(int num, int divisor){
    if(divisor * divisor >= num){                               // Recuring only till divisor is smaller than square root of number
        return 1;
    }
    if(num % divisor == 0){
        return 0;
    }
    return prime(num, divisor + 1);
}
