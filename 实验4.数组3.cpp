#include<iostream>
using namespace std;


int main()
{
	bool box[101] = { false };

	for (int student = 1; student <= 100; student++)
	{
		for (int locker = student; locker <= 100; locker += student) {
			box[locker] = !box[locker];
		}
	}
		cout << "打开的存物柜编号";
		for (int i = 1; i <= 100; i++) {
			if (box[i]) {
				cout << i << " ";
			}
		}
		cout << endl;
		return 0;
	
}