//C program to read a file and display file contents character by character using fgetc() 
#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE * f;
    char ch;


    f = fopen("P1.CPP", "r");


    if(f == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully. Reading file contents character by character. \n\n");

    do 
    {
        ch = fgetc(f);

        putchar(ch);

    } while(ch != EOF); 

    fclose(f);

    return 0;
}
