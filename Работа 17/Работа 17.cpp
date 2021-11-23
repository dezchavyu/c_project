#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	int result = 1;

	cout << "----------- \n";
	cout << "Калькулятор \n";
	cout << "----------- \n\n";

	cout << "Выберите операцию: \n";
	cout << "[1] Сложение \n";
	cout << "[2] Вычитание \n";
	cout << "[3] Умножение \n";
	cout << "[4] Деление \n";
	cout << "[5] Деление с остатком \n";
	cout << "[6] Корень из числа \n";
	cout << "[7] Возведение в степень \n";
	cout << "[8] Вычисление факториала \n";
	cout << "[!] Ваш выбор: ";

	int value;
	cin >> value;
	
	int a;
	int b;

	switch (value)
	{
	case 1:
		system("cls");
		cout << "Введите первое число: ";
		cin >> a;
		cout << "\nВведите второе число: ";
		cin >> b;
		cout << "\nСумма ваших чисел: " << a + b << "\n";
		break;
	case 2:
		system("cls");
		cout << "Введите первое число: ";
		cin >> a;
		cout << "\nВведите второе число: ";
		cin >> b;
		cout << "\nРазность ваших чисел: " << a - b << "\n";
		break;
	case 3:
		system("cls");
		cout << "Введите первое число: ";
		cin >> a;
		cout << "\nВведите второе число: ";
		cin >> b;
		cout << "\nПроизведение ваших чисел: " << a * b << "\n";
		break;
	case 4:
		system("cls");
		cout << "Введите первое число: ";
		cin >> a;
		cout << "\nВведите второе число: ";
		cin >> b;
		cout << "\nРезультат деления ваших чисел: " << a / b << "\n";
		break;
	case 5:
		system("cls");
		cout << "Введите первое число: ";
		cin >> a;
		cout << "\nВведите второе число: ";
		cin >> b;
		cout << "\nРезультат деления с остатком: " << a % b << "\n";
		break;
	case 6:
		system("cls");
		cout << "Введите число для извлечения корня: ";
		cin >> a;
		cout << "\nРезультат извлечения корня: " << sqrt(a) << "\n";
		break;
	case 7:
		system("cls");
		cout << "Введите число: ";
		cin >> a;
		cout << "\nВведите степень числа: ";
		cin >> b;
		cout << "\nРезультат возведения в степень: " << pow(a,b) << "\n";
		break;
	case 8:
		system("cls");
		cout << "Введите число: ";
		cin >> a;
		for (int i = 1; i < a + 1; i++)
		{
			result = result * i;
		}
		cout << "\nРезультат вычисления факториала: " << result;
		break;
	default:
		system("cls");
		cout << "Вы ввели значение, которого нет в меню <3";
		break;
	}

	int _; cin >> _;
	return 0;
}

