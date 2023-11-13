#include "main.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: main string searched
 * @needle: substring searched
 *
 * Return: pointer to the beginning of the substring location
 * On failure, return NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}

			if (needle[j] == '\0')
				return (haystack + i);
		}
	}

	return ('\0');
}

