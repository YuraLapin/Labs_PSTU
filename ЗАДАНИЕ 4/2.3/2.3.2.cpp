#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    // Вводим 5 переменных для 5 введённых пользователем чисел

    setlocale(LC_ALL, "Russian");
    // Ввод и вывод кириллицы в консоли

    cout << "Введите пять чисел\n";
    cin >> a >> b >> c >> d >> e;
    // Ввод чисел от пользователя

    cout << "\nВот они же, но в обратном порядке: " << e << " " << d << " " << c << " " << b << " " << a << endl;
    // Вывод чисел введённых пользователем, но в обратном порядке

    return 0;
}