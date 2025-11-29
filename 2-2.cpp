#include<iostream>
using namespace std;
int main()
{
	int  x, y;
	cin >> x;
	if (0 < x < 1)
	{
		y == 3 - 2 * x;
		cout << y << endl;
	}
	else if (1 <= x < 5)
	{
		y ==1 / 2 / x + 1;
		cout << y << endl;
	}
	else if (5 <= x < 10)
	{
		y == x * x;
		cout << y << endl;
	}
}