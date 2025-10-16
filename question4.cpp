#include <iostream>
#include <string>
using namespace std;
struct SalesRecord {
    string month;
    float amount;
};
int main() {
    SalesRecord records[12];
    string maxMonth, minMonth;
    float maxSales = -1.0; 
    float minSales = 1e9;  

    for (int i = 0; i < 12; i++) {
        cout << "Enter sales data for month " << (i + 1) << endl;
        cout << "Month: ";
        cin >> records[i].month;
        cout << "Amount: $";
        cin >> records[i].amount;
    }
    for (int i = 0; i < 12; i++) {
        if (records[i].amount > maxSales) {
            maxSales = records[i].amount;
            maxMonth = records[i].month;
        }
        if (records[i].amount < minSales) {
            minSales = records[i].amount;
            minMonth = records[i].month;
        }
    }
    cout << "\nMonth with maximum sales: " << maxMonth << " with amount: $" << maxSales << endl;
    cout << "Month with minimum sales: " << minMonth << " with amount: $" << minSales << endl;
    return 0;
}

