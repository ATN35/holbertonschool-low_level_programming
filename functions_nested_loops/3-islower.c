/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 si c est en minuscule, 0 sinon
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
