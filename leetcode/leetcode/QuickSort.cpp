#include "QuickSort.h"
void QuickSort::swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void QuickSort::sort(int* ptr, int leftBound, int rightBound)
{
	if (leftBound >= rightBound)
		return;
	int mid = partition(ptr, leftBound, rightBound);
	sort(ptr,leftBound,mid-1);
	sort(ptr,mid+1,rightBound);
}
int QuickSort::partition(int ptr[],int leftBound,int rightBound)
{
	int pivot = ptr[rightBound];
	int left = leftBound;
	int right = rightBound-1;
	while (left <= right)
	{
		while (left<=right && ptr[left] <= pivot) left++;//这里要写成left<=right，不然当pivot是最大值时，会出错
		while (left<=right && ptr[right] > pivot) right--;//这里要写成ptr[right]>pivot，不然当一个值和pivot相同时，就会出现在它的左右侧
		if(left<=right)//这个条件必须要加，不然就会left>right
			swap(ptr[left], ptr[right]);
	}
	swap(ptr[left],ptr[rightBound]);
	return left;
}
