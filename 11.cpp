/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#include <string>



int main() {
    //Task 1
    cout << "Enter a and b" << "\n";
    int a, b;
    cin >> a >> b;
    if (a == b) {
        a = 0;
        b = 0;
        cout << a << " " << b;
    }
    else if (a >= b) {
        b = a;
        cout << a << " " << b;
    }
    else {
        a = b;
        cout << a << " " << b;
    }
    //Task 2
    cout << "Enter a and b and c" << "\n";
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Summ 2 max" << a + b + c - min(min(a, b), c);

    //Task 3
    cout << "Enter point a and b and c" << "\n";
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    if (sqrt(pow(xa-xb,2)+pow(ya-yb,2)) < sqrt(pow(xa-xc,2)+pow(ya-yc,2))) {
        cout << "Point B. Distance: " << sqrt(pow(xa-xb,2)+pow(ya-yb,2));
    }
    else {
        cout << "Point C. Distance: " << sqrt(pow(xa-xc,2)+pow(ya-yc,2));
    }
    //Task 4
    cout << "Enter point x and y" << "\n";
    int x, y;
    cin >> x >> y;
    if (x > 0 and y > 0) {
        cout << "It's I quarter";
    }
    else if (x < 0 and y > 0) {
        cout << "It's II quarter";
    }
    else if (x < 0 and y < 0) {
        cout << "It's III quarter";
    }
    else {
        cout << "It's IV quarter";
    }
    //Task 5
    cout << "Введите число" << "\n";
    int n;
    cin >> n;
    if (n < 0 and n % 2 == 0) {
        cout << "Отрицательное четное число" << "\n";
    }
    else if (n == 0) {
        cout << "Нулевое число";
    }
    else if (n > 0 and n % 2 != 0) {
        cout << "Положительное нечетное число";
    }
    else {
        cout << "Нет подходящего описания";
    }
    //Task 6
    cout << "Введите число" << "\n";
    int n;
    cin >> n;
    if (n % 2 == 0 and to_string(n).length() == 1) {
        cout << "Однозначное четное число" << "\n";
    }
    else if (n % 2 == 1 and to_string(n).length() == 1) {
        cout << "Однозначное нечетное число";
    }
    else if (n % 2 == 0 and to_string(n).length() == 2) {
        cout << "Двузначное четное число";
    }
    else if (n % 2 == 1 and to_string(n).length() == 2) {
        cout << "Двузначное нечетное число";
    }
    else if (n % 2 == 0 and to_string(n).length() == 3) {
        cout << "Трехзначное четное число";
    }
    else if (n % 2 == 1 and to_string(n).length() == 3) {
        cout << "Трехзначное нечетное число";
    }
    else {
        cout << "Нет подходящего описания";
    }
}
