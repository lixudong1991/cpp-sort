#pragma once
#include "Sort.h"
class QuickSort :
	public Sort
{
public:
	QuickSort();
	~QuickSort();
	void sort(int array[], int length);
private:
	void partition(int arr[],int start,int end);
};

