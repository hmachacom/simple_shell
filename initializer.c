#include "shell.h"

/**
 * initializerArryPointer - free pointer
 *@pointer:string dest
 * Return: void.
 */

void initializerArryPointer(char **pointer)
{
	int i;

	for (i = 0; i < 1024; i++)
		pointer[i] = NULL;
}
