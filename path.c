#include "shell.h"
/**
 * searchPath - search Path
 *
 * Return: path.
 */
int searchPath(char **path)
{
	int comp = 0, lon = 0, recorer = 0,  smaloc = 0;
	char *cpyen, *tmp;
	char sharePtha[5];
	char *pt= "PATH=";
	int i;

	for (i = 0; i < 5; i++)
		sharePtha[i]= '\0';
	/*inicializar(path, 1024);*/
	if (!environ)
	{
		return (-1);
	}
	while (environ[recorer])
	{
		strncpy(sharePtha, environ[recorer], 5);
		comp = strcmp(sharePtha, pt);
		if (comp == 0)
		{
			break;
		}
		recorer++;
	}
	cpyen = environ[recorer];
	tmp = strtok(cpyen, "'=':");
	lon = strlen(tmp) + 1;
	path[smaloc] = malloc(sizeof(char) * lon);
	while (tmp)
	{
		strcpy(path[smaloc], tmp);
		smaloc++;
		tmp = strtok(NULL, ":");
		if (tmp)
		{
			lon = strlen(tmp);
			path[smaloc] = malloc(sizeof(char) * lon + 1);
		}
		
	}
	return (0);
}
