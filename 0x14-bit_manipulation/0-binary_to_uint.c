#include "main.h"

/**
 * binary_to_uint - convert a string binary conatining 0 && 1 to unsigned int
 * @b: string binary.
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_number, j;

	if (!b || !*b)
		return (0);

	converted_number = j = 0;
	while (b[j])
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);
		else if (b[j] == '1')
		{
			converted_number <<= 1;
			converted_number += 1;
		}
		else
			converted_number <<= 1;
		j++;
	}
	return (converted_number);
}

