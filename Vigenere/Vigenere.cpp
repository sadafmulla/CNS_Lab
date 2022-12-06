#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s; 
	cout << "\nEnter plain text" << endl; getline(cin, s);
	string x; 
	for (int i = 0; i < s.length(); i++) 
		if (s[i] != ' ')
			x += s[i];
	s = x;
	string k; 
	cout << "\nEnter key" << endl; 
	cin >> k;
	cout << "\nPlain text is: " << s << endl; 
	cout << "\nKey is: " << k << endl;
	int point = 0; int ks = k.size();
	
	for (int i = 0; i < s.length(); i++)
	{
		int val = s[i] - 'a' ; 
		int val2 = k[point] - 'a' ; 
		point = (point + 1) % ks;
		val += val2; 
		val = val % 26; 
		char ch = 'a' + val; s[i] = ch; 
	}
	string cip = s; 
	transform(cip.begin(), cip.end(), cip.begin(), ::toupper); 
	cout << "\nCipher text is: " << cip;
	point = 0; 
	
	for (int i = 0; i < s.length(); i++)
	{
		int val = s[i] - 'a' ; 
		int val2 = k[point] - 'a' ; 
		point = (point + 1) % ks;
		val -= val2; val = (val + 26) % 26;
		char ch = 'a' + val; s[i] = ch;
	} 
	cout << "\n\nPlain text after decreption is : " << s; 
	return 0;
}


