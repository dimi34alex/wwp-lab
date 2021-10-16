#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	// Задание 7
	int a, b, c;
	cout << "Enter a";
	cin >> a;
	b = pow(a, 3);
	c = pow(a, 5);
	cout << "a^15 = " << b * b * b * c * a;
}
