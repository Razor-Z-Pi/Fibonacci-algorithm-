#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Числа Фибоначи!!!\n";
    int n = 0, a = 1, b = 1, c = 0;

    cout << "Введите число фибоначи n = ";
    cin >> n;
    
    if (n <= 2)
    {
        cout << c << " " << 1 << " ";
        if (n == 2)
            cout << 1;
    }
    else 
    {
        cout << c << " " << a << " " << b << " ";
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    }

    return 0;
}
