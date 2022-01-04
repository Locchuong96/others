#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	FILE *fptr; // FILE is a builtin class
	fptr = fopen("file1.txt","w"); // it will create a file if you don't have it
	
	if (fptr == NULL) // if there is no file
	{
		printf("ERROR!");
		exit(1);
	}

	printf("Enter num:");
	scanf("%d",&num);
	fprintf(fptr,"%d",num);
	fclose(fptr);		
}
