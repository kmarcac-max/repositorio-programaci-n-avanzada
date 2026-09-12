#include <iostream>
using namespace std;

int potencia(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return x * potencia(x, n - 1);
    }
}

int main()
{
    int x, n;

    cout << "ingrese la base: ";
    cin >> x;

    cout << "ingrese el exponente: ";
    cin >> n;

    cout << "resultado: " << potencia(x, n);

    return 0;
}
