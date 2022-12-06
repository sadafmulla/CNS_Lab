#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s; cout << "\nEnter plain text: " << endl; 
	getline(cin, s);
	string x; 
	for (int i = 0; i < s.length(); i++) 
		if (s[i] != ' ')
			x += s[i];
	s = x;
	int kSize; 
	cout << "\nEnter length of key: " << endl;
	cin >> kSize; 
	vector<int> k(kSize); 
	int n = s.size(); 
	
	cout<<"\nEnter key"<<endl;
	for (int i = 0; i < kSize; i++)
		cin >> k[i]; 
	cout << "\nPlain text: " << s << endl;
	vector<vector<char>> mat(kSize + 1); 
	int row = 0;
	

	for (int i = 0; i < s.length(); i++)
	{
		mat[k[row++]].push_back(s[i]); row = row % kSize;
	} 

	string cipher = "";
	
	cout<<"\nReading the text in sequence with respect to key"<<endl;
	for (int i = 0; i <= kSize; i++)
	{
		for (int j = 0; j < mat[i].size(); j++) 
		{
			cout<<mat[i][j];
			cipher += mat[i][j]; 
			
		}
		cout<<endl;
	}
		
			
	cout << "\nCipher text: " << cipher; 

	return 0;
}
