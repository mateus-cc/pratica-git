#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1;

    cout << "Digite um número para saber se é par ou ímpar: ";
    cin >> num1;

    if (num1 % 2 == 0) {
        cout << "O número é par";
    } else {
        cout << "O número é impar";
    }
}
