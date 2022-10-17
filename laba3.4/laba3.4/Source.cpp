#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if ((y <= R + sqrt(R*R +(x - R)) && y >= 0 && x <= 0) ||
		(y <= -R + sqrt(R*R + (x + R) (x + R)) && x >= 0 && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}