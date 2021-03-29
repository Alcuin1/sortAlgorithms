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
		while (left<=right && ptr[left] <= pivot) left++;//����Ҫд��left<=right����Ȼ��pivot�����ֵʱ�������
		while (left<=right && ptr[right] > pivot) right--;//����Ҫд��ptr[right]>pivot����Ȼ��һ��ֵ��pivot��ͬʱ���ͻ�������������Ҳ�
		if(left<=right)//�����������Ҫ�ӣ���Ȼ�ͻ�left>right
			swap(ptr[left], ptr[right]);
	}
	swap(ptr[left],ptr[rightBound]);
	return left;
}
