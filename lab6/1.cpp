#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	// Задание 1
	int a, b;
	cout << "Enter a and b \n";
	cin >> a >> b;
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << "\nb = " << b;
}
