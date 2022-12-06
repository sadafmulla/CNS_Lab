#include <iostream>
using namespace std;
int main()
{
	string str; 
	cout << "Enter plain text" << endl; 
	getline(cin, str);
	
	string x; 
	for (int i = 0; i < str.length(); i++) 
		if (str[i] != ' ')
			x += str[i];
		
	str = x;
	int k;
	cout << "\nEnter key" << endl; 
	cin >> k;
	
	cout << "\nPlain text : " << str << endl; 
	cout << "\nKey : " << k << endl; 
	
	for (int i = 0; i < str.length(); i++)
	{ 
		int val = str[i] - 'a'; val = (val + k) % 26; 
		char ch = 'a' + val; str[i] = ch;
	}
	
	cout << "\nCipher text : " << str;
	for (int i = 0; i < str.length(); i++)
	{ 
		int val = str[i] - 'a'; val = (val - k + 26) % 26; 
		char ch = 'a' + val; str[i] = ch;
	}
	cout << "\n\nAfter decription the Plain text : " << str;
	return 0;
}
