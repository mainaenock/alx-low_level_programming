#include "main.h"

/*
 * @brief Check if the character is an uppercase letter.
 *
 * Description: _isupper is the checker
 *
 * @param c The character to be checked.
 * @return 1 if the character is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
