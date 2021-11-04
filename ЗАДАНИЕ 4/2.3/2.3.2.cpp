#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    char a;
    char b;
    char c;
    char d;
    char e;
    // Вводим 5 переменных для 5 введённых пользователем символов

    setlocale(LC_ALL, "Russian");
    // Ввод и вывод кириллицы в консоли

    cout << "Введите пять символов\n";
    cin >> a >> b >> c >> d >> e;
    // Ввод символов от пользователя

    cout << "\nВот они же, но в обратном порядке: " << e << " " << d << " " << c << " " << b << " " << a << endl;
    // Вывод символов введённых пользователем, но в обратном порядке

    return 0;
}