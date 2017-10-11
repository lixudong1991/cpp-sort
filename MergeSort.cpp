#include "MergeSort.h"



MergeSort::MergeSort()
{
}


MergeSort::~MergeSort()
{
}
void MergeSort::sort(int array[], int length)
{
	int *arr = new int[length]();
	merge_sort(array, arr, 0, length);
	delete[] arr;
}
void MergeSort::merge_sort(int array0[], int array3[], int start, int len)
{
	if (len == 1)
		return;
	int p = start;
	int q = start+len / 2;
	int n = q;
	int m = start + len;
	if (len > 2) 
	{
		merge_sort(array0, array3, p,len/2);
		merge_sort(array0, array3, q, len -len/2);
	}
	int l = 0;
	while (p!= n &&q!=m)
	{
		if (array0[p] > array0[q])
		{
			array3[l++] = array0[p++];
		}
		else {
			array3[l++] = array0[q++];
		}
	}
	while (p != n) 
	{
		array3[l++] = array0[p++];
	}
	while (q !=m)
	{
		array3[l++] = array0[q++];
	}
	for (int i = start,j=0; i < m; i++,j++)
	{
		array0[i] = array3[j];
	}
}
