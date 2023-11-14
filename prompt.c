#include <unistd.h>

/**
 * _prompt - Prints the prompt to the standard input
 * @prompt: Pointer to the string to be printed
 * @size: Length of the prompt
 * Return: 0 if success or -1 if fails
 */
int _prompt(const char *prompt, unsigned int size)
{
	int written;

	if (isatty(STDIN_FILENO))
	{
		written = write(STDOUT_FILENO, prompt, size);
		if (written == -1)
			return (-1);
	}
	return (0);
}
