//p no = 23
//pr root = 9
//a pr key = 7
//b pr key = 3


#include <cmath>
#include <iostream>
using namespace std;

// Power function to return value of a ^ b mod P
long long int power(long long int a, long long int b,
					long long int P)
{
	if (b == 1)
		return a;

	else
		return (((long long int)pow(a, b)) % P);
}

int main()
{
	long long int P, G, x, a, y, b, ka, kb;

//	P = 23; 
	cout<<"Enter the Prime Number: ";
	cin>>P;
	
//	G = 9; 
	cout<<"Enter the Primitive Root: ";
	cin>>G;
	
//	a = 4; 
	cout<<"Enter Alice Private Key: ";
	cin>>a;
	
//	b = 3; 
	cout<<"Enter Bob Private Key: ";
	cin>>b;
	
	cout<<"\nDiffie-Hellmen Key Exchnage Algorithm\t\n";
	
	cout << "The value of P : " << P << endl;
	
	cout << "The value of G : " << G << endl;

	cout << "The private key a for Alice : " << a << endl;

	x = power(G, a, P); // gets the generated key

	cout << "The private key b for Bob : " << b << endl;

	y = power(G, b, P); // gets the generated key

	// Generating the secret key after the exchange
	// of keys
	ka = power(y, a, P); // Secret key for Alice
	kb = power(x, b, P); // Secret key for Bob
	cout << "Secret key for the Alice is : " << ka << endl;

	cout << "Secret key for the Bob is : " << kb << endl;

	return 0;
}