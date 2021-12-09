#include "shell.h"
/**
 * main - simple shelle
 *@ac:num arguments
 *@av:arguments
 * Return: Always 0.
 */
int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *prompt = "# ", *buffer = NULL, tokens[1024][1024];
	char path[1024], dir[1024]/*, *ar = av[0]*/;
	const char *separador = " \t\n\"";
	size_t u = 0, p = 1;
	pid_t id = 0;
	int status = 0, i = 0;

	signal(SIGINT, ctrolmasc);
	while (1)
	{
		if ((int)p == -1)
			break;
		p = isatty(STDIN_FILENO);
		if (p == 1)
			write(STDOUT_FILENO, prompt, 2);
		initializerArry(tokens);
		p = getline(&buffer, &u, stdin);
		if (strcmp(buffer, "exit\n") == 0)
			break;
		/*if (strcmp(buffer, "env\n") == 0)
		{
			for (i = 0; environ[i]; i++)
			{
				write(STDOUT_FILENO, environ[i], strlen(environ[i]));
				write(STDOUT_FILENO, "\n", 2);
			}
			continue;
		}*/
		if ((int)p != -1)
		{
			if ((hijo(buffer, separador, tokens)) == 0)
			{
				if (tokens[0])
					status = shel2(path, tokens, dir, av[0], id);
			}
		}
	}
	free(buffer);
	return (status);
}
