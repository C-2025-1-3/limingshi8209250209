#include <iostream>
#include <cmath> 
#include <<iomanip> 
using namespace std;

int main() {
    double a;
    cout << "请输入a的值：";
    cin >> a;

    if (a < 0) {
        cout << "错误：a不能为负数" << endl;
        return 1;
    }
    if (a == 0) {
        cout << "平方根为：0" << endl;
        return 0;
    }

    double xn = a; 
    double xn1;
    const double eps = 1e-5; 

    do {
        xn1 = 0.5 * (xn + a / xn); 
        
        if (fabs(xn1 - xn) < eps) {
            break;
        }
        xn = xn1; 
    } while (true);

    cout << "a的平方根为：" << fixed << setprecision(8) << xn1 << endl;
    return 0;
}