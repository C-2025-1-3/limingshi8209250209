#include<iostream>
#include"student.h"
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex£º" << sex << endl;
}
 
void Student::set_value(int n,const   char* na, char s)
{
	num = n;
	int i = 0;
	while (na[i] != '\0' && i < 19) {
		name[i] = na[i]; 
		i++;
	}
	sex = s;

}
