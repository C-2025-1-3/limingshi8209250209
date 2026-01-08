#include<iostream>
using namespace std;
void sort(double list[], int listsize) {
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j < listsize - 1; j++)
		{
			if (list[j] > list[j + 1]) {
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
}

int main()
{
	const int SIZE = 10;
	double arr[SIZE];
	cout << "输入10个双精度数字" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	sort(arr, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout <<endl;
}