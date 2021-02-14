// Grading marks

#include <stdio.h>

int main(void){
    int marks;

    printf("%s", "Enter number of marks you obtained: ");
    scanf("%d", &marks);

    if(marks < 40){
        puts("Grade F");
    }
    else if(marks < 55){
        puts("Grade D");
    }
    else if(marks < 70){
        puts("Grade C");
    }
    else if(marks < 85){
        puts("Grade B");
    }
    else if(marks < 100){
        puts("Grade A");
    }

 return 0;
}
