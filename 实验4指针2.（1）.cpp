#include <iostream>
#include <cstring>
using namespace std;

// 查找子串首次匹配下标，未找到返回-1
int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 == 0 || len1 > len2) return -1;

    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) return i;
    }
    return -1;
}

int main() {
    char s1[100], s2[100];
    cout << "输入子串s1: ";
    cin >> s1;
    cout << "输入主串s2: ";
    cin >> s2;

    int index = indexof(s1, s2);
    if (index != -1) {
        cout << "子串首次出现下标: " << index << endl;
    }
    else {
        cout << "s1不是s2的子串" << endl;
    }
    return 0;
}