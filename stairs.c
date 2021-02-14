// Drawing stairs using binary

#include <stdio.h>

int main(void){
    int stairs;

    printf("%s", "Enter number of stairs you want: ");
    scanf("%d", &stairs);

    for(int i = 0; i < stairs; i++){
        for(int j = 0; j <= i; j++){
            printf("%s", "01");
        }
        printf("\n");
    }

 return 0;
}
