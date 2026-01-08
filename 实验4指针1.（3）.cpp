#include <iostream> // 替换C的stdio.h，适配C++的cout
using namespace std;

void f(char* st, int i) {
    st[i] = '\0';
    cout << st << endl;
    if (i > 1) f(st, i - 1); // 递归调用，i递减
}

int main() { // 修正void main为int main
    char st[] = "abcd";
    f(st, 4); // 初始i=4，对应字符串长度（含'\0'）
    return 0;
}