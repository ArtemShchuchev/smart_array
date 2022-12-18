#include "SmartArr.h"
#include <iostream>

SmartArr::SmartArr(int capacity) : size_(0), capacity_(capacity > 0 ? capacity : 1)
{
	array_ = new int[capacity_];
}

SmartArr::~SmartArr()
{
	if (array_) delete[] array_;
}

void SmartArr::add(int element)
{
	if (size_ >= capacity_)	// нужно увеличить ёмкость(вместимость) массива
	{
		capacity_ = 2 * size_;
		int* moreArr = new int[capacity_];
		for (int i = 0; i < size_; ++i) moreArr[i] = array_[i];

		delete[] array_;
		array_ = moreArr;
	}
	array_[size_] = element;
	++size_;
}

int SmartArr::get(int index)
{
	if (index < 0 || index >= size_) throw std::exception("не верный индекс (get)!");
	return array_[index];
}
