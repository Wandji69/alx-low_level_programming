#include "main.h"

/**
 * function that checks for lowercase character.
 * 
 * Return always i if c is lowercase and 0 if not.
 * 
 * Using the ASCII format for testing of the code. a = 97 and z = 122
 */
int _islower(int c)
{
if ( c >= 97 && c <= 122 )
{
return (1);
}
return (0);
}
