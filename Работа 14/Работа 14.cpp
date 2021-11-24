#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");

    const int size = 10;

    int arr1[size] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << "Вывод первого массива: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "[+] arr1[" << i + 1 << "] = " << arr1[i] << "\n";
    }
    cout << "\n";

    short arr2[size] = { 11,22,33,44,55,66,77,88,99,101 };
    cout << "Вывод второго массива: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "[+] arr2[" << i + 1 << "] = " << arr2[i] << "\n";
    }
    cout << "\n";

    long arr3[size] = { 111,222,333,444,555,666,777,888,999,1010 };
    cout << "Вывод третьего массива: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "[+] arr3[" << i + 1 << "] = " << arr3[i] << "\n";
    }
    cout << "\n";

    float arr4[size] = { 11.1,22.2,33.3,44.4,55.5,66.6,77.7,88.8,99.9,10.1 };
    cout << "Вывод четвертого массива: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "[+] arr4[" << i + 1 << "] = " << arr4[i] << "\n";
    }
    cout << "\n";

    double arr5[size] = { 1.11,2.22,3.33,4.44,5.55,6.66,7.77,8.88,9.99,10.11 };
    cout << "Вывод пятого массива: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "[+] arr5[" << i + 1 << "] = " << arr5[i] << "\n";
    }
    cout << "\n";

    char arr6[size] = { '!','@','#','$','%','^','&','*','(',')' };
    cout << "Вывод шестого массива: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "[+] arr6[" << i + 1 << "] = " << arr6[i] << "\n";
    }
    cout << "\n";

    bool arr7[size] = { true,true,true,true,true,false,false,false,false,false };
    cout << "Вывод седьмого массива: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "[+] arr7[" << i + 1 << "] = " << arr7[i] << "\n";
    }
    cout << "\n";

    string arr8[size] = { "a","s","d","f","g","h","j","k","l","q" };
    cout << "Вывод шестого массива: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "[+] arr8[" << i + 1 << "] = " << arr8[i] << "\n";
    }
    cout << "\n";



    int _; cin >> _;
    return 0;
}
