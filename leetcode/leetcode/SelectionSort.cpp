#include "SelectionSort.h"
SelectionSort::SelectionSort()
{
}
SelectionSort::SelectionSort(int nums[], int size)
{
	//�����ӡ
	cout << "����ǰ" << endl;
	print(nums, size);
	//����
	for (int i = 0; i < size - 1; i++)
	{
		int minPos = i;
		for (int j = i + 1; j < size; j++)
			minPos = nums[j] < nums[minPos] ? j : minPos;  // ʱ�临�Ӷ� O(N2)����������O(N2)�����Ҳ��ȶ�
		swap(nums[minPos], nums[i]);
		//ÿ��ѭ���궼��ӡ
		cout << "������" << i + 1 << "��ѭ����" << endl;
		print(nums, size);
	}
	//���մ�ӡ
	cout << "�����" << endl;
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
			minPos = ptr[j] < ptr[minPos] ? j : minPos;  // ʱ�临�Ӷ� O(N2)����������O(N2)�����Ҳ��ȶ�
		swap(ptr[minPos], ptr[i]);
	}
}
