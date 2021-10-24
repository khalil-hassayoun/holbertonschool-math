#include "holberton.h"

/**
 * multiplication - returns the modulus
 * @c1: the complex
 * @c2: the complex 2
 * @c3: the complex 3
 * Return: the modulus of complex
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
