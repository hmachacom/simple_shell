#include "shell.h"
/**
 * searchDir - search Dir
 *@path:-path
 *@tokens:-token
 * Return: execution path.
 */
char *searchDir(char **path, char **tokens)
{
	int iterador = 0, j = 0;
	char *dir = malloc(sizeof(char) * 1024);
	struct stat st;

	if (!path || !tokens)
	{
		free(dir);
		return (NULL);
	}
	for (iterador = 0; path[iterador]; iterador++)
	{
		strcpy(dir, path[iterador]);
		for (j = 0; tokens[j]; j++)
		{
			strcat(dir, "/");
			strcat(dir, tokens[0]);
			if (stat(dir, &st) == 0)
				return (dir);
		}
	}
	free(dir);
	dir = malloc(sizeof(char) * 1024);
	strcpy(dir, tokens[0]);
	/*
	*cree una copia de tokens en
	*la posicion 0 para evaluar con el if si el comando se podia ejecutar
	*/
	if (stat(dir, &st) == 0)
	{
		return (dir);
		/*exceve va a la ruta para ejecutar el comando solicitado(token)*/
	}
	free(dir);
	/*freespp(path);*/
	return (NULL);
}
