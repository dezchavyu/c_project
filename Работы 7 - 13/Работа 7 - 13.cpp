#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int c = 0;
	int k = 0;
	int start = (c - k) / 2;
	cout << "Программа « Фигуры »\n\n";
	cout << "Выбери фигуру\n";
	cout << "[1] Линия\n";
	cout << "[2] Квадрат\n";
	cout << "[3] Прямоугольник\n";
	cout << "[4] Треугольник\n";
	cout << "[5] Решетка\n";
	cout << "[6] Крестик\n";
	cout << "[7] Плюс\n";
	int figure;
	cout << "Введите фигуру: ";
	cin >> figure;
	int j = 0;
	int i = 0;

	switch (figure)
	{
	case 1:
		system("cls");
		cout << "[+] Линия \n";
		cout << "[1] Вертикальная линия \n";
		cout << "[2] Горизонтальная линия \n";
		int value;
		cin >> value;
		switch (value)
		{
		case 1:
			int h;
			char s;
			cout << "Введите высоту : ";
			cin >> h;
			cout << "Введите стиль: ";
			cin >> s;
			while (i < h)
			{
				cout << s;
				cout << "\n";
				i++;
			}
			break;
		case 2:
			int w;
			char st;
			cout << "Введите ширину : ";
			cin >> w;
			cout << "Введите стиль: ";
			cin >> st;
			while (j < w)

			{
				cout << st;
				j++;
			}
			cout << "\n";
			break;
		default:
			system("cls");
			cout << "Нет такого значения <3";
			break;
		}
		break;
	case 2:
		system("cls");
		int option;
		cout << "[1] Квадрат\n";
		cout << "[2] Закрашенный квадрат\n";
		cout << "Введите тип квадрата: ";
		cin >> option;
		switch (option)
		{
		case 1:
			system("cls");
			int weight;
			char style;
			cout << "Введите размер квадрата : ";
			cin >> weight;
			cout << "Введите стиль: ";
			cin >> style;
			for (int i = 0; i < weight; i++)
			{
				for (int j = 0; j < weight; j++)
				{
					if ((i >= 1 && i <= weight - 2) && (j >= 1 && j <= weight - 2))
						cout << " ";
					else
						cout << style;
				}
				cout << "\n";
			}
			break;
		case 2:
			system("cls");
			int weight2;
			char style2;
			cout << "Введите размер квадрата : ";
			cin >> weight2;
			cout << "Введите стиль: ";
			cin >> style2;
			for (int i = 0; i < weight2; i++)
			{
				for (int j = 0; j < weight2; j++)
				{
					if ((i >= 1 && i <= weight2 - 2) && (j >= 1 && j <= weight2 - 2))
						cout << style2;
					else
						cout << style2;
				}
				cout << "\n";
			}
			break;
		default:
			cout << "Такой фигуры не существует\n";
			break;
		}
		break;
	case 3:
		system("cls");
		int option1;
		cout << "[1] Прямоугольник\n";
		cout << "[2] Закрашенный прямоугольник\n";
		cout << "Введите тип прямоугольника: ";
		cin >> option1;
		switch (option1)
		{
		case 1:
			system("cls");
			int w, h;
			char s;
			cout << "Введите ширину : ";
			cin >> w;
			cout << "Введите высоту: ";
			cin >> h;
			cout << "Введите стиль: ";
			cin >> s;
			for (int i = 0; i < h; i++)
			{
				for (int j = 0; j < w; j++)
				{
					if ((i >= 1 && i <= h - 2) && (j >= 1 && j <= w - 2))
						cout << " ";
					else
						cout << s;
				}
				cout << "\n";
			}
			break;
		case 2:
			system("cls");
			int w1, h1;
			char s1;
			cout << "Введите ширину : ";
			cin >> w1;
			cout << "Введите высоту: ";
			cin >> h1;
			cout << "Введите стиль: ";
			cin >> s1;
			for (int i = 0; i < h1; i++)
			{
				for (int j = 0; j < w1; j++)
				{
					if ((i >= 1 && i <= h1 - 2) && (j >= 1 && j <= w1 - 2))
						cout << s1;
					else
						cout << s1;
				}
				cout << "\n";
			}
			break;
		default:
			cout << "Такой фигуры не существует\n";
			break;
		}
		break;
	case 4:
		system("cls");
		char stl;
		int hght;
		int count;
		int op;

		cout << "[1] Треугольник\n";
		cout << "[2] Закрашенный треугольник\n";

		cout << "Выберите тип треугольника: ";
		cin >> op;

		switch (op)
		{
		case 1:
			system("cls");
			cout << "Введите высоту треугольника: ";
			cin >> hght;
			cout << "Введите символ: ";
			cin >> stl;
			for (int i = 0; i < hght; i++)
			{
				for (int j = 1; j < hght - i; j++) cout << ' ';
				for (int j = hght - 2 * i; j <= hght; j++)
				{
					if (i == hght - 1)
					{
						for (count = 0; count < i * 2 + 1; count++) cout << stl;
						break;
					}
					if (j == hght - 2 * i || j == hght - 1) cout << stl;
					if (j > hght - 2 * i || j < hght - 1) cout << ' ';
				}
				cout << "\n";
			}
			break;
		case 2:
			system("cls");
			cout << "Введите высоту: ";
			cin >> hght;
			cout << "Введите стиль: ";
			cin >> stl;
			for (int i = 0; i < hght; i++)
			{
				for (int j = 1; j < hght - i; j++) cout << ' ';
				for (int j
					= hght - 2 * i; j <= hght; j++) cout << stl;

				cout << "\n";
			}
			break;
		default:
			cout << "Такой фигуры не существует\n";
			break;
		}
		break;
	case 7:
		system("cls");
		int n;
		cout << "Введите размер плюса: \n";
		cin >> n;
		char s1;
		cout << "Введите стиль плюса: \n";
		cin >> s1;

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j) 
			cout << ' ';
			cout << s1 << "\n";
		}
		for (int j = 0; j < 2 * n + 1; ++j) 
			cout << s1;
			cout << "\n";
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
				cout << ' ';
				cout << s1 << "\n";
		}
		break;
	case 6:
		system("cls");
		cout << "[+] Крестик \n";
		cout << "Введите размер крестика: ";
		int size1;
		cin >> size1;
		cout << "Введите текстуру: ";
		char texture2;
		cin >> texture2;

		if (size1 % 2 == 0) {
			size1++;
		}
		for (int i = 1; i <= size1; i++) {
			for (int j = 1; j <= size1; j++) {
				if (j == size1 - j || j == i || i - 1 == size1 - j) {
					cout << texture2 << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	case 5:
		system("cls");
		cout << "[+] Решетка \n";
		cout << "Введите размер решетки: ";
		int size;
		cin >> size;
		cout << "Введите текстуру: ";
		char texture;
		cin >> texture;

		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= size; j++) {
				if (i % 2 == 0 || j % 2 == 0) {
					cout << texture << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	default:
		system("cls");
		cout << "Такой фигуры не существует <3\n";
		break;
	}
}
