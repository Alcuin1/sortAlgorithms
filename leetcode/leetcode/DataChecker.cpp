#include "DataChecker.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "ShellSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "string.h"
void DataChecker::check()
{
	bool same = true;
	for (int m = 0; m <= 1000; m++)
	{
		int arr1[100];
		int arr2[100];
		srand(time(NULL));
		for (int i = 0; i < 100; i++)
		{
			arr1[i] = rand();
			arr2[i] = arr1[i];
		}
		sort(arr1, arr1 + 100);//ascend default
		//1.Ñ¡ÔñÅÅÐò--------------------
		SelectionSort test;
		test.sort(arr2, 100);
		//2.Ã°ÅÝÅÅÐò--------------------
		//BubbleSort test;
		//test.sort(arr2, 100);
		//3.²åÈëÅÅÐò--------------------
		//InsertionSort test;
		//test.sort(arr2, 100);
		//4.Ï£¶ûÅÅÐò--------------------
		//ShellSort test;
		//test.sort(arr2, 100);
		//5.¹é²¢ÅÅÐò--------------------
		//MergeSort test;
		//test.sort(arr2, 0, sizeof(arr2) / sizeof(arr2[0])-1);
		//6.¿ìËÙÅÅÐò
		//QuickSort test;
		//test.sort(arr2,0,sizeof(arr2)/sizeof(arr2[0])-1);
		//7.¶ÑÅÅÐò
		//HeapSort test;
		//test.sort(arr2,sizeof(arr2) / sizeof(arr2[0]));

		int i = 0;
		for (i = 0; i < 100; i++)
		{
			if (arr1[i] != arr2[i])
			{
				same = false;
				cout << i << endl;
				break;
			}
		}
		if (i != 100)
			break;
		cout << "µÚ" << m << "´ÎÊµÑé" << endl;
	}
	string res = same ? "right":"wrong";
	cout << res << endl;
}