// arith.cpp -- some C++ arithmetic
#include <iostream>
int main()
{
	using namespace std;
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield);	//fixed-point - setting form
	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another one: ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;

	return 0;
}