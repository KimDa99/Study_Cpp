// bondini.cpp -- using excape sequences
#include <iostream>
int main()
{
	using namespace std;

	cout << "\aOperation \"HyperHype\" is now activated! \n";
	cout << "Enter your agent code: ___\b\b\b";

	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Preceed with PlanZ3!\n";

	return 0;
}