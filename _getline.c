#include "shell.h"
/**
 * _getline - simple shelle
 *@buffer:buffer
 *@u:pointer num
 * Return: Always 0.
 */
size_t _getline(char **buffer, size_t *u)
{
	return (getline(buffer, u, stdin));
}
