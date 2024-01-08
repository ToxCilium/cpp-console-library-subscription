#include <iostream>
#include <iomanip>

using namespace std;

#include "catalog.h"
#include "file_reader.h"
#include "constants.h"
#include "filter.h"
//#include "processing.h"

void output(catalog* subscription)
{
	/********** вывод цены **********/
	cout << "Цена........: ";
	// вывод цены
	cout << subscription->price << " ";
	cout << '\n';
	/********** вывод количества **********/
	cout << "Общее количество...........: ";
	// вывод количества
	cout << subscription->count << " ";
	cout << '\n';
	/********** вывод категории **********/
	cout << "Категория...........: ";
	// вывод категории
	cout << subscription->category << " ";
	cout << '\n';
	/********** вывод названия **********/
	cout << "Название...........: ";
	// вывод названия
	cout << subscription->title << " ";
	cout << '\n';
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Лабораторная работа №1. GITi\n";
	cout << "Вариант №10. Католог товаров\n";
	cout << "Автор: Середа максим\n";
	cout << "Группа: 23ПИнж1з\n\n";
	catalog* subscriptions[MAX_FILE_ROWS_COUNT];
	int size;
	try
	{
		//read("data.txt", subscriptions, size);
		//cout << "***** Каталог товаров *****\n\n";
		//for (int i = 0; i < size; i++)
		//{
		//	output(subscriptions[i]);
		//}
		//bool (*check_function)(catalog*) = NULL; // check_function - это указатель на функцию, возвращающую значение типа bool,
		//												   // и принимающую в качестве параметра значение типа book_subscription*
		//cout << "\nВыберите способ фильтрации или обработки данных:\n";
		//cout << "1) Товары в категории промтовары\n";
		//cout << "2) Товары с ценой выше 100 рублей\n";
		//cout << "\nВведите номер выбранного пункта: ";
		//int item;
		//cin >> item;
		//cout << '\n';
		//switch (item)
		//{
		//case 1:
		//	check_function = check_book_subscription_by_author; // присваиваем в указатель на функцию соответствующую функцию
		//	cout << "***** Записи абонемента с книгами Пушкина Александра Сергеевича *****\n\n";
		//	break;
		//case 2:
		//	check_function = check_book_subscription_by_date; // присваиваем в указатель на функцию соответствующую функцию
		//	cout << "***** Записи абонемента с датой выдачи в марте 2015-го года *****\n\n";
		//	break;
		//case 3:
		//{
		//	int days = process(subscriptions, size);
		//	cout << "***** Максимальное количество дней, на которое книга была выдана клиенту *****\n\n";
		//	cout << days << "\n\n";
		//	break;
		//}
		//default:
		//	throw "Некорректный номер пункта";
		//}
		//if (check_function)
		//{
		//	int new_size;
		//	book_subscription** filtered = filter(subscriptions, size, check_function, new_size);
		//	for (int i = 0; i < new_size; i++)
		//	{
		//		output(filtered[i]);
		//	}
		//	delete[] filtered;
		//}
		//for (int i = 0; i < size; i++)
		//{
		//	delete subscriptions[i];
		//}
	}
	catch (const char* error)
	{
		cout << error << '\n';
	}
	return 0;
}
