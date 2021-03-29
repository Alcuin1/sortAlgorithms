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
	//�ֳ�����
	int mid = left + (right - left)/2;//(left+right)/2���ܻ����
	//�������
	sort(ptr,left,mid);
	//�ұ�����
	sort(ptr, mid + 1, right);
	//�鲢
	merge(ptr, left, mid+1, right);
}
void MergeSort::merge(int ptr[],int leftPtr,int rightPtr,int rightBound)
//void MergeSort::merge(int* ptr, int leftPtr, int rightPtr, int rightBound) //Ҳ����
{
	int mid = rightPtr - 1;
	//Array�Ķ���ͳ�ʼ��������
	//1.int tmp[100] x
	//2.int* tmp = new int[100]; �ǵ�delete[] tmp;
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