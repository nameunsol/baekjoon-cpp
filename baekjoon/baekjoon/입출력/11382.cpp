#include<iostream>
using namespace std;

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	if (1 <= a&&c <= 10 ^ 12)
	{
		cout << a + b + c;
	}
	return 0;
}