#include "MyVector.h"
#include <iostream>
using namespace std;



MyVector::MyVector() : MyArray(), capacity(0) {}

MyVector::MyVector(int n) : MyArray(n), capacity(n){}

MyVector::MyVector(int n, int value)
{
	size = n;
	capacity = n;
	ar = new int[n];
	for (int i = 0; i < n; i++)
			ar[i] = value;
}

MyVector::MyVector(const MyVector &vec)
{
	size = vec.size;
	capacity = vec.capacity;
	this->ar = new int[capacity];
	for (int i = 0; i < size; i++)
		this->ar[i] = vec.ar[i];
}

int MyVector::getCapacity() const
{
	return capacity;
}

void MyVector::addCapacity(int n)
{
	capacity += n;
	int* temp = new int[capacity];
		for (int i = 0; i <= size; i++)
			temp[i] = ar[i];		
		for (int i = size + 1; i <= capacity; i++)
			temp[i] = 0;
		delete [] ar;
		ar = temp;
}

void MyVector::pushBack(int val)
{
	if (size = capacity)
		this->addCapacity(1);
		ar[size++] = val;
		size++;
}

int MyVector::popBack()
{
	if (size >= 1)
	{
		size--;
		return ar[size];
	}
	else
		return 0;

}

void MyVector::insert(int index, int val)
{
	if (index > capacity)
		addCapacity(index - capacity);
		ar[index] = val;
		size++;
}

int MyVector::remove(int index)
{
	for (int i =index; i<=size; i++)
	{
		ar[i] = ar[i++];
	}
	size--;
}

MyVector& MyVector::operator=(const MyVector& vec)
{
	if (this == &vec)
		return *this;
	delete[] this->ar;
	size = 0;
	capacity = 0;
	size = vec.size;
	capacity = vec.capacity;
	ar = new int[capacity];
	for (int i = 0; i < size; i++)
		this->ar[i] = vec.ar[i];
	return *this;
}



