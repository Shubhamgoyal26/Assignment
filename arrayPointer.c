// Creating, inserting and printing a 3x3 array using only pointers

#include<stdio.h>

#define SIZE 3

int main(void){ 
    int arr[SIZE][SIZE] = {0};
    int diag_sum = 0;

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", (*(arr + i) + j));
            if(i == j){
                diag_sum += *(*(arr + i) + j);
            }
        }
    }

    printf("\n\n");

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    printf("\n\n");

    printf("Diagol sum of the matrix is %d", diag_sum);

    return 0;
}
