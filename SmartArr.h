#pragma once
class SmartArr
{
protected:
private:
	int* array_ = nullptr;// целочисленный массив
	int size_;		// текущий размер массива
	int capacity_;	// ёмкость массива
public:
	SmartArr(int capacity);
	~SmartArr();
	void add(int element);
	int get(int index);
};

