#include "holberton.h"

/**
 * argument - returns the modulus
 * @c: the complex
 * Return: the modulus of complex
 */

double argument(complex c)
{
	double argus;

	argus = atan(c.im / c.re);
	return (argus);
}
