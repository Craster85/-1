#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int number;
	cout << "Введите шести значное число\n";
	cin >> number;
	if (9 >= number / 100000 >= 1)
	{
		if (number / 100000 + number / 10000 % 10 + number / 1000 % 10 == number / 100 % 10 + number / 10 % 10 + number % 10)
		{
			cout << "Это число счастлиое!";
		}
		else
		{
			cout << "Это число несчастливое.";
		}
	}
	else
	{
		cout << "Введённое число не соответствует просьбе!";
	}
}
