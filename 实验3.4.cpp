#include<iostream>
#include"mytriangle.cpp"
using namespace std;
int main(){
	double a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{
		double o=_area(a, b, c);
		cout << "这个三角形的面积是" << o << endl;
	}
	else
	{
		cout << "这个三角形不存在" << endl;
	}
}