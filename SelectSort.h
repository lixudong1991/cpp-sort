#pragma once
#include "Sort.h"
class SelectSort :
	public Sort
{
public:
	SelectSort();
	~SelectSort();
	void sort(int array[], int length);
};

