#pragma once
#include "Sort.h"
class BubbleSort :
	public Sort
{
public:
	BubbleSort();
	~BubbleSort();
	void sort(int array[], int length);
};

