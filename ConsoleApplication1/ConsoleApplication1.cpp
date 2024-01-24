#include <iostream>
#include <Windows.h>
#include <cmath>
#pragma execution_character_set("utf-8")
using namespace std;

int main()
{
	while (true)
	{
		SetConsoleCP(65001); // устанавливаем кодировку входящего потока данных на UTF-8
		SetConsoleOutputCP(65001); // устанавливаем кодировку исходящего потока данных на UTF-8
		int a, b, g;
		cout << "Выберите действие:\n\n1.Сложение\n2.Вычитание\n3.Частное\n4.Произвденеи\n5.Возведение в степень\n6.Нахождения квадратного корня\n7.Нахождение 1 процента от числа\n8.Найти факториал числа\n9.Выйти из программы\n";
		cin >> g;
		if (g == 1)
		{
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			int c = a + b;
			cout << "Сумма чисел = " << c << endl;
			continue;
		}
		if (g == 2)
		{
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			int v = a - b;
			cout << "Разность чисел = " << v << endl;
			continue;
		}
		if (g == 3)
		{
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			int c = a / b;
			cout << "Частное чисел = " << c << endl;
			continue;
		}
		if (g == 4)
		{
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			int c = a * b;
			cout << "Произведение чисел = " << c << endl;
			continue;

		}
		if (g == 5)
		{
			cout << "Введите число: ";
			cin >> a;
			cout << "Введите степень: ";
			cin >> b;
			cout << "Результат = " << pow(a, b) << endl;
			continue;
		}
		if (g == 6)
		{
			cout << "Введите число: ";
			cin >> a;
			cout << "Результат = " << sqrt(a);
			continue;
		}
		if (g == 7)
		{
			cout << "Введите число: ";
			cin >> a;
			cout << "Результат = " << (a / 100);
			continue;
		}
		if (g == 8)
		{
			cout << "Введите число: ";
			cin >> a;
			int result;
			result = 1;
			for (int i = 1; i <= a; i++) 
			{
				result *= i;
				cout << " = " << result;
				continue;
			}
		}
		if (g == 9)
		{
			break;
		}
	}
}
