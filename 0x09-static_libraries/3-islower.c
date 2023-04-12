#include "main.h"

/**
 *
 * int _islower(int c) - Funtion for the Program
 *
 *
 * @c: Integer parameter
 */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
        {
                return (1);
        }
        return (0);
}
