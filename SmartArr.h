#pragma once
class SmartArr
{
protected:
private:
	int* array_ = nullptr;// ������������� ������
	int size_;		// ������� ������ �������
	int capacity_;	// ������� �������
public:
	SmartArr(int capacity);
	~SmartArr();
	void add(int element);
	int get(int index);
};

