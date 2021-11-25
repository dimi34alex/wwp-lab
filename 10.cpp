#include <iostream>
using namespace std;
#include <string>



int main() {
    //Task 1
    int a, b;
    cout << "Enter a and b" << "\n";
    cin >> a >> b;
    if (a > 2 and b <= 3) {
        cout << "A > 2 and B <= 3";
    }
    else {
        cout << "A < 2 and B > 3";
    }
    //Task 2
    int a, b, c;
    cout << "Enter a, b, c" << "\n";
    cin >> a >> b >> c;
    if (a < b and b < c and a < c) {
        cout << "TRUE";
    }
    else {
        cout << "FALSE";
    }
    //Task 3
    cout << "Enter number" << "\n";
    int n;
    cin >> n;
    if (n % 2 == 0 and to_string(n).length() == 2) {
        cout << "TRUE";
    }
    else {
        cout << "FALSE";
    }
    //Task 4
    cout << "Enter a number" << "\n";
    int n;
    cin >> n;
    if (int(to_string(n)[0]) < int(to_string(n)[1]) and int(to_string(n)[1]) < int(to_string(n)[2])) {
        cout << "TRUE";
    }
    else {
        cout << "FALSE";
    }
    //Task 5
    cout << "Enter a number" << "\n";
    int n;
    cin >> n;
    if (int(to_string(n)[0]) == int(to_string(n)[3]) and int(to_string(n)[1]) == int(to_string(n)[2])) {
        cout << "TRUE";
    }
    else {
        cout << "FALSE";
    }
    //Task 6
    cout << "Enter sides" << "\n";
    int a, b, c;
    cin >> a >> b >> c;
    if (c * c == a * a + b * b) {
        cout << "TRUE";
    }
    else {
        cout << "FALSE";
    }
    //Task 7
    cout << "Enter sides" << "\n";
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c and b + c > a and c + a > b) {
        cout << "TRUE";
    }
    else {
        cout << "FALSE";
    }
}

