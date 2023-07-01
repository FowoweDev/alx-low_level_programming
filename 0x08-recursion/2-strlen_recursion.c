#include "main.h"
/**
 * _strlen_recursion - This command will returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The string lenght
 */
int _strlen_recursion(char *s)
{
	int extend = 0;

	if (*s)
	{
		extend++;
		extend += _strlen_recursion(s + 1);
	}

	return (extend);
}

