#include <iostream>
#include <Windows.h>
using namespace std;

void getclear() {
    system("cls");
}

void colorfone() {

    string text;
    system("cls");
    cout << "Введите любой текст: ";
    cin >> text;
    system("color 20");

    cout << "Вы ввели: " << text << ", а мы поменяли фон консоли)";
}

void colortext() {
    string text;
    system("cls");
    cout << "Введите любой текст: ";
    cin >> text;
    system("color 04");
    cout << "Вы ввели: " << text << ", а мы поменяли цвет текста в консоли)";
}

void getsizeINT() {
    setlocale(0, "");
    system("cls");
    system("color 05");
    cout << "Размер типа данных \"INT\": 4 байта! \n";
}

void getsizeCHAR() {
    setlocale(0, "");
    system("cls");
    system("color 01");
    cout << "Размер типа данных \"CHAR\": 1 байт! \n";
}

void getsizeDOUBLE() {
    setlocale(0, "");
    system("cls");
    system("color 0E");
    cout << "Размер типа данных \"DOUBLE\": 8 байт! \n";
}

void getsizeBOOL() {
    setlocale(0, "");
    system("cls");
    system("color 06");
    cout << "Размер типа данных \"BOOL\": 1 байт! \n";
}

void getsizeFLOAT() {
    setlocale(0, "");
    system("cls");
    system("color 04");
    cout << "Размер типа данных \"FLOAT\": 4 байта! \n";
}

void ShowMessage() {
    setlocale(0, "");
    system("cls");
    system("color 02");
    cout << "Привет, я функция! <3 ";
}

void BuildingKvadrat() {
    setlocale(0, "");
    system("cls");
    cout << "Программа для вывода квадрата 5 на 5: \n";
    cout << "Введите текстуру квадрата: ";
    char texture;
    cin >> texture;
    system("cls");
    system("color 06");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++) {
            cout << texture << " ";
        }
        cout << "\n";
    }
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "[+] Программа - \"Функции\"\n";
    cout << "[1] Очищение консоли \n";
    cout << "[2] Изменение цвета фона консоли \n";
    cout << "[3] Изменение цвета текста в консоли \n";
    cout << "[4] Вывод размера типа данных INT \n";
    cout << "[5] Вывод размера типа данных CHAR \n";
    cout << "[6] Вывод размера типа данных DOUBLE \n";
    cout << "[7] Вывод размера типа данных FLOAT \n";
    cout << "[8] Вывод размера типа данных BOOL \n";
    cout << "[9] Вывод сообщения \"Привет, я функция\"\n";
    cout << "[10] Вывод квадрата 5x5 \n";
    cout << "Введите вариант: ";
    int value;
    cin >> value;
    switch (value)
    {
    case 1:
        getclear();
        break;
    case 2:
        colorfone();
        break;
    case 3:
        colortext();
        break;
    case 4:
        getsizeINT();
        break;
    case 5:
        getsizeCHAR();
        break;
    case 6:
        getsizeDOUBLE();
        break;
    case 7:
        getsizeFLOAT();
        break;
    case 8:
        getsizeBOOL();
        break;
    case 9:
        ShowMessage();
        break;
    case 10:
        BuildingKvadrat();
        break;
    default:
        cout << "Нет такого значения! <3";
        break;
    }

    int _; cin >> _;
    return 0;
}