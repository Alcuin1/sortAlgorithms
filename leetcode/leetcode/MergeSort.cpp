#include "MergeSort.h"
void MergeSort::swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void MergeSort::sort(int ptr[], int left, int right)
{
	if (left >= right) return;
	//分成两半
	int mid = left + (right - left)/2;//(left+right)/2可能会溢出
	//左边排序
	sort(ptr,left,mid);
	//右边排序
	sort(ptr, mid + 1, right);
	//归并
	merge(ptr, left, mid+1, right);
}
void MergeSort::merge(int ptr[],int leftPtr,int rightPtr,int rightBound)
//void MergeSort::merge(int* ptr, int leftPtr, int rightPtr, int rightBound) //也可以
{
	int mid = rightPtr - 1;
	//Array的定义和初始化有两种
	//1.int tmp[100] x
	//2.int* tmp = new int[100]; 记得delete[] tmp;
	int* tmp = new int[rightBound - leftPtr + 1];
	/*for (int t = 0; t <= rightBound - leftPtr; t++)
		tmp[t] = t;*/
	int i = leftPtr;
	int j = rightPtr;
	int k = 0;
	while (i <= mid && j <= rightBound)
		tmp[k++] = ptr[i] <= ptr[j] ? ptr[i++] : ptr[j++];
	while (i <= mid) tmp[k++] = ptr[i++];
	while (j <= rightBound) tmp[k++] = ptr[j++];
	for (int m = 0; m <= rightBound - leftPtr; m++) 
		ptr[leftPtr + m] = tmp[m];
	delete[] tmp;
}