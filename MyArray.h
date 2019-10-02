#pragma once
#include "Container.h"


class MyArray : public Container
{
protected:
	int* ar;
public:
	MyArray();
	MyArray(int n);								//создает массив из n нулевых элементов
	MyArray(const MyArray& ar);					//выделяет память и поэлементно копирует объект ar

	int getSize() const;						//возвращает size
	int getCapacity() const;					//возвращает size
	void show() const;

	void addCapacity(int n);					// увеличивает максимально возможную вместимость контейнера на n (нулевых) элементов(без потери данных)

	int& operator[](int index);					//доступ к i-ому элементу
	MyArray& operator=(const MyArray& ar);		//очищает память текущего объекта, выделяет память заново и поэлементно копирует объект ar

	~MyArray();
};

