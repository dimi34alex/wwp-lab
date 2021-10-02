#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Задача 1
    int x1, y1, x2, y2;
    cout << "Enter x1 and y1 \n";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2 \n";
    cin >> x2 >> y2;
    cout << sqrt((x2 - x1) ^ 2 + (y2 - y1) ^ 2) << "\n";

    //Задача 2
    int a, b, c;
    cout << "Enter A, B, C \n";
    cin >> a >> b >> c;
    cout << "AC = " << c - a << "\nBC = " << c - b << "\nSumm = " << (c - a) + (c - b) << "\n";

    //Задача 3
    cout << "Enter A, C, B \n";
    cin >> a >> c >> b;
    cout << (b - c) * (c - a);

    // Задача 4
    cout << "Enter x1 and y1 \n";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2 \n";
    cin >> x2 >> y2;
    cout << "P = " << 2 * (abs(x1 - x2) + abs(y1 - y2)) << "\n";
    cout << "S = " << abs(x1 - x2) * abs(y1 - y2) << "\n";

    //Задача 5
    int x3, y3;

    cout << "Enter x1 and y1 \n";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2 \n";
    cin >> x2 >> y2;
    cout << "Enter x3 and y3 \n";
    cin >> x3 >> y3;
    a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    cout << "P = " << a + b + c << "\n";
    float p = (a + b + c) / 2;
    cout << "S = " << sqrt(p * (p - a) * (p - b) * (p - c)) << "\n";
    cout << a << "\n" << b << "\n" << c << "\n";
}