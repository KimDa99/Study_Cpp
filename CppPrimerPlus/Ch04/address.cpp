// address.cpp -- using the & operator to find address
#include <iostream>

int main()
{
	using namespace std;
	int donuts = 7;
	double cups = 4.5;

	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;

	cout << "cups value = " << cups;
	cout << "and cups address = " << &cups << endl;

	return 0;
}