#include <math.h>
#include "holberton.h"
/**
 * modulus - returns the modulus
 * @c: the complex
 * Return: the modulus of complex
 */
double modulus(complex c)
{
	double module = sqrt(pow(c.re, 2) + pow(c.im, 2));

	return (module);
}
