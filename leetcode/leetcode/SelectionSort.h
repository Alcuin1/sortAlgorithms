#pragma once
#include <iostream>
using namespace std;
class SelectionSort
{
public:
	SelectionSort();
	SelectionSort(int nums[], int size);
	void sort(int* ,int);
	void swap(int& a, int& b);
	void print(int nums[], int size);
};