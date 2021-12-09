#include "shell.h"

/**
 * _excev - execve example
 *@tokens:string dest
 *@dir:directory
 * Return: -1 in case of error.
 */
int _excev(char **tokens, char *dir)
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
	free(dir);
	/*ciclo para agragar todos los parametros y argumentos a ejecutar*/
	for (i = 1, j = 1; tokens[j]; i++, j++)
	{
		argv[i] = malloc(sizeof(char) * 1024);
		strcpy(argv[i], tokens[j]);
	}
	freespp(tokens);
	/*exceve va a la ruta para ejecutar el comando solicitado(token)*/
		if (execve(argv[0], argv, environ) == -1)
		{
			perror("Error");
			/*freespp(argv);*/
			/*freespp(tokens);*/
			free(dir);
			exit(127);
		}
/*	freespp(argv);*/
	/*freespp(tokens);*/
	return (-1);
}
