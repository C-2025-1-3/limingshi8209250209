#include <iostream> // 缺少输入输出头文件
using namespace std; // 缺少std命名空间声明

int main() { // C++中main函数必须返回int，不能是void
    int i, j, * pi, * pj;
    pi = &i;
    pj = &j;
    i = 5; j = 7;
    // 补充输出格式，修正&j的笔误（原代码最后是&j写成&）
    cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
    cout << &i << '\t' << *pi << '\t' << &j << '\t' << *pj << endl;
    return 0;
}