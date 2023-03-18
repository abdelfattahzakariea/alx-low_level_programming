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
	fputs("and that piece of art is useful\" - Dora Kor
par, 2015-10-19\n", stdout);

	return (1);
}
