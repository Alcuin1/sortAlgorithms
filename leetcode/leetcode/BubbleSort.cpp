#include "BubbleSort.h"
BubbleSort::BubbleSort()
{
}
BubbleSort::BubbleSort(int nums[], int size)
{
	//�����ӡ
	cout << "����ǰ" << endl;
	print(nums, size);
	//����
	for (int i = size - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
			if (nums[j] > nums[j + 1])
				//swap(nums, j, j + 1);
				swap(nums[j], nums[j + 1]);
		//ÿ��ѭ���궼��ӡ
		cout << "������" << size - i << "��ѭ����" << endl;
		print(nums, size);
	}
	//���մ�ӡ
	cout << "�����" << endl;
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
