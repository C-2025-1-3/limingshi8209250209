#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;

public:
	void inputtime()
	{
		cin >> hour >> minute >> sec;
	}
	void couttime() {
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time t1;
	t1.inputtime();
	t1.couttime();
	return 0;
}