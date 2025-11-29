#include <iostream>
#include <cctype> 
using namespace std;

int main() {
   
    int letterCount = 0; 
    int spaceCount = 0;  
    int digitCount = 0;  
    int otherCount = 0;  
    char ch;            
    cout << "请输入一行字符：" << endl;

    
    while ((ch = cin.get()) != '\n') {
        if (isalpha(ch)) {）
            letterCount++;
        }
        else if (isspace(ch)) {
            spaceCount++;
        }
        else if (isdigit(ch)) { 
            digitCount++;
        }
        else { 
            otherCount++;
        }
    }

    
    cout << "英文字母个数：" << letterCount << endl;
    cout << "空格个数：" << spaceCount << endl;
    cout << "数字个数：" << digitCount << endl;
    cout << "其他字符个数：" << otherCount << endl;

    return 0;
}