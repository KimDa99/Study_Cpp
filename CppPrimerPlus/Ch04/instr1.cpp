//instr1.cpp -- reading more than one string
#include <iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your favorite name: \n";
	cin >> name;
	cout << "Enter your favorite Dessert: \n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}