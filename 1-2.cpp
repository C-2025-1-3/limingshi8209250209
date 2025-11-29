#include <iostream>
using namespace std;

int main()
{
    const int pi = 3.14;
    int r, l;//r为半径，l为锥高
    cin >> r >> l;
    int V;
    V = (pi * r * r * l / 3);
    cout << "圆锥的体积是" << V << endl;
}