#include "SelectSort.h"



SelectSort::SelectSort()
{
}


SelectSort::~SelectSort()
{
}
void SelectSort::sort(int array[], int length)
{
	for (int i = 0; i < length-1; i++)
	{
		int n = i;
		int key = array[i];
		for (int j = i + 1; j < length; j++)
		{
			if (array[j] < key)
			{
				key = array[j];
				n = j;
			}
		}
		array[n] = array[i];
		array[i] = key;
	}
}
