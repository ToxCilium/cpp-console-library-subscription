#include <iostream>
#include <iomanip>

using namespace std;

#include "catalog.h"
#include "file_reader.h"
#include "constants.h"
#include "filter.h"
#include "processing.h"

void output(catalog* items)
{
	/********** вывод читателя **********/
	cout << "Читатель........: ";
	// вывод фамилии
	cout << subscription->reader.last_name << " ";
	// вывод первой буквы имени
	cout << subscription->reader.first_name[0] << ". ";
	// вывод первой буквы отчества
	cout << subscription->reader.middle_name[0] << ".";
	cout << '\n';
	/********** вывод книги **********/
	cout << "Книга...........: ";
	// вывод фамилии автора
	cout << subscription->author.last_name << " ";
	// вывод первой буквы имени автора
	cout << subscription->author.first_name[0] << ". ";
	// вывод первой буквы отчества автора
	cout << subscription->author.middle_name[0] << ".";
	cout << ", ";
	// вывод названия
	cout << '"' << subscription->title << '"';
	cout << '\n';
	/********** вывод даты выдачи **********/
	// вывод года
	cout << "Дата выдачи.....: ";
	cout << setw(4) << setfill('0') << subscription->start.year << '-';
	// вывод месяца
	cout << setw(2) << setfill('0') << subscription->start.month << '-';
	// вывод числа
	cout << setw(2) << setfill('0') << subscription->start.day;
	cout << '\n';
	/********** вывод даты возврата **********/
	// вывод года
	cout << "Дата возврата...: ";
	cout << setw(4) << setfill('0') << subscription->finish.year << '-';
	// вывод месяца
	cout << setw(2) << setfill('0') << subscription->finish.month << '-';
	// вывод числа
	cout << setw(2) << setfill('0') << subscription->finish.day;
	cout << '\n';
	cout << '\n';
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Лабораторная работа №1. GIT\n";
	cout << "Вариант №10. Каталог товаров\n";
	cout << "Автор: Максим Середа\n";
	cout << "Группа: 23ПИнж1з\n\n";
	catalog* items[MAX_FILE_ROWS_COUNT];
	int size;
	try
	{
		read("data.txt", items, size);
		cout << "***** Библиотечный абонемент *****\n\n";
		for (int i = 0; i < size; i++)
		{
			output(items[i]);
		}
		bool (*check_function)(catalog*) = NULL; // check_function - это указатель на функцию, возвращающую значение типа bool,
														   // и принимающую в качестве параметра значение типа catalog*
		cout << "\nВыберите способ фильтрации или обработки данных:\n";
		cout << "1) Товары категории промтовары \n";
		cout << "2) Товары стоимостью больше 100 рублей\n";
		cout << "\nВведите номер выбранного пункта: ";
		int item;
		cin >> item;	
		cout << '\n';
		switch (item)
		{
		case 1:
			check_function = check_catalog_by_category; // присваиваем в указатель на функцию соответствующую функцию
			cout << "***** Товары категории промтовары *****\n\n";
			break;
		case 2:
			check_function = check_book_subscription_by_date; // присваиваем в указатель на функцию соответствующую функцию
			cout << "***** Товары со стоимостью больше 100 рублей *****\n\n";
			break;
		case 3:
		{
			int days = process(subscriptions, size);
			cout << "***** Максимальное количество дней, на которое книга была выдана клиенту *****\n\n";
			cout << days << "\n\n";
			break;
		}
		default:
			throw "Некорректный номер пункта";
		}
		if (check_function)
		{
			int new_size;
			book_subscription** filtered = filter(subscriptions, size, check_function, new_size);
			for (int i = 0; i < new_size; i++)
			{
				output(filtered[i]);
			}
			delete[] filtered;
		}
		for (int i = 0; i < size; i++)
		{
			delete subscriptions[i];
		}
	}
	catch (const char* error)
	{
		cout << error << '\n';
	}
	return 0;
}