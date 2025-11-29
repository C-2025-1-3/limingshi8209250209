#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "ÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{char cch = ch - 32;
	
		cout << cch << endl;
	}
	else
	{
		int Ascii = static_cast<int>(ch) ;
		cout << Ascii << endl;
	}
}
