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
	SmartArr(const SmartArr&) = delete;	// ����������� �����������, ��������
	~SmartArr();

	SmartArr& operator=(const SmartArr&) = delete; // �������� ������������, ��������
	void add(int element);
	int get(int index);
};

