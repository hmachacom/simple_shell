#include "shell.h"
/**
 * _strtock - simple shelle
 *@buffer:-buffer
 *@separador:-token
 * Return: string tokens.
 */
char *_strtock(char *buffer, const char *separador)
{
	char *token;

	token = strtok(buffer, separador);

	return (token);
}
