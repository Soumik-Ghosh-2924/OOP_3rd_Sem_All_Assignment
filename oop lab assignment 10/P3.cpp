#include <stdio.h>
#include <stdlib.h> 

int main()
{
	FILE *fptr1, *fptr2;
	char filename[100], c;

	

	fptr1 = fopen("P2.cpp", "r");
	if (fptr1 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}


	fptr2 = fopen("P3.cpp", "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	
	while ((c = fgetc(fptr1)) != EOF)
	{
		fprintf(fptr2,"%c",c);
		
	}

	printf("\nContents copied");

	fclose(fptr1);
	fclose(fptr2);
	return 0;
}

