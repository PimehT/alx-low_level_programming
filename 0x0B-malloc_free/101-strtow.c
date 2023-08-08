#include "main.h"
#include <stdlib.h>

/**
 * c_count - counts the number of characters in each word
 * @s: string to check
 *
 * Return: number of characters
 */
int c_count(char *s)
{
	int flag = 0, c = 0, w = 0;

	while (s[c] != '\0')
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
		c++;
	}
	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to split 2-D string
 */
char **strtow(char *str)
{
	char **words, *word;
	int i, j = 0, len = 0, num_words = 0, c = 0, start, end;

	while (*(str + len))
		len++;
	num_words = c_count(str);
	if (num_words == 0)
		return (NULL);

	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				word = (char *)malloc((c + 1) * sizeof(char));
				if (word == NULL)
					return (NULL);
				while (start < end)
					*word++ = str[start++];
				*word = '\0';
				words[j] = word - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	words[j] = NULL;

	return (words);
}

