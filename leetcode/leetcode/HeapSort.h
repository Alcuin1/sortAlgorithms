#pragma once
#include <iostream>
using namespace std;
class HeapSort
{
public:
	void swap(int&, int&);
	void maxHeapify(int*,int,int);
	void buildMaxHeap(int[], int);
	void sort(int*,int);
};