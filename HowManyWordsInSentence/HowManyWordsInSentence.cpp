// 3. Підрахувати кількість слів у реченні
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Sentence;//створюємо об'єкт для типу string 
	cout << "Enter any sentence with gaps - a few words" << endl;
	getline(cin, Sentence);//вводимо дані в рядок
	int size =Sentence.size();//створюємо розмір для даного рядка
	int k = 0;//оголошуємо змінну для підрахунку кількості пробілів
	for (int i = 0; i < size; i++)//створюємо цикл для підрахунку пробілів
	{
		if (Sentence[i] == ' ' and Sentence[i + 1] != ' ')//
			k++;//підраховуємо кількість пробілів-пропусків між словами
	}
	cout << k + 1 << endl;//виводимо кількість слів- адже їх на один більше за пробілів
}
