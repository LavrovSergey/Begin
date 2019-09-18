#include <iostream>
using namespace std;
int main()
{
	cout << "Enter centimeters to see how many meters it is\n";
	int a;
	cin >> a;
	int b = a / 100;
	cout << "It is"<< b<<" meters";
	return 0;
}