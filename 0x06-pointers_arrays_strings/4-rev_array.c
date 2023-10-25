#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - function
 * @a: pointer to the string
 * @n: number of elements of the string
 *
 * Description: reversing a string
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, l;


	for (i = 0; i <= n / 2; i++)
	{
		l = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = l;
	}

}

