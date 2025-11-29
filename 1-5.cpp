#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << fixed << setprecision(2);
	double C;
	double F = 0;
	C = (F - 32) / 1.8;
	cout << "请输入华氏温度" << endl;
	cin >> F;
	cout <<"摄氏温度为"<< C << endl;
}
