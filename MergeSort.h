#pragma once
#include "Sort.h"
class MergeSort :
	public Sort
{
public:
	MergeSort();
	~MergeSort();
	void sort(int array[], int length);
private:
	void merge_sort(int array[],int array3[],int start,int len);
};

