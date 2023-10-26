#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: String containing the binary number
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int pnt_val = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		pnt_val = 2 * pnt_val + (b[n] - '0');
	}

	return (pnt_val);
}
