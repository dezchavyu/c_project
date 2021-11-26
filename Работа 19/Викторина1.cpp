#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

// дефолтные значения
int countlive = 3;
int qtyquest = 5;
int qtyhelp = 5;
// _______________
int history[15]{};
int historyanswer[4]{};
int randomquest;
//рандом вопросов и ответов
int random_question = 0;
int random_answer = 0;
//_______________
//очки
int points = 0;
//_____________
//ход
int motion = 0;
//____________
int playeranswer = 0;

string questions[15][5]{ {"Сколько мне лет?","17","9","50","Не знаю"},
                         {"Сколько мне ехать до учебы?", "3 часа","20 минут","7 лет","50 минут"},
                         {"Когда у меня день рождения?", "25.12.2003","24.12.2003","30.01.2003","25.12.2002"},
                         {"Сколько работ я всего сделал?", "18", "Все", "5","3"},
                         {"Какого числа экзамен по программированию?", "27", "15","24", "30"},
                         {"Сколько у нас идет практика?", "Весь декабрь","Весь январь","3 дня","Все лето"},
                         {"В том самом видосе дед говорил про ...", "Обаму", "Байдена","Путина","Не знаю"},
                         {"В каком кабинете проходит программирование?", "407", "310", "53", "26"},
                         {"Во сколько я приезжаю после 4 пар", "В 8 часов", "Раньше, чем они заканчиваются", "Вчера", "В 3 часа"},
                         {"Лучший друг шрека .. это?", "Осел", "Кабан", "Лягушка","Пчела"},
                         {"Про кого мем: Абобус", "Даша Корейка", "Антон", "Геннадий", "Игорь Войтенко"},
                         {"Сколько километров ехать до меня? ", "80", "40", "15", "140"},
                         {"Во сколько времени я доделал эту работу?", "23:17", "10:50", "14:39", "19:55"},
                         {"Сколько всего работ по программированию?", "19", "0", "56", "3"},
                         {"Какой экзамен 30 ноября?", "Сети", "Программирование", "ОСИС", "Философия"} };

void rules() //функция правил
{
    system("cls");
    cout << "[+] Правила \n\n";
    cout << "[1] Вы можете выбрать количество жизней\n";
    cout << "[2] Вы можете выбрать количество подсказок\n";
    cout << "[3] Вы можете выбрать количество вопросов\n";
    cout << "[4] Вам будут давать 4 варианта ответа\n";
    cout << "[5] За каждый правильный ответ вы получаете 1 балл\n";
    cout << "[6] За каждый неправильный ответ у вас будет отниматься одна жизнь\n";
    cout << "[7] При использовании подсказки будут убраны 2 неправильных варианта ответа из четырех\n";
    cout << "[8] При прохождении игры до конца вам покажут сколько баллов вы набрали\n";
    Sleep(10000);
}

