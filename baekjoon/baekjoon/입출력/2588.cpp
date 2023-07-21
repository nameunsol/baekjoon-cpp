#include<iostream>
using namespace std;

int main()
{
	int n1, n2, a, b, c;
	cin >> n1 >> n2;

	a = n2 / 100;
	b = ( n2 - (a * 100)) / 10;
	c = n2 - ((a * 100) + (b * 10));
	
	int q, w, e, r;
	q = n1 * c;
	w = n1 * b;
	e = n1 * a;
	r = n1 * n2;
	cout << q << endl << w << endl << e << endl << r;
	return 0;
}