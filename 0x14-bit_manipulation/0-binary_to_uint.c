/**
 * binary_to_uint - convert binary string to int
 * @b: binary string
 *
 * Return: int (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nb;
	unsigned int i;

	for (nb = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			nb = (nb << 1) | 1;
		else if (b[i] == '0')
			nb <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (nb);
}
