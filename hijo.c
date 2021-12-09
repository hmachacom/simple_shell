#include "shell.h"
/**
 * hijo - create a list of tokens
 *@buffer:-buffer
 *@separador:-token
 *@tokens:toke
 * Return: 0.
 */
int hijo(char *buffer, const char *separador, char tokens[1024][1024])
{
	char *token = NULL;
	int cont = 0/*, lon = 0*/;

	if (!buffer || !separador || !tokens)
	{
		return (-1);
	}
	token = _strtock(buffer, separador);
	if (!token)
		return (-1);
	while (token)
	{
		strcpy(tokens[cont], token);
		token = _strtock(NULL, separador);
		cont++;
	}
	return (0);
}
