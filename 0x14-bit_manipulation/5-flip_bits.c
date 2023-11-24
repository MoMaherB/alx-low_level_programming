/**
 * flip_bits - counts the number of bits needed to flip to convert one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int x = 1;
	int flip = 0;
	int size = sizeof(unsigned long int) * 8;

	while (i < size)
	{
		if ((n & x) != (m & x))
		{
			flip++;
		}

		x = x << 1;
		i++;
	}

	return (flip);
}
