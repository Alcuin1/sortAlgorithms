#include "HeapSort.h"
void HeapSort::swap(int& a,int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void HeapSort::maxHeapify(int nums[], int i, int heapSize)
{
	int l=2*i+1,r=2*i+2,largest=i;
	if (l<heapSize && nums[l]>nums[largest]) largest = l;
	if (r<heapSize && nums[r]>nums[largest]) largest = r;

	if (largest != i)
	{
		swap(nums[largest],nums[i]);
		maxHeapify(nums, largest, heapSize);
	}
}

void HeapSort::buildMaxHeap(int nums[], int heapSize)
{
	for (int i = (heapSize - 1) / 2; i >= 0; i--)
		maxHeapify(nums,i,heapSize);
}

void HeapSort::sort(int nums[],int heapSize)
{
	buildMaxHeap(nums, heapSize);
	for (int i = heapSize - 1;i>=0; i--)
	{
		swap(nums[0],nums[i]);
		heapSize--;
		maxHeapify(nums, 0, heapSize);
	}
}

