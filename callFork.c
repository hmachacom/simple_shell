#include "shell.h"
/**
 * callfork - callfork
 *@dir:arguments
 *@tokens:tokens
 *@id:id
 * Return: Always 0.
 */
void callfork(char *dir, char tokens[1024][1024], pid_t id)
{
	id = fork();
	if (id == 0)
	{
		_excev(tokens, dir);
	}
	else if (id > 0)
	{
		wait(NULL);
	}
	else
		exit(98);
}
