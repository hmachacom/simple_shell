#include "shell.h"
/**
 * main - simple shelle
 *@ac:num arguments
 *@av:arguments
 * Return: Always 0.
 */
int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *prompt = "# ", *buffer = NULL;
	const char *separador = " \t\n\"";
	char *tokens[1024];
	char *path[1024];
	char *dir = NULL;
	size_t u = 0, p = 1;
	pid_t id = 0;
	/*int i = 0;*/

	initializerArryPointer(path);
	initializerArryPointer(tokens);
	while (1)
	{
		if ((int)p == -1)
		{

			break;
		}
			p = isatty(STDIN_FILENO);
			if (p == 1)
			{
				write(STDOUT_FILENO, prompt, 2);
			}
			p = getline(&buffer, &u, stdin);
			if ((int)p != -1)
			{
				if ((hijo(buffer, separador, tokens)) == 0)
				{
					if (tokens[0])
					{
						searchPath(path);
						if (!(dir = searchDir(path, tokens)))
						{
							perror(tokens[0]);
						}
						else
						{
							id = fork();
							if (id == 0)
							{
								freespp(path);
								_excev(tokens, dir);
							}
							else if (id > 0)
							{
								wait(NULL);
							}
							else
								exit(98);
						}
					}
				}
			}

	}
		write(STDOUT_FILENO, "\n", 1);
			freespp(tokens);
			free(buffer);
		freespp(path);
		free(dir);
	return (0);
}
