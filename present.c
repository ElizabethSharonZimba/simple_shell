#include "main.h"
/**
 * present - Verify if a file present
 * @pathname: path to the file
 * Return: 0 if the file present or -1 if not
 */
int present(char *pathname)
{
	int present_stat;

	present_stat = (open(pathname, O_RDONLY));
	if (present_stat != -1)
	{
		close(present_stat);
		return (0);
	}
	else
		return (-1);
}
