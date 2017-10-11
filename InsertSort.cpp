#include "InsertSort.h"



InsertSort::InsertSort()
{
}


InsertSort::~InsertSort()
{
}
void InsertSort::sort(int array[], int length)
{
	for (size_t i = 1; i < length; i++)
	{
		int key = array[i];
		int j = i - 1;
		while (j > -1 && array[j] > key)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
}
