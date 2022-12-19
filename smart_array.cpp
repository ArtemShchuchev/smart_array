#include <iostream>
#include "SmartArr.h"

void printHeader();

int main()
{
	printHeader();

	try
	{
		SmartArr arr(12);
		//SmartArr arr2 = arr;
		arr.add(1);
		arr.add(4);
		arr.add(155);
		arr.add(14);
		arr.add(15);
		std::cout << arr.get(1) << std::endl;
	}
	catch (const std::bad_alloc)
	{
		std::cout << "Ошибка: недостаточно памяти!" << std::endl;
	}
	catch (const std::exception& ex)
	{
		std::cout << "Ошибка: " << ex.what() << std::endl;
	}

	return 0;
}


// функции
// заголовок 
void printHeader()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");   // задаём русский текст
	system("chcp 1251");            // настраиваем кодировку консоли
	std::system("cls");
	cout << "Задача 1. Умный массив\n"
		<< "----------------------\n" << endl;
}
