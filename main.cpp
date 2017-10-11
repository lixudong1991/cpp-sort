#include<iostream>
#include"Sort.h"
#include"InsertSort.h"	
#include"BubbleSort.h"
#include"SelectSort.h"
#include"MergeSort.h"
using namespace std;
#define ARRLEN 10
int main()
{
	//Sort* sort = new InsertSort();
	//Sort *sort = new BubbleSort();
	//Sort *sort = new SelectSort();
	Sort *sort = new MergeSort();
	int arr[ARRLEN] = {5,8,4,1,2,7,3,9,6,0};
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