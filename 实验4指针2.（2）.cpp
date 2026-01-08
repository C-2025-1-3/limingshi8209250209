#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// 16进制字符串转10进制整数
int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; i++) {
        char ch = toupper(hexString[i]); // 统一转为大写
        int val;
        if (ch >= '0' && ch <= '9') {
            val = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            val = 10 + (ch - 'A');
        }
        else {
            // 非法字符返回0（也可抛异常）
            return 0;
        }
        result = result * 16 + val;
    }
    return result;
}

int main() {
    char hexStr[100];
    cout << "输入16进制字符串: ";
    cin >> hexStr;
    int dec = parseHex(hexStr);
    cout << "转换为10进制: " << dec << endl;
    return 0;
}