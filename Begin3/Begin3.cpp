#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the length of the sides of the rectangle to find perimeter and square\n";
	int a, b;
	cin >> a;
	cin >> b;
	int s = a * b;
	int p = 2*(b + a);
	cout << "Perimrter="<<p<<"\n";
	cout << "Square="<<s<<"\n";
	return 0;
}
