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
		cout << "������� �������:";
		cin >> o;

		switch (o)
		{
		case 1:
		{/*
		 1.�������� ���������, ������� � ������� ����� A(N, M) ������� ��� ��������,
		 ����������� �� ���������� �������� �������� ����� B.
		 ���������� ����� ����� ��������� � �������� �� � ������ C.*/
			int a[4][4], b, c[4], schet = 0;
			cout << "������� ����� �:";
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
			cout <<"����� ����������� �������� �����:"<< schet << endl;

		}
		break;
		case 2:
		{/*
			2.���� ������������� ������� ������� 8�5.����������:
			a.����� ���� ��������� ������� ������� �������;
			����� ���� ��������� 3 - � ������ �������.*/
	           
			//������ �� ���� ������� ��� �������.
		
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

		default:cout << "�� ����� �������� ��������." << endl;
			break;
		}
		cout << "������ ���������? (1)�� (2)���." << endl;
		cin >> p;

	} while (p == 1);

}

