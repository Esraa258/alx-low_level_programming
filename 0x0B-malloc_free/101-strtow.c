#include "main.h"

int word_len(char *s);
int count_words(char *s);
char **strtow(char *s);

/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @s: The string to be searched.
 *
 * Return: i marking the end of the initial word pointed to by s.
 */
int word_len(char *s)
{
	int i = 0, len = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @s: The string to be searched.
 *
 * Return: The number of words contained within s.
 */
int count_words(char *s)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(s + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(s + i) != ' ')
		{
			words++;
			i += word_len(s + i);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @s: The string to be split.
 *
 * Return: If s = NULL, s = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *s)
{
	char **strings;
	int i = 0, words, w, letters, l;

	if (s == NULL || s[0] == '\0')
		return (NULL);

	words = count_words(s);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (s[i] == ' ')
			i++;

		letters = word_len(s + i);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = s[i++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
