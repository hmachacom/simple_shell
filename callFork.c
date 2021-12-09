#include "shell.h"
/**
 * callfork - callfork
 *@path:num arguments
 *@dir:arguments
 *@tokens:tokens
 *@id:id
 * Return: Always 0.
 */
void callfork(char **path, char *dir, char **tokens, pid_t id)
{
	id = fork();
	if (id == 0)
	{
		freespp(path);
		_excev(tokens, dir);
	}
	else if (id > 0)
	{
		wait(NULL);
	}
	else
		exit(98);
}
