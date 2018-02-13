#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	short int o, p;

	do
	{
		cout << "Введите задание:";
		cin >> o;

		switch (o)
		{
		case 1:
		{/*
		 1.Написать программу, которая в матрице чисел A(N, M) находит все элементы,
		 превышающие по абсолютной величине заданное число B.
		 Подсчитать число таких элементов и записать их в массив C.*/
			int a[4][4], b, c[4], schet = 0;
			cout << "Введите число В:";
			cin >> b;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{

					a[i][j] = 5 + rand() % 30;
					cout << a[i][j] << "\t";
				}cout << endl;
			}
			
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					if (a[i][j] > b)
						schet++;

				}
			}
			cout <<"Числа превышающие заданное число:"<< schet << endl;

		}
		break;
		case 2:
		{/*
			2.Дана целочисленная матрица размера 8х5.Определить:
			a.сумму всех элементов второго столбца массива;
			сумму всех элементов 3 - й строки массива.*/
	           
			//дальше не имею понятия как сделать.
		
		}
		break;
		case 3:
		{

		}
		break;
		case 4:
		{

		}
		break;
		case 5:
		{

		}
		break;

		default:cout << "Вы ввели неверное значение." << endl;
			break;
		}
		cout << "Хотите повторить? (1)ДА (2)НЕТ." << endl;
		cin >> p;

	} while (p == 1);

}

