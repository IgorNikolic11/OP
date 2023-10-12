#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	bool flag;
	cout << "unesi " << true << " - " << false << endl;
	cin >> ws >> flag;
	cout << noboolalpha << flag << endl;
	cout << boolalpha << flag << endl;

	int a = 255;
	cout << "hex " << hex << a << endl;
	cout << "dec " << dec << a << endl;
	cout << "oct " << oct << a << endl;
	cout << endl;

	cout << setfill('x') << setw(15) << endl;;

	double pi = 3.141592;
	cout << "pi = ";
	cout << setprecision(4) << fixed << right << setfill('0');
	cout << pi << endl;
}