#include <iostream>
using namespace std;

int* f() {
    int* p = new int[2]; // 动态分配数组
    p[0] = 1; p[1] = 2;
    return p; // 返回动态数组地址
}

int main() {
    int* p = f();
    cout << p[0] << endl; // 输出1
    cout << p[1] << endl; // 输出2
    delete[] p; // 释放动态数组
    p = nullptr; // 避免野指针
    return 0;
}