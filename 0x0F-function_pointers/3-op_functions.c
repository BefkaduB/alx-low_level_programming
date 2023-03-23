#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Returns the sum of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers
 * @a: the first number
 * @b: the sucond number
 * Return: differens
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers
 * @a: the first number
 * @b: the socund number
 * Return: THe product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return division
 * @a: first num
 * @b: sucond num
 * Return: Quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Return mode
 * @a: first number
 * @b: sucond number
 * Return: The remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
