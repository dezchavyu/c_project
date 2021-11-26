#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;
const int SIZE3 = 3;
const int SIZE4 = 4;
const int SIZE5 = 5;
int flag = 3;           // значение размера массива
int gamemode = 1;
int playerx;
int playery;
int win = 0;
int countmotion3 = 9;
int countmotion4 = 16;
int countmotion5 = 25;
int botchoosy;
int botchoosx;
int color;          // цвет крестика
int colorx = 0;
int coloro = 0;
int motion = 2;  // переменная ход

int massive3[3][3]{};

int massive4[4][4]{ {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0} };

int massive5[5][5]{ {0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0},
                    {0,0,0,0,0} };

void showmas() {
    for (int i = 0; i < flag; i++) {
        for (int j = 0; j < flag; j++) {
            cout << massive3[i][j];
        }
        cout << "\n";
    }
}

void masforplayer3() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (massive3[i][j] == 0) {
                cout << "* ";
            }
            else if (massive3[i][j] == 1) {
                cout << "\x1b[" << colorx << "mx\x1b[0m ";
            }
            else if (massive3[i][j] == 2) {
                cout << "\x1b[" << coloro << "mo\x1b[0m ";
            }
        }
        cout << endl;
    }
}

void showmas4() {
    for (int i = 0; i < flag; i++) {
        for (int j = 0; j < flag; j++) {
            cout << massive4[i][j];
        }
        cout << "\n";
    }
}

void masforplayer4() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (massive4[i][j] == 0) {
                cout << "* ";
            }
            else if (massive4[i][j] == 1) {
                //cout << "x ";
                cout << "\x1b[" << colorx << "mx\x1b[0m ";
            }
            else if (massive4[i][j] == 2) {
                //cout << "0 ";
                cout << "\x1b[" << coloro << "mo\x1b[0m ";
            }
        }
        cout << "\n";
    }
}

void masforplayer5() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (massive5[i][j] == 0) {
                cout << "* ";
            }
            else if (massive5[i][j] == 1) {
                cout << "\x1b[" << colorx << "mx\x1b[0m ";
            }
            else if (massive5[i][j] == 2) {
                cout << "\x1b[" << coloro << "mo\x1b[0m ";
            }
        }
        cout << "\n";
    }
}

void showmas5() {
    for (int i = 0; i < flag; i++) {
        for (int j = 0; j < flag; j++) {
            cout << massive5[i][j];
        }
        cout << "\n";
    }
}

int setcolor() {
    system("cls");
    cout << "выберите цвет \n";
    cout << "1 - красный \n 2 - синий \n 3 - зеленый \n 4 - желтый \n";
    cin >> color;
    if (color == 1)
    {
        color = 91;
        return color;
    }
    else if (color == 2)
    {
        color = 94;
        return color;
    }
    else if (color == 3)
    {
        color = 92;
        return color;
    }
    else if (color == 4)
    {
        color = 93;
        return color;
    }
}

void checkwin3()
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j != 0 && j != 2 && (massive3[i][j] == 1 && massive3[i][j - 1] == 1 && massive3[i][j + 1] == 1)) { //победа крестов по горизонтали
                cout << "победа крестов \n";
                win = 1;
                masforplayer3();
            }
            else if (i != 0 && i != 2 && (massive3[i][j] == 1 && massive3[i - 1][j] == 1 && massive3[i + 1][j] == 1)) {   // победа крестов по вертикали
                cout << "победа крестов \n";
                win = 1;
                masforplayer3();
            }
            else if (i != 0 && i != 2 && j != 0 && j != 2 && (massive3[i][j] == 1 && massive3[i - 1][j - 1] == 1 && massive3[i + 1][j + 1] == 1)) { //проверка для крестиков по диагонали слева направо
                cout << "победа крестов \n";
                win = 1;
                masforplayer3();
            }
            else if (i != 0 && i != 2 && j != 0 && j != 2 && (massive3[i][j] == 1 && massive3[i - 1][j + 1] == 1 && massive3[i + 1][j - 1] == 1)) { //проверка для крестиков по диагонали справа налево
                cout << "победа крестов \n";
                win = 1;
                masforplayer3();
            }
            else if (j != 0 && j != 2 && (massive3[i][j] == 2 && massive3[i][j - 1] == 2 && massive3[i][j + 1] == 2)) {        //проверка для ноликов по горизонтали
                cout << "победа крестов \n";
                win = 1;
                masforplayer3();
            }
            else if (i != 0 && i != 2 && (massive3[i][j] == 2 && massive3[i - 1][j] == 2 && massive3[i + 1][j] == 2)) {        //проверка для ноликов по вертикали
                cout << "победа крестов \n";
                win = 1;
                masforplayer3();
            }
            else if (i != 0 && i != 2 && j != 0 && j != 2 && (massive3[i][j] == 2 && massive3[i - 1][j - 1] == 2 && massive3[i + 1][j + 1] == 2)) { //проверка для ноликов по диагонали слева направо
                cout << "победа крестов \n";
                win = 1;
                masforplayer3();
            }
            else if (i != 0 && i != 2 && j != 0 && j != 2 && (massive3[i][j] == 2 && massive3[i - 1][j + 1] == 2 && massive3[i + 1][j - 1] == 2)) { //проверка для ноликов по диагонали справа налево
                cout << "победа крестов \n";
                win = 1;
                masforplayer3();
            }
            else if (countmotion3 == 0) {
                cout << "Ничья \n";
                win = 1;
                masforplayer3();
            }
        }
    }
}

