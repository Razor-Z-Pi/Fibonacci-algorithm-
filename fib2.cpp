#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Числа Фибоначи" << endl;

    int n = 0, a = 1, b = 1, c = 0;
    cout << "Введите число Фибанчи = ";
    cin >> n;

    if (n <= 2)
    {
        cout << 1;
    }
    else
    {
        for (int i = 3; n >= i; i++)
        {
            c = (a + b) % 10;
            a = b;
            b = c;
        }
        cout << c;
    }

    return 0;
}
