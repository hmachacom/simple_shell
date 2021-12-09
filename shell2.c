#include "shell.h"
/**
 * shel2 - simple shelle continue
 *@path:num arguments
 *@tok: tokss
 *@av:arguments
 *@di:dir
 *@id: id process
 * Return: Always 0.
 */
int shel2(char *path, char tok[10254][1024], char *di, char *av, pid_t id)
{
	int status = 0;

	if ((searchPath(path)) == 0)
	{
		if ((searchDir(path, tok, di)) == -1)
		{
			write(STDOUT_FILENO, av, 6);
			write(STDOUT_FILENO, " :", 4);
			perror(tok[0]);
			return (127);
		}
		else
		{
			status = callfork(di, tok, id);
		}
	}
	return (status);
}
