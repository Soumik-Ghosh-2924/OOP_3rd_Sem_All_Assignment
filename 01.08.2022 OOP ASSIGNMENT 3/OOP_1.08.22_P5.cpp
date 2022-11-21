#include<bits/stdc++.h>
using namespace std;

void sortString(string str)
{
	sort(str.begin(), str.end());
	cout << str;
}

// Driver program to test above function
int main()
{
	string s = "SOUMIKHOSH";
	sortString(s);
	return 0;
}

