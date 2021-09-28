#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	// Задание 2
	int a, b, c;
	cin >> a >> b >> c;
	int temp = a;
	a = c;
	c = b;
	b = temp;
	cout << "a = " << a << "\nb = " << b << "\nc = " << c;
}
