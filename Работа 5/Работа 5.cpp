#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    cout << "[+] Переводчик\n";
    cout << "[1] Русские слова\n";
    cout << "[2] Английские слова\n";
    cout << "[3] Выйти\n";

    int Ruword;
    int Enword;
    int point;

    cin >> point;

    switch (point) {
    case 1:
        cout << "[+] Список русских слов\n";
        cout << "[1] Дорога\n [2] Дом\n [3] Машина\n [4] Компьютер\n [5] Стол\n [6] Телефон\n [7] Окно\n [8] Лес\n [9] Улица\n [10] Город\n [11] Время\n [12] Страна\n [13] Небо\n [14] Тетрадь\n [15] Дверь\n";
        cout << "[3] Выберите номер слова: \n";

        cin >> Ruword;
        switch (Ruword) {

        case 1:
            cout << "Дорога" << " -> " << "Road\n";
            break;
        case 2:
            cout << "Дом" << " -> " << "Home\n";
            break;
        case 3:
            cout << "Машина" << " -> " << "Car\n";
            break;
        case 4:
            cout << "Компьютер" << " -> " << "PC\n";
            break;
        case 5:
            cout << "Стол" << " -> " << "Table\n";
            break;
        case 6:
            cout << "Телефон" << " -> " << "Phone\n";
            break;
        case 7:
            cout << "Окно" << " -> " << "Window\n";
            break;
        case 8:
            cout << "Лес" << " -> " << "Forest\n";
            break;
        case 9:
            cout << "Улица" << " -> " << "Street\n";
            break;
        case 10:
            cout << "Город" << " -> " << "City\n";
            break;
        case 11:
            cout << "Время" << " -> " << "Time\n";
            break;
        case 12:
            cout << "Страна" << " -> " << "Country\n";
            break;
        case 13:
            cout << "Небо" << " -> " << "Sky\n";
            break;
        case 14:
            cout << "Тетерадь" << " -> " << "Notebook\n";
            break;
        case 15:
            cout << "Дверь" << " -> " << "Door\n";
            break;
        default:
            cout << "Такого слова не существует\n";
            break;
        }
        break;
    case 2:
        cout << "[+] Список английских слов\n";
        cout << "[1] Road\n [2] Home\n [3] Car\n [4] PC\n [5] Table\n [6] Phone\n [7] Window\n [8] Forest\n [9] Street\n [10] City\n [11] Time\n [12] Country\n [13] Sky\n [14] Notebook\n [15] Door\n";
        cout << "[3] Выберите номер слова: \n";

        cin >> Enword;
        switch (Enword) {

        case 1:
            cout << "Road" << " -> " << "Дорога\n";
            break;
        case 2:
            cout << "Home" << " -> " << "Дом\n";
            break;
        case 3:
            cout << "Car" << " -> " << "Машина\n";
            break;
        case 4:
            cout << "PC" << " -> " << "Компьютер\n";
            break;
        case 5:
            cout << "Table" << " -> " << "Стол\n";
            break;
        case 6:
            cout << "Phone" << " -> " << "Телефон\n";
            break;
        case 7:
            cout << "Window" << " -> " << "Окно\n";
            break;
        case 8:
            cout << "Forest" << " -> " << "Лес\n";
            break;
        case 9:
            cout << "Street" << " -> " << "Улица\n";
            break;
        case 10:
            cout << "City" << " -> " << "Город\n";
            break;
        case 11:
            cout << "Time" << " -> " << "Время\n";
            break;
        case 12:
            cout << "Country" << " -> " << "Страна\n";
            break;
        case 13:
            cout << "Sky" << " -> " << "Небо\n";
            break;
        case 14:
            cout << "Notebook" << " -> " << "Тетрадь\n";
            break;
        case 15:
            cout << "Door" << " -> " << "Дверь\n";
            break;
        default:
            cout << "Такого слова не существует\n";
            break;
        }
        break;

    case 3:
        cout << "Вы вышли из программы\n";
        break;

    default:
        cout << "Неверное значение\n";
        break;
    }
    int _; cin >> _;
}
