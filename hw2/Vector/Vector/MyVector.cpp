#include "MyVector.h"
#include <iostream>
using namespace std;



MyVector::MyVector()
{
	ar = nullptr;
	size = 0;
	capacity = 0;
}

MyVector::MyVector(int n)
{
	size = n;
	ar = new int[n];
	for (int i = 0; i < n; i++)
		ar[i] = 0;
}

MyVector::MyVector(int n, int value)
{
	size = n;
	ar = new int[n];
	for (int i = 0; i < n; i++)
			ar[i] = value;
}

MyVector::MyVector(const MyVector &vec)
{
	size = vec.size;
	this->ar = new int[size];
	for (int i = 0; i < size; i++)
		this->ar[i] = vec.ar[i];
}

int MyVector::getCapacity() const
{
	return capacity;
}

MyVector::MyVector(int n): MyArray(n), capacity(n) {}
