#include <stdio.h>
#include <unistd.h>
/**
 * main - printing without printf and puts
 *
<<<<<<< HEAD
 *Return: always (1)
=======
 * Return: always (1)
>>>>>>> a37b31c3fe1c204b64d5a730f8179847db4c6fb8
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
