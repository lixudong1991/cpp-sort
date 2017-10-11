#include "BubbleSort.h"



BubbleSort::BubbleSort()
{
}


BubbleSort::~BubbleSort()
{
}
void BubbleSort::sort(int array[], int length)
{
	for (int j = length - 1; j > 0; j--)
	{
		for (size_t i = 0; i < j; i++)
		{
			if (array[i] > array[i + 1])
			{
				int tem = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tem;
			}
		}
	}
}
