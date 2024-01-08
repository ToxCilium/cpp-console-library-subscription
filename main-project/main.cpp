#include <iostream>
#include <iomanip>

using namespace std;

//#include "catalog.h"
//#include "file_reader.h"
//#include "constants.h"
//#include "filter.h"
//#include "processing.h"
//
//void output(catalog* items)
//{
//	/********** âûâîä ÷èòàòåëÿ **********/
//	cout << "×èòàòåëü........: ";
//	// âûâîä ôàìèëèè
//	cout << subscription->reader.last_name << " ";
//	// âûâîä ïåðâîé áóêâû èìåíè
//	cout << subscription->reader.first_name[0] << ". ";
//	// âûâîä ïåðâîé áóêâû îò÷åñòâà
//	cout << subscription->reader.middle_name[0] << ".";
//	cout << '\n';
//	/********** âûâîä êíèãè **********/
//	cout << "Êíèãà...........: ";
//	// âûâîä ôàìèëèè àâòîðà
//	cout << subscription->author.last_name << " ";
//	// âûâîä ïåðâîé áóêâû èìåíè àâòîðà
//	cout << subscription->author.first_name[0] << ". ";
//	// âûâîä ïåðâîé áóêâû îò÷åñòâà àâòîðà
//	cout << subscription->author.middle_name[0] << ".";
//	cout << ", ";
//	// âûâîä íàçâàíèÿ
//	cout << '"' << subscription->title << '"';
//	cout << '\n';
//	/********** âûâîä äàòû âûäà÷è **********/
//	// âûâîä ãîäà
//	cout << "Äàòà âûäà÷è.....: ";
//	cout << setw(4) << setfill('0') << subscription->start.year << '-';
//	// âûâîä ìåñÿöà
//	cout << setw(2) << setfill('0') << subscription->start.month << '-';
//	// âûâîä ÷èñëà
//	cout << setw(2) << setfill('0') << subscription->start.day;
//	cout << '\n';
//	/********** âûâîä äàòû âîçâðàòà **********/
//	// âûâîä ãîäà
//	cout << "Äàòà âîçâðàòà...: ";
//	cout << setw(4) << setfill('0') << subscription->finish.year << '-';
//	// âûâîä ìåñÿöà
//	cout << setw(2) << setfill('0') << subscription->finish.month << '-';
//	// âûâîä ÷èñëà
//	cout << setw(2) << setfill('0') << subscription->finish.day;
//	cout << '\n';
//	cout << '\n';
//}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Ëàáîðàòîðíàÿ ðàáîòà ¹1. GITi\n";
	cout << "Âàðèàíò ¹10. Êàòàëîã òîâàðîâ\n";
	cout << "Àâòîð: Ìàêñèì Ñåðåäà\n";
	cout << "Ãðóïïà: 23ÏÈíæ1ç\n\n";
	//catalog* items[MAX_FILE_ROWS_COUNT];
	//int size;
	//try
	//{
	//	read("data.txt", items, size);
	//	cout << "***** Áèáëèîòå÷íûé àáîíåìåíò *****\n\n";
	//	for (int i = 0; i < size; i++)
	//	{
	//		output(items[i]);
	//	}
	//	bool (*check_function)(catalog*) = NULL; // check_function - ýòî óêàçàòåëü íà ôóíêöèþ, âîçâðàùàþùóþ çíà÷åíèå òèïà bool,
	//													   // è ïðèíèìàþùóþ â êà÷åñòâå ïàðàìåòðà çíà÷åíèå òèïà catalog*
	//	cout << "\nÂûáåðèòå ñïîñîá ôèëüòðàöèè èëè îáðàáîòêè äàííûõ:\n";
	//	cout << "1) Òîâàðû êàòåãîðèè ïðîìòîâàðû \n";
	//	cout << "2) Òîâàðû ñòîèìîñòüþ áîëüøå 100 ðóáëåé\n";
	//	cout << "\nÂâåäèòå íîìåð âûáðàííîãî ïóíêòà: ";
	//	int item;
	//	cin >> item;	
	//	cout << '\n';
	//	switch (item)
	//	{
	//	case 1:
	//		check_function = check_catalog_by_category; // ïðèñâàèâàåì â óêàçàòåëü íà ôóíêöèþ ñîîòâåòñòâóþùóþ ôóíêöèþ
	//		cout << "***** Òîâàðû êàòåãîðèè ïðîìòîâàðû *****\n\n";
	//		break;
	//	case 2:
	//		check_function = check_book_subscription_by_date; // ïðèñâàèâàåì â óêàçàòåëü íà ôóíêöèþ ñîîòâåòñòâóþùóþ ôóíêöèþ
	//		cout << "***** Òîâàðû ñî ñòîèìîñòüþ áîëüøå 100 ðóáëåé *****\n\n";
	//		break;
	//	
	//	default:
	//		throw "Íåêîððåêòíûé íîìåð ïóíêòà";
	//	}
	//	if (check_function)
	//	{
	//		int new_size;
	//		catalog** filtered = filter(subscriptions, size, check_function, new_size);
	//		for (int i = 0; i < new_size; i++)
	//		{
	//			output(filtered[i]);
	//		}
	//		delete[] filtered;
	//	}
	//	for (int i = 0; i < size; i++)
	//	{
	//		delete subscriptions[i];
	//	}
	//}
	//catch (const char* error)
	//{
	//	cout << error << '\n';
	//}
	//return 0;
}
