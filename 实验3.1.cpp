#include<iostream>
using namespace std;
void calculate1(int a, int b)
{
	int m = 1;
	int n ;
	for(int i=1;i>0;i++)
	{
		if (i % a== 0 &&i % b== 0)
		{
			m = i;
			break;
		}
     }
	n = ((a * b) / m);
	cout << "最大公因数是" <<n << endl;
	cout << "最小公倍数是" << m<< endl;
}
 int main()
 {
	 int j, k;
	 cin >> j >> k;
	 calculate1(j, k);
 }