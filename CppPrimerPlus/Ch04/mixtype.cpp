// mixtype.cpp -- some type combination
#include <iostream>

struct antarctica_year_end
{
	int year;
};

int main()
{
	using namespace std;

	antarctica_year_end s01, s02, s03;
	s01.year = 1998;
	antarctica_year_end* pa = &s02;
	pa->year = 1999;

	antarctica_year_end trio[3];
	trio[0].year = 2003;
	cout << trio->year << endl;		// accessing first elemenet's member through '->'
									// name of the array is pointer.
	const antarctica_year_end* arp[3] = { &s01, &s02, &s03 };
	cout << arp[1]->year << endl;

	const antarctica_year_end** ppa = arp;
	auto ppb = arp;

	cout << (*ppa)->year << endl;
	cout << (*(ppb + 1))->year << endl;

	return 0;
}