#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print a qoute using write function
 * ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: 1 (error).
*/

int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19", stdout);

	return (1);
}
