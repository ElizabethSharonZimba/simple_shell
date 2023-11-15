#include "main.h"


/**
 * cmp_str - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: 0
 */
int cmp_str(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

/**
 * blt_verify - Verify if the input is a builtin
 * @arguments: Pointer to the array of arguments
 * @exit_stat: Current exit status
 * Return: -1 else 0
 */
int blt_verify(char **arguments, int exit_stat)
{
	char *builtins[] = {"exit", "env"};
	int i = 0;
	
	while (i < sizeof(builtins) / sizeof(builtins[0]))
	{
		if (cmp_str(arguments[0], builtins[i]) == 0)
			break;
		i++;
	}
	if (i == sizeof(builtins) / sizeof(builtins[0]))
		return (-1);
	
	if (cmp_str(builtins[i], "exit") == 0)
	{
		free(arguments[0]);
		exit(exit_stat);
	}
	if (cmp_str(builtins[i], "env") == 0)
	{
		if (environ == NULL)
			return (0);
		write(1, environ, 1000);
	}
	return (0);
}
