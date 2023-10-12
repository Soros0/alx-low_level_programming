#include "fuction_pointer.h"
#include <stdio.h>
/**
* array_interator - prints each array elem on a newl
* @array: array
* @size: how many elem to print
* @action: pointer to print in regular or hex
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsighted int i;

	if (array == NULL || action == NULL)
return;

	for (i = 0; i < size; i++)
{
    action(array[i]);
}
}