void checkwin4() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j != 0 && j != 3 && (massive4[i][j] == 1 && massive4[i][j - 1] == 1 && massive4[i][j + 1] == 1)) {        //проверка для крестов по горизонтали
                cout << "победа крестов \n";
                win = 1;
                masforplayer4();
            }
            else if (i != 0 && i != 3 && (massive4[i][j] == 1 && massive4[i - 1][j] == 1 && massive4[i + 1][j] == 1)) {     // проверка для крестов по вертикали
                cout << "победа крестов \n";
                win = 1;
                masforplayer4();
            }

            else if (j != 0 && j != 3 && (massive4[i][j] == 2 && massive4[i][j - 1] == 2 && massive4[i][j + 1] == 2)) {        //проверка для ноликов по горизонтали
                cout << "победа крестов \n";
                win = 1;
                masforplayer4();
            }
            else if (i != 0 && i != 3 && (massive4[i][j] == 2 && massive4[i][j - 1] == 2 && massive4[i][j + 1] == 2)) {        //проверка для ноликов по вертикали
                cout << "победа крестов \n";
                win = 1;
                masforplayer4();
            }
            else if (i != 0 && i != 3 && j != 0 && j != 3 && (massive4[i][j] == 1 && massive4[i - 1][j - 1] == 1 && massive4[i + 1][j + 1] == 1)) { //проверка для крестиков по диагонали слева направо
                cout << "победа крестов \n";
                win = 1;
                masforplayer4();
            }
            else if (i != 0 && i != 3 && j != 0 && j != 3 && (massive4[i][j] == 1 && massive4[i - 1][j + 1] == 1 && massive4[i + 1][j - 1] == 1)) { //проверка для крестиков по диагонали справа налево
                cout << "победа крестов \n";
                win = 1;
                masforplayer4();
            }
            else if (i != 0 && i != 3 && j != 0 && j != 3 && (massive4[i][j] == 2 && massive4[i - 1][j - 1] == 2 && massive4[i + 1][j + 1] == 2)) { //проверка для ноликов по диагонали слева направо
                cout << "победа крестов \n";
                win = 1;
                masforplayer4();
            }
            else if (i != 0 && i != 3 && j != 0 && j != 3 && (massive4[i][j] == 2 && massive4[i - 1][j + 1] == 2 && massive4[i + 1][j - 1] == 2)) { //проверка для ноликов по диагонали справа налево
                cout << "победа крестов \n";
                win = 1;
                masforplayer4();
            }
            else if (countmotion4 == 0) {
                cout << "Ничья \n";
                win = 1;
                masforplayer4();
            }
        }
    }
}

