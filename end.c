#include "shell.h"
/**
 * end - end main
 *@tokens:tokens
 *@buffer:arguments
 *@path:path
 * Return: Always 0.
 */
void end(char **tokens, char *buffer, char **path)
{
	freespp(tokens);
	free(buffer);
	freespp(path);
}
