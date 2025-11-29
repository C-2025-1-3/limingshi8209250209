#include<iostream>
using namespace std;
int main()
{
	int a, b,c;
	cin >> a >> b >> c;
	int d = (a > b) ? a : b;
	int max = (d > c) ? d : c;
	if (max >= (a + b) || max >= (a + c) || max >= (b + c))
	{
		cout << "这个三角形不存在" << endl;
	}
	else
	{
		cout << "其周长等于" << a + b + c << endl;
		if (a == b || a == c || b == c)
			cout << "这是个等腰三角形" << endl;

	}

}