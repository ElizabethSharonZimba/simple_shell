#include "main.h"

/**
 * length_str - Sizes the length of a string
 * @string: String to be sized
 * Return: The length of the string
 */
int length_str(const char *string)
{
	int length = 0;

	if (string == NULL)
		return (0);
	while (string[length] != '\0')
		length++;
	return (length);
}
