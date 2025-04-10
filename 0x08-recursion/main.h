#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
int actual_sqrt_function(int min, int max, int number);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int actual_is_prime_number(int n, int counter, int counter_limit);
int actual_is_palindrome(char *start, char *end);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
#endif
