#include <iostream>
#include <clocale>

using namespace std;

int main()
{    
    float f;
    float c;
    // Объявим переменные

    setlocale(LC_ALL, "Russian");
    // Ввод и вывод кириллицы в консоли

    cout << "Введите температуру в градусах Фаренгейта\n";
    cin >> f;
    // Пользователь вводит температуру в градусах Фаренгейта

    c = (f - 32) * 5 / 9;
    // Температура переводится в градусы Цельсия

    cout << "При переводе в градусы Цельсия это будет " << c;
    // Вывод ответа

    return 0;
}