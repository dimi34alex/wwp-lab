#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	// Задание 7
	int a, b, c;
	cout << "Enter a \n";
	cin >> a;
	b = pow(a, 3);
	c = pow(a, 4);
	cout << "a^15 = " << b * c * b * a * b * a;
}