
#include <iostream>
using namespace std;

int main()
{
    //Задача 1
    int a, b, S, P;
    cout << "Enter a!\n";
    cin >> a;
    cout << "Enter b!\n";
    cin >> b;
    S = a * b;
    P = 2 * (a + b);
    cout << "S = " << S << " \nP = " << P;

    //Задача 2
    int d;
    float L;
    cout << "Enter d \n";
    cin >> d;
    L = 3.14 * d;
    cout << "L = " << L;

    //Задача 3
    cout << "Enter a and b"
    cin >> a >> b;
    cout << (float)(a + b) / 2;

    //Задача 4
    cout << "Enter 2 not null number"
    cin >> a >> b;
    cout << a + b << " " << a - b << " " << a * b << " " << (float)(a * a) / (b * b);

    //Задача 5
    cout << "Enter 2 not null number"
    cin >> a >> b;
    cout << a + b << " " << a - b << " " << a * b << " " << (float)abs(a) / abs(b);
}
