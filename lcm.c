// Finding LCM of two numbers
#include<stdio.h>

int lcm(int, int);
int gcd(int, int);

int main(void){ 
    int num1, num2;
    int ans;

    printf("%s", "Input first number: ");
    scanf("%d", &num1);
    printf("%s", "Input second number: ");
    scanf("%d", &num2);

    ans = lcm(num1, num2);

    printf("LCM of %d and %d = %d", num1, num2, ans);

    return 0;
}

// Using euclid's algorithm
int lcm(int num1, int num2){
    
    return (num1 / gcd(num1, num2)) * num2;
}

int gcd(int num1, int num2){
    if(num2 == 0){
        return num1;
    }

    return gcd(num2, num1 % num2);
}
