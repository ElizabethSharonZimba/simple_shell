#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * append_command - Concatenates an input with paths in the global vari PATH
 * @dir_path: directory string to be appended with the command
 * @command: command to be concatenated with the directory
 * Return: Buffer to concatenated path, or NULL on failure
 */
char *append_command(char *dir_path, char *command)
{
	int a, b = 0, len1, len2;
	char *command_path = NULL;

	if (dir_path == NULL || command == NULL)
		return (NULL);
	len1 = strlen(dir_path);
	len2 = strlen(command);
	command_path = malloc(len1 + len2 + 2);

	if (command_path == NULL)
		return (NULL);

	for (a = 0; dir_path[a] != '\0'; a++)
	{
		command_path[a] = dir_path[a];

	}
	if (dir_path[a - 1] != '/')
	{
		command_path[a] = '/';
		a++;

	}
	while (command[b] != '\0')
	{
		command_path[a + b] = command[b];
		b++;

	}
	command_path[a + b] = '\0';
	return (command_path);
}
