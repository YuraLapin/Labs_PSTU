#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    int a;
    int b;
    // Объявляем две переменные для двух чисел, которые введёт пользователь

    setlocale(LC_ALL, "Russian");
    // Ввод и вывод кириллицы в консоли

    cout << "Введите два числа\n";
    cin >> a >> b;
    // Получаем от пользователя два числа

    cout << "\nПроизведение введённых чисел равно " << a * b;
    // Выводим произведение двух введённых пользователем чисел

    return 0;
}