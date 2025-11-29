#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "请输入表达式（如 3+5）：";
    cin >> num1 >> op >> num2;

    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "错误：除数不能为0" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    case '%':
        // 取模运算要求操作数为整数
        if (num2 == 0) {
            cout << "错误：除数不能为0" << endl;
        }
        else {
            cout << static_cast<int>(num1) << " % " << static_cast<int>(num2)
                << " = " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        }
        break;
    default:
        cout << "错误：非法运算符" << endl;
    }

    return 0;
}