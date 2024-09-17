//Diego Espinoza
//CSC 341
//Lab 4
#include <stdio.h>
#include <stdlib.h>

//initialized and uninitialized global variables
int x;
int y = 15;

int main(int argc,char *argv[])
{
	//stack variable
	int s; 
	
	//heap variable
	int *h = (int *)malloc(sizeof(int)*5);

	printf("The address of argc is %p \n", &argc);

	printf("The address of stack variable s is %p \n",&s);

	printf("The address or heap variable h is %p \n", &h);

	printf("The address of uninitialized variable x is %p \n",&x);
	
	printf("The address of initialized variable y if %p \n",&y);

	return EXIT_SUCCESS;
}
