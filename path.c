#include "shell.h"
/**
 * searchPath - search Path
 *@path: patrh
 * Return: path.
 */
int searchPath(char **path)
{
	int comp = 0, lon = 0, recorer = 0, smaloc = 0;
	char *cpyen, *tmp;
	char sharePtha[6];
	char *pt = "PATH=";
	int i;

	for (i = 0; i < 6; i++)
		sharePtha[i] = '\0';
	if (!environ)
	{
		return (-1);
	}
	for (recorer = 0; environ[recorer]; recorer++)
	{
		strncpy(sharePtha, environ[recorer], 5);
		comp = strcmp(sharePtha, pt);
		if (comp == 0)
		{
			break;
		}
	}
	comp = strcmp(sharePtha, pt);
	cpyen = environ[recorer];
	tmp = strtok(cpyen, "'=':");

	while (tmp)
	{
		lon = strlen(tmp) + 1;
		path[smaloc] = malloc(sizeof(char) * lon);
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
