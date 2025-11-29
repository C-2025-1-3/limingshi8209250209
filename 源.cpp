#include <iostream>
#include <<<iomanip> 
using namespace std;

int main() {
    const double apple_price = 0.8; 
    int day = 1;                    
    int buy_count = 2;              
    double total_cost = buy_count * apple_price; 

    
    while (true) {
        int next_count = buy_count * 2; 
        if (buy_count + next_count > 100) {
            break;
        }
        buy_count = next_count;
        total_cost += buy_count * apple_price;
        day++;
    }

 
    double avg_cost = total_cost / day;
    cout << "总购买天数：" << day << endl;
    cout << "每天平均花费：" << fixed << setprecision(2) << avg_cost << "元" << endl;

    return 0;
}