#include "shell.h"

/**
 * initializerArry - inicializer arry
 *@arr:string dest
 * Return: void.
 */

void initializerArry(char arr[1024][1024])
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		for (j = 0; j < 1024; j++)
			arr[i][j] = '\0';
	}
}
