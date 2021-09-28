#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	// Задание 3
	int a, b, c;
	cin >> a >> b >> c;
	int temp = c;
	c = a;
	a = b;
	b = temp;
	cout << "a = " << a << "\nb = " << b << "\nc = " << c;
}
