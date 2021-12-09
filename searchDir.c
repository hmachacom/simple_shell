#include "shell.h"
/**
 * searchDir - search Dir
 *@path:-path
 *@tokens:-token
 *@dir:dirss
 * Return: execution path.
 */
int searchDir(char path[1024], char tokens[10241][1024], char dir[1024])
{
	int iterador = 0, j = 0, i, l;
	char pathtok[1024][1024];
	struct stat st;

	if (!path || !tokens)
	{
		return (-1);
	}
	initializerArry(pathtok);
	hijo(path, "=:", pathtok);
	if (strcmp(pathtok[0], "PATH="))
	{
		for (iterador = 0, i = 0; pathtok[iterador][i]; i++, iterador++)
		{
			strcpy(dir, pathtok[iterador]);
			for (j = 0, l = 0; tokens[j][l]; l++, j++)
			{
				strcat(dir, "/");
				strcat(dir, tokens[0]);
				if (stat(dir, &st) == 0)
					return (0);
			}
		}
		strcpy(dir, tokens[0]);
		/*
	*cree una copia de tokens en
	*la posicion 0 para evaluar con el if si el comando se podia ejecutar
	*/
		if (stat(dir, &st) == 0)
		{
			return (0);
			/*exceve va a la ruta para ejecutar el comando solicitado(token)*/
		}
	}
	return (-1);
}
