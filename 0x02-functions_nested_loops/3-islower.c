#include "main.h"
/**
 * _islower - entry point
 * @c: contains value to be compared
 * Return: nothing if success
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
{
return (1);
}

else
{
return (0);
}

}