void checkwin5() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j != 0 && j != 4 && (massive5[i][j] == 1 && massive5[i][j - 1] && massive5[i][j + 1] == 1)) {          // победа крестов по горизонтали
                cout << "победа крестов \n";
                win = 1;
                masforplayer5();
            }
            else if (i != 0 && i != 4 && (massive5[i][j] == 1 && massive5[i - 1][j] == 1 && massive5[i + 1][j] == 1)) {    // победа крестов по вертикали
                cout << "победа крестов \n";
                win = 1;
                masforplayer5();
            }
            else if (i != 0 && i != 4 && j != 0 && j != 4 && (massive5[i][j] == 1 && massive5[i - 1][j - 1] == 1 && massive5[i + 1][j + 1] == 1)) {   // победа крестов по диагонали слева направо 
                cout << "победа крестов \n";
                win = 1;
                masforplayer5();
            }
            else if (i != 0 && i != 4 && j != 0 && j != 4 && (massive5[i][j] == 1 && massive5[i - 1][j + 1] == 1 && massive5[i + 1][j - 1] == 1)) {  // победа крестов по диагонали справа налево
                cout << "победа крестов \n";
                win = 1;
                masforplayer5();
            }
            if (j != 0 && j != 4 && (massive5[i][j] == 2 && massive5[i][j - 1] && massive5[i][j + 1] == 2)) {        // победа ноликов по горизонтали
                cout << "победа крестов \n";
                win = 1;
                masforplayer5();
            }
            else if (i != 0 && i != 4 && (massive5[i][j] == 2 && massive5[i - 1][j] && massive5[i + 1][j] == 2)) { // победа ноликов по вертикали
                cout << "победа крестов \n";
                win = 1;
                masforplayer5();
            }
            else if (i != 0 && i != 4 && j != 0 && j != 4 && (massive5[i][j] == 2 && massive5[i - 1][j - 1] == 2 && massive5[i + 1][j + 1] == 2)) {     //победа ноликов по диагонали слева направо 
                cout << "победа крестов \n";
                win = 1;
                masforplayer5();
            }
            else if (i != 0 && i != 4 && j != 0 && j != 4 && (massive5[i][j] == 2 && massive5[i - 1][j + 1] == 2 && massive5[i + 1][j - 1] == 2)) {   // победа ноликов по диагонали справа налево
                cout << "победа крестов \n";
                win = 1;
                masforplayer5();
            }
            else if (countmotion5 == 0) {
                cout << "Ничья \n";
                win = 1;
                masforplayer5();
            }
        }
    }
}

