#include<iostream>
using namespace std;

class shuju 
{
private:
	double length;
	double width;
	double height;
public:
	void volume()
	{
		cin >> length >> width >> height;
		double a = (width * height * length);
		cout << "该长方体的体积是" << a << endl;
	}
};

int main()
{
	shuju shuju1, shuju2, shuju3;
	shuju1.volume();
	shuju2.volume();
	shuju3.volume();
}