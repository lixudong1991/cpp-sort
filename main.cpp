#include<iostream>
#include"Sort.h"
#include"InsertSort.h"	
#include"BubbleSort.h"
using namespace std;

int main()
{
	//Sort* sort = new InsertSort();
	Sort *sort = new BubbleSort();
	int arr[10] = {5,8,4,1,2,7,3,9,6,0};
	for (int i : arr) 
	{
		cout << i<<"\40";
	}
	cout << endl;
	sort->sort(arr, 10);
	for (int i : arr)
	{
		cout << i << "\40";
	}

	delete sort;
	cin.get();
}