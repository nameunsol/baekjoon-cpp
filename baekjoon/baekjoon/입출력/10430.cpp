#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d, A, B, C;
	cin >> A >> B >> C;
	a = (A + B) % C;
	b = ((A % C) + (B % C)) % C;
	c = (A*B) % C;
	d = ((A % C) *(B % C)) % C;
	cout << a << endl << b << endl << c << endl << d;
	return 0;
}