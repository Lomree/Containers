#pragma once
#include <cassert>
#include "MyVector.h"
#include "Container.h"
#include "MyArray.h"

MyVector::MyVector()
{
	capacity = 0;
}

MyVector::MyVector(int n)
{
	assert(n > 0);
	size = n;
	capacity = n;
	this->ar = new int[size];
	for (int i = 0; i < n; ++i)
	{
		this->ar[i] = 0;
	}
}

MyVector::MyVector(int n, int value)
{
	assert(n > 0);
	size = n;
	capacity = n;
	this->ar = new int[size];
	for (int i = 0; i < n; ++i)
	{
		this->ar[i] = value;
	}
}

MyVector::MyVector(const MyVector& vec)
{
	size = vec.size;
	capacity = vec.capacity;
	this->ar = new int[capacity];
	for (int i = 0; i < capacity; ++i)
	{
		this->ar[i] = vec.ar[i];
	}
}

int MyVector::getCapacity() const
{
	return capacity;
}

void MyVector::addCapacity(int n)
{
	assert(n > 0);
	capacity += n;
	int* _ar = new int[capacity];

	for (int i = 0; i < size; ++i)
	{
		_ar[i] = this->ar[i];
	}

	for (int i = size; i < capacity; ++i)
	{
		_ar[i] = 0;
	}


	ar = _ar;

}

void MyVector::pushBack(int val)
{
	assert(size > 0);
	if (size < capacity)
	{
		++size;
		ar[size] = val;
	}

	else
	{
		addCapacity(1);
		++size;
		ar[size] = val;
	}
}

int MyVector::popBack()
{
	return ar[size];
	--size;
}

void MyVector::insert(int index, int val)
{
	assert(index > 0);
	if (index < capacity)
	{
		ar[index] = val;
	}

	else 
	{
		addCapacity(index - capacity + 1);

		ar[index] = val;
	}
}

int MyVector::remove(int index)
{
	return 0;
}

MyVector& MyVector::operator=(const MyVector& vec)
{
	if (this == &vec) return *this;

	size = vec.size;
	delete[] this->ar;
	this->ar = new int[capacity];
	for (int i = 0; i < size; ++i)
	{
		this->ar[i] = vec.ar[i];
	}

	if (capacity > size)
	{
		for (int i = size; i < capacity; ++i)
		{
			this->ar[i] = 0;
		}
	}

	return *this;
}

MyVector::~MyVector()
{
	delete[] ar;
}