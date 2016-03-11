/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	if (Arr == NULL || len <= 0)
	{
		return NULL;
	}
	int i, j, temp1 = 0, temp2 = 0, count = 0, count1 = 0;
	if (Arr[0] > Arr[len - 1])
	{
		temp1 = Arr[0];
		Arr[0] = Arr[len - 1];
		Arr[len - 1] = temp1;
	}
	else
	{
		for (i = 1, j = len - 2; i != j; i++, j--)
		{
			if (count == 0)
			{
				if (Arr[i + 1] < Arr[i])
				{
					temp1 = i;
					count = 1;
				}
			}
			if (count1 == 0)
			{
				if (Arr[j - 1] >= Arr[j])
				{
					temp2 = j;
					count1 = 1;
				}
			}
		}
		i = Arr[temp1];
		Arr[temp1] = Arr[temp2];
		Arr[temp2] = i;
	}
}