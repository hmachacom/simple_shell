#include "shell.h"

/**
 * freespp - free pointer
 *@_freess:string dest
 * Return: void.
 */
void freespp(char **freess)
{
	int i = 0;

	if (freess)
	{
		for (i = 0; freess[i]; i++)
		{
			free(freess[i]);
		}
	}

}
