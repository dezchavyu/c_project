#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    double a;
    cout << "Введите первое число:\n";
    cin >> a;
    cout << "Ваше первое число: " << a << "\n";
    cout << "\n";
    double b;
    cout << "Введите второе число:\n";
    cin >> b;
    cout << "Ваше второе число: " << b << "\n";
    cout << "\n";

    double result = 1;

    cout << "Выберите операцию: +, -, *, /, %\n";
    char operation;
    cin >> operation;

    if (operation == '+')
    {
        result = a + b;
        cout << "Результат: " << a << " + " << b << " = " << result;
    }
    else if (operation == '-')
    {
        result = a - b;
        cout << "Результат: " << a << " - " << b << " = " << result;
    }

    else if (operation == '*')
    {
        result = a * b;
        cout << "Результат: " << a << " * " << b << " = " << result;
    }

    else if (operation == '/')
    {
        if (b == 0)
        {
            cout << "Деление на 0 невозможно\n";
            return 0;
        }
        result = a / b;
        cout << "Результат: " << a << " / " << b << " = " << result;
    }
    else if (operation == '%')
    {
        if (b == 0)
        {
            cout << "Деление на 0 невозможно\n";
            return 0;
        }
        result = int(result);
        result = int(a) % int(b);
        cout << "Результат: " << a << " % " << b << " = " << result;
    }
    else {
        cout << "Неверное значение СМЕРТъ";
    }
    int _; cin >> _;
    return 0;
}
