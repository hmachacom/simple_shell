#include "shell.h"

/**
 * _excev - execve example
 *@tokens:string dest
 *@dir:directory
 * Return: -1 in case of error.
 */
int _excev(char tokens[1024][1024], char *dir)
{
	int i = 0, j = 0;
	char *argv[1024];

	initializerArryPointer(argv);
	if (!dir || !tokens)
	{
		perror(tokens[0]);
		exit(127);
	}
	argv[0] = malloc(sizeof(char) * 1024);
	strcpy(argv[0], dir);
	/*ciclo para agragar todos los parametros y argumentos a ejecutar*/
	for (i = 1, j = 0; tokens[i][j]; i++, j++)
	{
		argv[i] = malloc(sizeof(char) * 1024);
		strcpy(argv[i], tokens[i]);
	}

	/*exceve va a la ruta para ejecutar el comando solicitado(token)*/
		if (execve(argv[0], argv, environ) == -1)
		{
			perror("Error");
			exit(2);
		}
	return (-1);
}
