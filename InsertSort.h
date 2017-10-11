#pragma once
#include "Sort.h"
class InsertSort :
	public Sort
{
public:
	InsertSort();
	~InsertSort();
	void sort(int array[], int length);
};

