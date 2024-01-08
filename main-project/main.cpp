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
	/********** ����� �������� **********/
	cout << "��������........: ";
	// ����� �������
	cout << subscription->reader.last_name << " ";
	// ����� ������ ����� �����
	cout << subscription->reader.first_name[0] << ". ";
	// ����� ������ ����� ��������
	cout << subscription->reader.middle_name[0] << ".";
	cout << '\n';
	/********** ����� ����� **********/
	cout << "�����...........: ";
	// ����� ������� ������
	cout << subscription->author.last_name << " ";
	// ����� ������ ����� ����� ������
	cout << subscription->author.first_name[0] << ". ";
	// ����� ������ ����� �������� ������
	cout << subscription->author.middle_name[0] << ".";
	cout << ", ";
	// ����� ��������
	cout << '"' << subscription->title << '"';
	cout << '\n';
	/********** ����� ���� ������ **********/
	// ����� ����
	cout << "���� ������.....: ";
	cout << setw(4) << setfill('0') << subscription->start.year << '-';
	// ����� ������
	cout << setw(2) << setfill('0') << subscription->start.month << '-';
	// ����� �����
	cout << setw(2) << setfill('0') << subscription->start.day;
	cout << '\n';
	/********** ����� ���� �������� **********/
	// ����� ����
	cout << "���� ��������...: ";
	cout << setw(4) << setfill('0') << subscription->finish.year << '-';
	// ����� ������
	cout << setw(2) << setfill('0') << subscription->finish.month << '-';
	// ����� �����
	cout << setw(2) << setfill('0') << subscription->finish.day;
	cout << '\n';
	cout << '\n';
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������������ ������ �1. GIT\n";
	cout << "������� �10. ������� �������\n";
	cout << "�����: ������ ������\n";
	cout << "������: 23����1�\n\n";
	catalog* items[MAX_FILE_ROWS_COUNT];
	int size;
	try
	{
		read("data.txt", items, size);
		cout << "***** ������������ ��������� *****\n\n";
		for (int i = 0; i < size; i++)
		{
			output(items[i]);
		}
		bool (*check_function)(catalog*) = NULL; // check_function - ��� ��������� �� �������, ������������ �������� ���� bool,
														   // � ����������� � �������� ��������� �������� ���� catalog*
		cout << "\n�������� ������ ���������� ��� ��������� ������:\n";
		cout << "1) ������ ��������� ���������� \n";
		cout << "2) ������ ���������� ������ 100 ������\n";
		cout << "\n������� ����� ���������� ������: ";
		int item;
		cin >> item;	
		cout << '\n';
		switch (item)
		{
		case 1:
			check_function = check_catalog_by_category; // ����������� � ��������� �� ������� ��������������� �������
			cout << "***** ������ ��������� ���������� *****\n\n";
			break;
		case 2:
			check_function = check_book_subscription_by_date; // ����������� � ��������� �� ������� ��������������� �������
			cout << "***** ������ �� ���������� ������ 100 ������ *****\n\n";
			break;
		case 3:
		{
			int days = process(subscriptions, size);
			cout << "***** ������������ ���������� ����, �� ������� ����� ���� ������ ������� *****\n\n";
			cout << days << "\n\n";
			break;
		}
		default:
			throw "������������ ����� ������";
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