#include "shell.h"

/**
 * freespp - free pointer
 *@_freess:string dest
 * Return: void.
 */

void initializerArryPointer(char **pointer)
{
	int i;

	for (i = 0; i < 1024; i++)
		pointer[i] = NULL;
}
