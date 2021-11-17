#include <iostream>
using namespace std;
#include <string>



int main() {
	//1
	int n;
	cout << "Enter seconds";
	cin >> n;
	cout << "Seconds from the last minute "<< n % 60;
	
	//2
	int k;
	cout << "Enter K: ";
	cin >> k;
	int day = k % 6;
	//cout << day;
	switch (day)
	{
	case 0:
		cout << "Sunday";
		break;
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday ";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	default:
		return -1;
		
	//3
	int k, n;
	cout << "Enter K and N: " << "\n";
	cin >> k >> n;
	int day = k % 7 + n-1;
	//cout << day;
	switch (day)
	{
	case 7:
		cout << "Sunday";
		break;
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday ";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	default:
		return -1;
	}
	
	//4
	cout << "Enter a,b,c" << "\n";
	int a, b, c;
	int count = 0;
	cin >> a >> b >> c;
	int space = a * b;
	while (space - c*c >= 0)
	{
		count++;
		space -= c * c;
	}
	cout << "Squares - " << count << "\nFree space - " << space;

	//5
	string p;
	cout << "Enter year - ";
	cin >> p;
	cout << "Сentury - " << stoi(p.substr(0, 2)) + 1;
}