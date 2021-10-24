#include "holberton.h"

/**
 * complex_from_mod_arg - returns the modulus
 * @m: the complex
 * @arg: the argument
 * @c3: the complex
 * Return: the modulus of complex
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
