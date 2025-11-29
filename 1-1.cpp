#include<iostream>//错误在于前面没有加#
using namespace std;
int main()
{   
	
	int i =1 ;//k事先没有定义没有赋值，而且赋值符号后面为一个整体时未加括号。
	cout << i++ << endl;//i进行了重定义
	cout << "Welcome to C++" << endl;//引号没打
	return 0;//最后没加分号
}
