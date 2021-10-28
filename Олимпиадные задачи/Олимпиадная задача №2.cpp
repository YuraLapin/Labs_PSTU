#include <iostream>
#include <clocale>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int attempts;
    int num;
    int usr_ans;
    bool flag = false;

    attempts = 7;

    srand(time(NULL));
    num = rand() % 100 + 1;     

    cout << "Попробуйте угадать загаданное число. У вас " << attempts << " попыток.\n";    

    while (attempts > 0)
    {   
        cin >> usr_ans;

        attempts--;

        if (usr_ans > num)
        {            
            cout << "Загаданное число меньше.";
        }
        if (usr_ans < num)
        {            
            cout << "Загаданное число больше.";
        }
        if (usr_ans == num)
        {
            cout << "Вы угадали! Число было равно " << num << ".";
            flag = true; 
            attempts = 0;
        }        
        else if (attempts != 0)
        {
            cout << " Попыток осталось " << attempts << "\n";
        }
    }
    if (flag == false)
    {
        cout << "\nВы не угадали! Число было равно " << num << ". Попытки кончились.\n";
    }  
    return 0;
}