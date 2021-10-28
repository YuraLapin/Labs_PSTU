#include <iostream>
#include <clocale>

using namespace std;

int main()
{    
    setlocale(LC_ALL, "Russian");

    int x;
    int a, b, c;   

    cout << "Введите трехзначное число\n";
    cin >> x;

    while ((x < 100) || (x > 999))
    {
        cout << "Введенное число не трехзначное, повторите ввод\n";
        cin >> x;
    }

    a = x / 100;
    b = (x / 10) % 10;
    c = x % 10;

    cout << "\nВсе возможные последовательности чисел:\t";

    cout << a << b << c << "\t";    
    cout << a << c << b << "\t";    
    cout << b << a << c << "\t";    
    cout << b << c << a << "\t";    
    cout << c << a << b << "\t";    
    cout << c << b << a << "\t";

    if ((a > b) && (a > c))
    {
        cout << "\n\nНаибольшее из этих чисел: " << a;

        if (b > c)
        {
            cout << b << c;
        }
        else
        {
            cout << c << b;
        }
    }
    else
    {
        if ((b > a) && (b > c))
        {
            cout << "\n\nНаибольшее из этих чисел: " << b;

            if (a > c)
            {
                cout << a << c;
            }
            else
            {
                cout << c << a;
            }
        }
        else
        {           
            cout << "\n\nНаибольшее из этих чисел: " << c;

            if (b > a)
            {
                cout << b << a;
            }
            else
            {
                cout << a << b;
            }                        
        }
    } 
    return 0;
}