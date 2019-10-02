#pragma once
class Container
{
protected:
	int size;
public:
	virtual int getSize() const = 0; 			//возвращает количество элементов в контейнере
	virtual int getCapacity() const = 0;		//возвращает максимально возможное количество элементов в контейнере
	virtual void show() const = 0;				//выводит значение элементов контейнера в консоль, через пробел

	virtual void addCapacity(int n) = 0;		//увеличивает максимально возможную вместимость контейнера на n элементов (без потери данных)


	virtual ~Container();					    //освобождает выделенную память
};
