#include "head.h"

/**
 * s_duplicate - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: Returns the duplicated string.
 */
char *s_duplicate(const char *str)
{
	char *ptr;
	int i, len = 0;

	if (str == NULL)
	return (NULL);

	len = s_length(str);
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
	ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}

/**
 * s_compare - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Returns an integer less than, equal to, or greater than 0
 * if s1 is found, respectively, to be <, to match, or > s2.
*/
int s_compare(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * s_length - Calculates the length of a string.
 * @s: The string to measure.
 *
 * Return: Returns the length of the string.
 */
int s_length(const char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}

/**
 * s_concatenate - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Returns the concatenated string.
 */
char *s_concatenate(char *dest, const char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}

	while ((*p++ = *src++))
	{
	}

	return (dest);
}

/**
 * s_copy - Copies one string to another.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Returns the copied string.
 */
char *s_copy(char *dest, const char *src)
{
	int i = 0;

	while ((dest[i] = src[i]))
	{
		i++;
	}

	return (dest);
}