void game() {
    srand(time(0));
    int motion = 2;

    short endgame = 0;

    switch (flag)
    {
    case 3:
    {
        while (win == 0)
        {
            system("cls");
            masforplayer3();
            if (motion % 2 == 0)
            {
                cout << "ход первого игрока \n";
                cout << "ход крестика \n";

                cout << "введите номер строки в которой вы хотите поставить свой сивол \n";
                cin >> playery;
                while ((playery < 1 || playery > 3))
                {
                    cout << "введите номер строки в которой вы хотите поставить свой символ \n";
                    cin >> playery;
                }
                cout << "введите номер столбца в который вы хотите поставить свой символ \n";
                cin >> playerx;
                while ((playerx < 1 || playerx > 3))
                {
                    cout << "введите номер столбца в который вы хотите поставить свой символ \n";
                    cin >> playerx;
                }
                while (massive3[playery - 1][playerx - 1] != 0)
                {
                    cout << "ты попал в просак, попробуй снова \n";
                    cout << "введите номер строки в которой вы хотите поставить свой символ \n";
                    cin >> playery;
                    cout << "введите номер столбца в котором вы хотите поставить свой символ \n";
                    cin >> playerx;
                }

                massive3[playery - 1][playerx - 1] = 1;
                motion++;
                countmotion3--;
                checkwin3();
            }


            else if (motion % 2 != 0 && gamemode == 0) {                    // ход второго игрока
                cout << "ход второго игрока" << endl;
                cout << "ход нолика" << endl;


                cout << "введите номер строки в которой вы хотите поставить свой символ" << endl;
                cin >> playery;
                while ((playery < 1 || playery > 3)) {
                    cout << "введите номер строки в которой вы хотите поставить свой символ" << endl;
                    cin >> playery;
                }
                cout << "введите номер столбца в который вы хотите поставить свой символ" << endl;
                cin >> playerx;
                while ((playerx < 1 || playerx > 3)) {
                    cout << "введите номер столбца в который вы хотите поставить свой символ" << endl;
                    cin >> playerx;
                }

                while (massive3[playery - 1][playerx - 1] != 0) {                    // проверка на доступность клетки
                    cout << "ты попал в просак, попробуй снова " << endl;
                    cout << "введите номер строки в которой вы хотите поставить свой символ" << endl;
                    cin >> playery;
                    cout << "введите номер столбца в котором вы хотите поставить свой символ" << endl;
                    cin >> playerx;
                }

                massive3[playery - 1][playerx - 1] = 2;
                motion++;
                countmotion3--;
                checkwin3();
            }
            else if (motion % 2 != 0 && gamemode == 1) {                  // игра с ботом
                cout << "ход компьютера" << endl;
                botchoosy = rand() % 3;
                botchoosx = rand() % 3;
                while (massive3[botchoosy][botchoosx] != 0) {           // проверка на доступность клетки
                    botchoosy = rand() % 3;
                    botchoosx = rand() % 3;
                }
                massive3[botchoosy][botchoosx] = 2;
                motion++;
                countmotion3--;
                checkwin3();
            }
        }
    }

    case 4: {                                // игра с полем 4*4
        while (win == 0) {
            system("cls");
            masforplayer4();
            if (motion % 2 == 0) {                                       // ход 1 игрока
                cout << "ход первого игрока" << endl;
                cout << "ход крестика" << endl;


                cout << "введите номер строки в которой хотите поставить свой символ" << endl;
                cin >> playery;
                while ((playery < 1 || playery > 4) and !cin) {
                    cout << "введите номер строки в которой вы хотите поставить свой символ" << endl;
                    cin >> playery;
                }
                cout << "введите номер столбца  в которой вы хотите поставить свой символ" << endl;
                cin >> playerx;
                while ((playerx < 1 || playerx > 4)) {
                    cout << "введите номер столбца в которой вы хотите поставить свой символ" << endl;
                    cin >> playerx;
                }
                while (massive4[playery - 1][playerx - 1] != 0) {                    // проверка на доступность клетки
                    cout << "ты попал в просак, попробуй снова " << endl;
                    cout << "введите номер строки в которой вы хотите поставить свой символ" << endl;
                    cin >> playery;
                    cout << "введите номер столбца в котором вы хотите поставить свой символ" << endl;
                    cin >> playerx;
                }
                massive4[playery - 1][playerx - 1] = 1;
                motion++;
                countmotion4--;
                checkwin4();
            }

            else if (motion % 2 != 0 && gamemode == 0) {                       // ход 2 игрока

                cout << "ход второго игрока" << endl << endl;
                cout << "ход нолика" << endl << endl;


                cout << "введите номер строки в которой хотите поставить свой символ" << endl;
                cin >> playery;
                while ((playery < 1 || playery > 4)) {
                    cout << "введите номер строки в которой вы хотите поставить свой символ" << endl;
                    cin >> playery;
                }
                cout << "введите номер столбца  в которой вы хотите поставить свой символ" << endl;
                cin >> playerx;
                while ((playerx < 1 || playerx > 4)) {
                    cout << "введите номер столбца в которой вы хотите поставить свой символ" << endl;
                    cin >> playerx;
                }
                while (massive4[playery - 1][playerx - 1] != 0) {                    // проверка на доступность клетки
                    cout << "ты попал в просак, попробуй снова " << endl;
                    cout << "введите номер строки в которой вы хотите поставить свой символ" << endl;
                    cin >> playery;
                    cout << "введите номер столбца в котором вы хотите поставить свой символ" << endl;
                    cin >> playerx;
                }
                massive4[playery - 1][playerx - 1] = 2;
                motion++;
                countmotion4--;
                checkwin4();
            }
            else if (motion % 2 != 0 && gamemode == 1) {            // игра с ботом
                cout << "ход компьютера" << endl;
                botchoosy = rand() % 4;
                botchoosx = rand() % 4;
                while (massive4[botchoosy][botchoosx] != 0) {           // проверка на доступность клетки
                    botchoosy = rand() % 4;
                    botchoosx = rand() % 4;
                }
                massive4[botchoosy][botchoosx] = 2;
                motion++;
                countmotion4--;
                checkwin4();
            }
        }
    }
    case 5: {                         // игра с полем 5*5
        while (win == 0) {
            system("cls");
            masforplayer5();
            if (motion % 2 == 0) {
                cout << "ход первого игрока" << endl;                         // 1 игрок
                cout << "введите номер строки в которой хотите поставить свой символ" << endl;
                cin >> playery;
                while (playery < 1 || playery > 5) {
                    cout << "введите номер строки в которой вы хотите поставить свой символ" << endl;
                    cin >> playery;
                }
                cout << "введите номер столбца  в которой вы хотите поставить свой символ" << endl;
                cin >> playerx;
                while ((playerx < 1 || playerx > 5)) {
                    cout << "введите номер столбца в которой вы хотите поставить свой символ" << endl;
                    cin >> playerx;
                }
                while (massive5[playery - 1][playerx - 1] != 0) {                    // проверка на доступность клетки
                    cout << "ты попал в просак, попробуй снова " << endl;
                    cout << "введите номер строки в которой вы хотите поставить свой символ" << endl;
                    cin >> playery;
                    cout << "введите номер столбца в котором вы хотите поставить свой символ" << endl;
                    cin >> playerx;
                }
                massive5[playery - 1][playerx - 1] = 1;
                motion++;
                countmotion5--;
                checkwin5();
            }

            else if (motion % 2 != 0 && gamemode == 0) {

                cout << "ход второго игрока" << endl;                         // 2 игрок
                cout << "ход нолика" << endl;                         // 2 игрок

                cout << "введите номер строки в которой хотите поставить свой символ" << endl;
                cin >> playery;
                while (playery < 1 || playery > 5) {
                    cout << "введите номер строки в которой вы хотите поставить свой символ" << endl;
                    cin >> playery;
                }
                cout << "введите номер столбца  в которой вы хотите поставить свой символ" << endl;
                cin >> playerx;
                while ((playerx < 1 || playerx > 5)) {
                    cout << "введите номер столбца в которой вы хотите поставить свой символ" << endl;
                    cin >> playerx;
                }
                while (massive5[playery - 1][playerx - 1] != 0) {                    // проверка на доступность клетки
                    cout << "ты попал в просак, попробуй снова " << endl;
                    cout << "введите номер строки в которой вы хотите поставить свой символ" << endl;
                    cin >> playery;
                    cout << "введите номер столбца в котором вы хотите поставить свой символ" << endl;
                    cin >> playerx;
                }
                massive5[playery - 1][playerx - 1] = 2;
                motion++;
                countmotion5--;
                checkwin5();
            }
            else if (motion % 2 != 0 && gamemode == 1) {            // игра с ботом
                cout << "ход компьютера" << endl;
                botchoosy = rand() % 5;
                botchoosx = rand() % 5;
                while (massive5[botchoosy][botchoosx] != 0) {           // проверка на доступность клетки
                    botchoosy = rand() % 5;
                    botchoosx = rand() % 5;
                }
                massive5[botchoosy][botchoosx] = 2;
                motion++;
                countmotion5--;
                checkwin5();
            }
        }
    }
    }
}

