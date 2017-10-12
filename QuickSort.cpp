#include "QuickSort.h"



QuickSort::QuickSort()
{
}


QuickSort::~QuickSort()
{
}
void QuickSort::sort(int array[], int length)
{
	partition(array, 0, length - 1);
}
void QuickSort::partition(int arr[], int start, int end)
{
	if (start >= end)
	{
		return;
	}
	int index = start - 1;
	int key = arr[end];
	for (int i = start; i < end; i++)
	{
		if (arr[i] <= key) 
		{
			if (++index != i) 
			{
				int tem = arr[i];
				arr[i] = arr[index];
				arr[index] = tem;
			}			
		}
	}
	arr[end] = arr[++index];
	arr[index] = key;
	partition(arr, start, index - 1);
	partition(arr, index + 1, end);
}