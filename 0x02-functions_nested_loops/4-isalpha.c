#include "main.h"

/**
 * function that checks for alphabetic character.
 * 
 * Return always i if c and alhabet [a-z & A-Z] and 0 if not.
 * 
 * Using the ASCII format for testing of the code. A = 65, Z = 90 a = 97, and z = 122
 */
int _islower(int c)
{
if ( c >= 65 && c <= 90 && c >= 97 && c <= 122 )
{
return (1);
}
return (0);
}

