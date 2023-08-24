#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * @Return: If str1 < str2, the negative difference of the 1st unmatched xters
 * if str1 == str2, 0.
 * if str1 == str2, the positive of the first unmatched characters.
 *
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
