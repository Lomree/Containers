#pragma once
#include <iostream>
#include "Container.h"
class MyArray : Container
{
	//виртуальный деструктор, переопределить show, разобраться с гитхабом
private:
	int size;
	int *arr;
	
public:

	int* MyArr = new int[size];

	MyArray(int size)
	{
		
	}

	void show() override
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << std::endl;
		}
	}

	~MyArray();
};

