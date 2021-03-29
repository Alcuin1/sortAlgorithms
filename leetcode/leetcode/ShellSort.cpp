#include "ShellSort.h"
void ShellSort::swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void ShellSort::sort(int* ptr, int size)
{
	int h = 1;
	while (h <= size / 3) //Knuth序列
		h = h * 3 + 1;
	for (int gap = h; gap > 0; gap=(gap-1)/3) //右移一位 gap = size >> 1，相当于gap = size/2
	{
		for (int i = gap; i < size; i++)
			for (int j = i; j > gap - 1 && ptr[j] < ptr[j - gap]; j -= gap)
				swap(ptr[j], ptr[j - gap]);
	}
}
