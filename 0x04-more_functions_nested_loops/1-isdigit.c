@@ -1,18 +1,12 @@
#include "main.h"

/**
 * _isdigit - Entry point
 *  @c: input
 *
 * Return: 1 or 0
 */
 * _isdigit - checks for a digit (0 through 9).
 *  @c: input that is going to be checked
 * Return: 1 if @c is a digit, otherwise 0
**/

int _isdigit(int c)
{
if ((c <= 57) && (c >= 48))
{
return (1);
}
else
{
return (0);
}
	return (c >= '0' && c <= '9');
}
