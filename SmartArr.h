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
	SmartArr(const SmartArr&) = delete;	// конструктор копирования, запрещен
	~SmartArr();

	SmartArr& operator=(const SmartArr&) = delete; // оператор присваивания, запрещен
	void add(int element);
	int get(int index);
};

