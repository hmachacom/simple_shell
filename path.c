#include "shell.h"
/**
 * searchPath - search Path
 *@path: patrh
 * Return: path.
 */
int searchPath(char path[1024])
{
	int comp = 0/*, lon = 0*/, recorer = 0/*, smaloc = 0*/;
/*char cpyen[1024],**tmp;*/
	char sharePtha[6];
	char *pt = "PATH=";
	int i;

	for (i = 0; i < 6; i++)
		sharePtha[i] = '\0';
	for (recorer = 0; environ[recorer]; recorer++)
	{
		strncpy(sharePtha, environ[recorer], 5);
		comp = strcmp(sharePtha, pt);
		if (comp == 0)
		{
			break;
		}
	}
	if ((strcmp(sharePtha, pt)) != 0)
		return (-1);
	strcpy(path, environ[recorer]);

	return (0);
}
