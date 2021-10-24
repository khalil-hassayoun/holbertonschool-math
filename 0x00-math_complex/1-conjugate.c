#include "holberton.h"

/**
 * conjugate - conjugate given complex
 * @c: structure
 * Return: c
 */
complex conjugate(complex c)
{
	c.im *= -1;
	return (c);
}
