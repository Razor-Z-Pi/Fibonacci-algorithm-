#include <iostream>

using namespace std;


int NOD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return NOD(b, a % b);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Числа Фибоначи" << endl;

    int a = 0, b = 0;
    cout << "Введите число a = ";
    cin >> a;
    cout << "Введите число b = ";
    cin >> b;

    cout << NOD(a,b);

    return 0;
}
