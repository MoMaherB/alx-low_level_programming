/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *chptr = (unsigned char *)&value;

	/* If the first byte is non-zero, system is little endian */
	return (chptr != 0);
}
