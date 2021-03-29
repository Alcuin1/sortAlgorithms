#include "InsertionSort.h"
void InsertionSort::swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void InsertionSort::sort(int* ptr, int size)
{
	for (int i = 1; i < size; i++)
		for (int j=i; j>0 && ptr[j] < ptr[j - 1]; j--)
			swap(ptr[j], ptr[j-1]);
}
