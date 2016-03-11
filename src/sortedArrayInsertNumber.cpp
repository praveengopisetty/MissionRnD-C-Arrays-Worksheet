/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int i,temp=0,n = 0;
	if (Arr == NULL || len <= 0)
	{
		return NULL;
	}
	if (num >= Arr[len - 1])
	{
		Arr[len] = num;
	}
	else
	{
		while (n == 0)
		{
			for (i = len-1; i >= 0; i--)
			{
				if (num < Arr[i])
				{
					Arr[i + 1] = Arr[i];
					Arr[i] = num;
				}
				if (Arr[i-1] <= num|| i==0)
				{
					n = 1;
					break;
				}
			}
		}
	}
	return Arr;
}