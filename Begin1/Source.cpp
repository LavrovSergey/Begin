#include <iostream>
#include "Header.h"
using namespace std;
void f() {
	cout << "Enter the length of the sides of the square to find perimeter \n";
	int a;
	cin >> a;
	int p = 4 * a;
	cout << "Perimeter=\n" << p;
}