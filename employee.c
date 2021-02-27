//  Storing and displaying details of employees using structures

#include<stdio.h>

#define TOTAL_EMPLOYEES 20

struct employee{
    char name[20];
    int age;
    char phn_number[10];
    float salary;
};

typedef struct employee emp;

int main(void){ 
    emp employee[TOTAL_EMPLOYEES];

    // Input details
    for(int i = 0; i < TOTAL_EMPLOYEES; i++){
        printf("%s", "Enter Name: ");
        scanf("%s", employee[i].name);
        printf("%s", "Enter Age: ");
        scanf("%d", &employee[i].age);
        printf("%s", "Enter Phone number: ");
        scanf("%s", employee[i].phn_number);
        printf("%s", "Enter Salary: ");
        scanf("%.2f", &employee[i].salary);
    }
    
    printf("%s", "Name\tAge\tPhone Number\tSalary\n");

    // Output details
    for(int i = 0; i < TOTAL_EMPLOYEES; i++){
        printf("%s\t", employee[i].name);
        printf("%d\t", employee[i].age);
        printf("%s\t", employee[i].phn_number);
        printf("%f\t", employee[i].salary);
        printf("\n");
    }
    
    return 0;
}
