#include <unistd.h>


/**
 * _putcar - writes the character c to stdout
 * @c : The character to print 
 * Return:0n success 1.
 * 0n error, -1 is returnd, and errno is set appropriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
			
