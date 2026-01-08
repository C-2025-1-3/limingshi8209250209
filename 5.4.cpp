#include<iostream>
using namespace std;


class information
{
public:
	int id;
	int grade;
	information(int i = 0, int s = 0) :id(i), grade(s){}
};
void max(information* p, int n)
{
	int maxgrade = p->grade;
	int maxid = p->id;
	for (int i = 1; i < n; i++) 
	{
		if 
			((p + i)->grade > maxgrade)
		{
			maxgrade = (p + i)->grade;
		maxid = (p + i)->id;
		}
	}
	cout << "最高的成绩为" << maxid << " " << maxgrade << endl;
}
int main() {
	information student[5] = {
	information(101,66),
	information(222,33),
	information(223,22),
	information(122,36),
	information(153,99)

	};
	max(student,5);

}