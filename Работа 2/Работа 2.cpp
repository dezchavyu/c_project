#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Выбери значение времени года:\n";
    cout << "1 - Лето\n";
    cout << "2 - Осень\n";
    cout << "3 - Зима\n";
    cout << "4 - Весна\n";

    int enter;

    cin >> enter;

    if (enter == 1) {
        cout << "Ухх! Сегодня лето можно спать хоть вееееесь день!!!\n";
    }
    else if (enter == 2) {
        cout << "Оххх((( Опять рано вставать, и да не забудь куртку одеть...\n";
    }
    else if (enter == 3) {
        cout << "Ухх! Пора в проруби купаться и бегать с голым торсом!\n";
    }
    else if (enter == 4) {
        cout << "Наконец-то, скоро можно снова много спать)))\n";
    }
    else {
        cout << "Такого значения не существует\n";
    }
    int _; cin >> _;
    return 0;
}