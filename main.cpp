#include<iostream>
#include"Sort.h"
#include"InsertSort.h"	
#include"BubbleSort.h"
#include"SelectSort.h"
#include"MergeSort.h"
#include"QuickSort.h"
using namespace std;
#define ARRLEN 11
int main()
{
	//Sort* sort = new InsertSort();
	//Sort *sort = new BubbleSort();
	//Sort *sort = new SelectSort();
	//Sort *sort = new MergeSort();
	Sort *sort = new QuickSort();
	int arr[ARRLEN] = {5,8,4,1,10,2,7,3,9,6,0};
	for (int i : arr) 
	{
		cout << i<<"\40";
	}
	cout << endl;
	sort->sort(arr, ARRLEN);
	for (int i : arr)
	{
		cout << i << "\40";
	}

	delete sort;
	cin.get();
}