void setting()
{
    cout << "введите размер поля (3 - 3х3; 4 - 4х4; 5 - 5х5)\n для возврата нажмите 1 \n";
    short sizem;
    cin >> sizem;
    while (sizem != 1 && sizem != 3 && sizem != 4 && sizem != 5)
    {
        cout << "карапитек, введи 1/3/4/5 \n";
        cin >> sizem;
    }
    cout << "выберите цвет крестика: \n";
    setcolor();
    colorx = color;
    color = 0;
    cout << "выберите цвет нолика \n";
    setcolor();
    coloro = color;
    cout << "если вы хотите играть с компьютером, нажмите 1, если вы хотите играть друг с другом, нажмите 0 \n";
    cin >> gamemode;

    cout << "если вы хотите чтобы первым ходил нолик нажмите 1, если первый ходит крестик - 2 \n";
    cin >> motion;

    switch (sizem)
    {
    case 3:
        flag = 3;
        break;
    case 4:
        flag = 4;
        break;
    case 5:
        flag = 5;
        break;
    default:
        system("cls");
        cout << "Выберите корректное значение <3";
        break;
    }
}
void rules()
{
    short test;
    cout << "вы карапитек? [1 - да; 0 - нет] \n";
    cin >> test;
    while (test != 1 && test != 0) {
        cout << "вы 100 процентный карапитек \n";
        /* cout << "итак вы хотите увидеть правила? (введите 1 или 2)" << endl;
         cin >> test;*/
        test = 1;
    }
    if (test == 1) {
        cout << "Играют 2 игрока, 1 рисует крестики, второй нолики, ходят друг за другом\n игра ведется пока 1 из игроков не поставит в ряд (по горизонтали/диагонали/вертикали) 3 своих значка \n";
    }
    else if (test == 0) {
        cout << "Вы знаете правила этой игры, вы же не карапитек \n";
    }
    else {
        cout << "bruh";
    }
    short bruh;
    cout << "для продолжения нажмите на 1 \n";
    cin >> bruh;
}
int main()
{
    setlocale(0, "");
    while (true) {
        system("cls");
        cout << "Меню \n";
        cout << "1. Начать игру \n";
        cout << "2. Настройки \n";
        cout << "3. Правила \n";
        cout << "4. Выйти \n";
        short menu = 0;
        cin >> menu;

        switch (menu)
        {
        case 1:
            system("cls");
            game();
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
            system("cls");
            exit(0);
            break;
        default:
            break;
        }

    }
}