#include "SelectionSort.h"
SelectionSort::SelectionSort()
{
}
SelectionSort::SelectionSort(int nums[], int size)
{
	//最初打印
	cout << "排序前" << endl;
	print(nums, size);
	//排序
	for (int i = 0; i < size - 1; i++)
	{
		int minPos = i;
		for (int j = i + 1; j < size; j++)
			minPos = nums[j] < nums[minPos] ? j : minPos;  // 时间复杂度 O(N2)，最好最坏都是O(N2)，而且不稳定
		swap(nums[minPos], nums[i]);
		//每次循环完都打印
		cout << "经过第" << i + 1 << "次循环后" << endl;
		print(nums, size);
	}
	//最终打印
	cout << "排序后" << endl;
	print(nums, size);
}
void SelectionSort::swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void SelectionSort::print(int nums[], int size)
{
	for (int i = 0; i < size; i++)
		cout << nums[i] << ' ';
	cout << endl;
}
void SelectionSort::sort(int* ptr,int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minPos = i;
		for (int j = i + 1; j < size; j++)
			minPos = ptr[j] < ptr[minPos] ? j : minPos;  // 时间复杂度 O(N2)，最好最坏都是O(N2)，而且不稳定
		swap(ptr[minPos], ptr[i]);
	}
}
