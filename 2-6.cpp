#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int i = 1;
	int k = 1;
	while (i%a!=0||i%b!=0)
	{
		i++;
	}
	cout << "其最小公倍数为"<<i << endl;

	k == a * b / i;
	cout << "其最大公因数为" << k << endl;
}