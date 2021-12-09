#include "shell.h"
/**
 * callfork - callfork
 *@dir:arguments
 *@tokens:tokens
 *@id:id
 * Return: Always 0.
 */
int callfork(char *dir, char tokens[1024][1024], pid_t id)
{
	int status = 0;

	id = fork();
	if (id == 0)
	{
		_excev(tokens, dir);
	}
	else if (id > 0)
	{
		wait(&status);
		return(WEXITSTATUS(status));
	}
	else
	{
		exit(-1);
	}
	return (0);
}
/**
 * ctrol - command ctrl+c
 * @number: flag signal
 */
void ctrolmasc(int charter __attribute__((unused)))
{
	char *prompt = "\n# ";
	signal(SIGINT, ctrolmasc);
	write(STDOUT_FILENO, prompt, 4);
	fflush(stdout);
}