int checkrand() { //Различные проверки рандома
    srand(time(0));

    for (int i = 0; i < qtyquest; i++)
    {
        if (countlive == 0)
        {
            return 0;
        }
        system("cls");
        //проверка зарандомленного вопроса
        while (random_question == history[0] || random_question == history[1] || random_question == history[2] || random_question == history[3] || random_question == history[4] || random_question == history[5] || random_question == history[6] ||
            random_question == history[7] || random_question == history[8] || random_question == history[9] || random_question == history[10] || random_question == history[11] || random_question == history[12] || random_question == history[13] ||
            random_question == history[14])
        {
            random_question = rand() % 15;
            random_question++;
        }
        history[i] = random_question;
        cout << "[" << i + 1 << "]" << "  " << questions[random_question - 1][0] << "\n\n";
        for (int l = 0; l < 4; l++)
        {
            historyanswer[l] = 0;
        }
        for (int j = 0; j < 4; j++)
        {

            while (random_answer == historyanswer[0] || random_answer == historyanswer[1] || random_answer == historyanswer[2] || random_answer == historyanswer[3])
            {
                random_answer = rand() % 4;
                random_answer++;
            }
            historyanswer[j] = random_answer;
            cout << j + 1 << ")" << questions[random_question - 1][random_answer] << "\n\n";
        }

        if (qtyhelp > 0) {
            cout << "5) подсказка \n\n";
        }
        cin >> playeranswer;

        if (questions[random_question - 1][1] == questions[random_question - 1][historyanswer[playeranswer - 1]])
        {

            cout << "А ты харош <3 \n";
            points++;
            motion++;
            Sleep(3000);
        }
        else if (playeranswer == 5) //отображение подсказки  
        {
            system("cls");
            random_answer = (rand() % 3) + 2;
            cout << i + 1 << "  " << questions[random_question - 1][0] << "\n\n";
            cout << "1 " << questions[random_question - 1][1] << "\n";
            cout << random_answer << " " << questions[random_question - 1][random_answer] << "\n";
            qtyhelp--;
            cin >> playeranswer;
            while (playeranswer != 1 && playeranswer != random_answer)
            {
                cout << "\nВведите корреткный вариант ответа ! \n";
                cin >> playeranswer;
            }

            if (playeranswer == 1)
            {
                cout << "\nА ты харош <3 \n";
                points++;
                Sleep(3000);
                motion++;
            }
            else {
                countlive--;
                cout << "]\nНеправильно <3 \n";
                cout << "У вас осталось: " << countlive << " жизней \n";
                Sleep(3000);
                motion++;
            }
        }
        else {

            countlive--;
            motion++;
            cout << "\nУ вас осталось: " << countlive << " жизней \n";
            cout << "Вы выбрали не правильный вариант \n";
            Sleep(3000);

        }

        cout << "\n";


        if (motion == qtyquest)
        {
            cout << "\nВы набрали: " << points << " очков \n";
            return 0;
        }
    }
}            // функция рандомит массив и проверяет на повторения


void game() //функция игры
{

    srand(time(0));
    checkrand();
}

void setting() { //функция настроек
    cout << "[!] Настройки \n\n";
    cout << "[1] Количество жизней \n";
    cout << "[2] Количество вопросов \n";
    cout << "[3] Подсказки \n";
    cout << "[4] Выйти \n";
    int choise = 0;
    cin >> choise;
    switch (choise) //настройки
    {
    case 1: //жизни 
    {
        system("cls");
        cout << "[1] 1 жизнь \n";
        cout << "[2] 3 жизни \n";
        cout << "[3] 5 жизней \n";
        int menu2 = 0;
        cin >> menu2;
        if (menu2 == 1) {
            countlive = 1;
        }
        else if (menu2 == 2) {
            countlive = 3;
        }
        else if (menu2 == 3) {
            countlive = 5;
        }
    }
    break;
    case 2: //вопросы 
    {
        system("cls");
        cout << "[1] 5 вопросов \n";
        cout << "[2] 10 вопросов \n";
        cout << "[3] 15 вопросов \n";
        int menu2;
        cin >> menu2;
        if (menu2 == 1) {
            qtyquest = 5;
        }
        else if (menu2 == 2) {
            qtyquest = 10;
        }
        else if (menu2 == 3) {
            qtyquest = 15;
        }
    }
    break;
    case 3: //подсказки
    {
        system("cls");
        cout << "[1] 1 подсказка \n";
        cout << "[2] 5 подсказок \n";
        cout << "[3] 10 подсказок \n";
        int menu2;
        cin >> menu2;
        if (menu2 == 1) {
            qtyhelp = 1;
        }
        else if (menu2 == 2) {
            qtyhelp = 5;
        }
        else if (menu2 == 3) {
            qtyhelp = 10;
        }
    }
    break;
    }
}

int main() //главная функция
{
    setlocale(0, "");
    while (true)
    {
        system("cls");
        cout << "[+] Викторина: \n";
        cout << "\n";
        int menu = 0;
        cout << "[1] Играть \n";
        cout << "[2] Настройки \n";
        cout << "[3] Правила \n";
        cout << "[4] Выйти \n";
        cin >> menu;
        switch (menu) {
        case 1:
            system("cls");
            game();
            return 0;
            break;
        case 2:
            system("cls");
            setting();
            break;
        case 3:
            system("cls");
            rules();
            break;
        case 4:
            exit(0);
            break;
        default:
            system("cls");
            cout << "Dыберите существующую цифру <3";
        }
    }
}