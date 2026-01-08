#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if(num<=1)
	{
		return false;
	}
	for (int i = 2; i > 0; i++)
	{
		if(num%i==0)
		{
			return false;
		}
		else {
			return true;
		}
	 }
}
int main() 
{

	int count = 0;
	int n = 2;
	while (count < 200)
	{
		if (is_prime(n))
		{
			cout << n << " ";
			count++;
			if (count % 10 == 0)
			{
				cout << endl;
			}
		}
		n++;

	}


}