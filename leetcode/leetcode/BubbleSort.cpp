#include "BubbleSort.h"
BubbleSort::BubbleSort()
{
}
BubbleSort::BubbleSort(int nums[], int size)
{
	//最初打印
	cout << "排序前" << endl;
	print(nums, size);
	//排序
	for (int i = size - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
			if (nums[j] > nums[j + 1])
				//swap(nums, j, j + 1);
				swap(nums[j], nums[j + 1]);
		//每次循环完都打印
		cout << "经过第" << size - i << "次循环后" << endl;
		print(nums, size);
	}
	//最终打印
	cout << "排序后" << endl;
	print(nums, size);
}
void BubbleSort::swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void BubbleSort::print(int nums[], int size)
{
	for (int i = 0; i < size; i++)
		cout << nums[i] << ' ';
	cout << endl;
}
void BubbleSort::sort(int* ptr,int size)
{
	for (int i = size - 1; i >= 0; i--)
		for (int j = 0; j < i; j++)
			if (ptr[j] > ptr[j + 1])
				swap(ptr[j], ptr[j + 1]);
	
}
