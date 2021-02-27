// Displaying contents of a file in reverse order

#include<stdio.h>

int main(void){
    FILE *fp1;
    FILE *fp2;
    char ch;
    int count = 0;
    int offset = 0;

    fp1 = fopen("Text.txt", "r");
    fp2 = fopen("ReverseText.txt", "w");

    while(getc(fp1) != EOF){                        // Counting total number of characters in a file
        count++;
    }
    
    while(offset != -count){                        // Running loop till offset reaches the start of the file
        fseek(fp1, --offset, SEEK_END);             // Moving cursor to the required character from the end of the file
        ch = getc(fp1);
        fprintf(fp2,"%c",ch);
    }

    fclose(fp1);
    fclose(fp2); 

    return 0;
}
