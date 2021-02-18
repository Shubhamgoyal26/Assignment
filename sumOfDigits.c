// Calculating sum of digits using recursion
#include<stdio.h>
#include<math.h>

int add(int);

int main(void){ 
    int num;
    int sum;

    printf("%s", "Input number: ");
    scanf("%d", &num);

    sum = add(num);

    printf("Sum of digits: %d", sum);

    return 0;
}

int add(int num){
    if(log10(num) < 1){
        return num;
    }
    return num % 10 + add(num / 10);
}
