// Menu-driven program

#include <stdio.h>

int main(void){
    int choice;

    puts("--------------------------------------------------------");
    puts("Enter the corresponding choice from what you want to eat");
    puts("1. Pizaa, Rs 239\t\t2. Sandwhich, Rs 149");
    puts("3. French Fries, Rs 99\t\t4. Burger, Rs 129");
    puts("5. Pasta, Rs 179");
    puts("---------------------------------------------------------");
    scanf("%d", &choice);

    switch (choice){
    case 1:
        puts("Food item - Pizaa");
        puts("Price - Rs 179");
        break;
    case 2:
        puts("Food item - Sandwhich");
        puts("Price - Rs 149");
        break;
    case 3:
        puts("Food item - French Fries");
        puts("Price - Rs 99");
        break;
    case 4:
        puts("Food item - Burger");
        puts("Price - Rs 129");
        break;
    case 5:
        puts("Food item - Pasta");
        puts("Price - Rs 179");
        break;
    
    default:
        puts("Invalid choice");
        break;
    }

 return 0;
}
