#include <iostream>
using namespace std;

int main() {
    int nums[10];       
    int distinct[10];   
    int distCount = 0;  
    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
        bool isNew = true;
        for (int j = 0; j < distCount; j++) {
            if (nums[i] == distinct[j]) {
                isNew = false;
                break;
            }
        }
        if (isNew) {
            distinct[distCount++] = nums[i];
        }
    }
    cout << "The distinct numbers are: ";
    for (int i = 0; i < distCount; i++) {
        cout << distinct[i] << " ";
    }
    cout << endl;
    return 0;
}