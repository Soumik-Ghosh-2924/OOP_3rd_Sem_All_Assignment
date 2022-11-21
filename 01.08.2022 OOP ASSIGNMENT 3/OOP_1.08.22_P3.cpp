#include <iostream>
#include <string>

using namespace std;

string To_Capitalize(string str) 
{

	for (int i = 0; i<str.length(); i++)
	{
		if (i == 0)
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i - 1] == ' ')
		{
			str[i] = toupper(str[i]);
		}
	}

	return str;
}

int main() 
{
	cout << To_Capitalize("I am currently in second year.");
	cout << "\n" << To_Capitalize("Oop lab is one of our classes.");
	return 0;
}

