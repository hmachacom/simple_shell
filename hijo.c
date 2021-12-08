#include "shell.h"
/**
 * hijo - create a list of tokens
 *@buffer:-buffer
 *@separador:-token
 * Return: 0.
 */
int hijo(char *buffer, const char *separador, char **tokens)
{
	char *token = NULL;
	int cont = 0, lon = 0;

	if (!buffer || !separador || !tokens)
	{
		return (-1);
	}
	initializerArryPointer(tokens);
	/*printf("buff2 [%s]\n", buffer);*/
	token = _strtock(buffer, separador);
	while (token)
	{
		lon = strlen(token);
		lon++;
		tokens[cont] = malloc(sizeof(char) * lon);
		strcpy(tokens[cont], token);
		token = _strtock(NULL, separador);
		cont++;
		if (token)
		{
			lon = strlen(token);
			tokens[cont] = malloc(sizeof(char) * lon + 1);
		}
	}
	
	return (0);
}
