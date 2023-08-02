#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
#include "main.h"


int actual_sqrt_recursion(int n, int i);


/**

 * _sqrt_recursion - returns the natural square root of a number

  * @n: number to calculate the square root of

   *

    * Return: the resulting square root

     */

     int _sqrt_recursion(int n)

     {

             if (n < 0)

                             return (-1);

                                     return (actual_sqrt_recursion(n, 0));

                                     }