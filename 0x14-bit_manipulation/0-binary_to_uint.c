#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] < 48 || b[l] > 49)
			return (0);
		dec_val = 2 * dec_val + (b[l] - 48);
	}
	return (dec_val);
}
