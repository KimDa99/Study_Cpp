// strtype3.cpp -- more string class features
#include <iostream>
#include <string>		// make string class available
#include <cstring>		// C-style string library (strcpy, strcat)
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	//assignment for string objects and character arrays
	str1 = str2;
	strcpy_s(charr1, charr2);

	//appending for string objects and character arrays
	str1 += " paste";
	strcat_s(charr1, " juice");

	// finding the length of a strign object and a C-styple string
	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains "
		<< len1 << " characters.\n";
	cout << "The string " << charr1 << " contains "
		<< len2 << " characters.\n";
	
	return 0;
}