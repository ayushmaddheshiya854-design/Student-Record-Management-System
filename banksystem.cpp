#include <iostream>
using namespace std;

struct Account {
    int accNo;
    string name;
    float balance;
};

int main() {
    Account a[50];
    int n;

    cout << "Enter number of customers: ";
    cin >> n;

    // Input account details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of customer " << i + 1 << ":\n";
        cout << "Account Number: ";
        cin >> a[i].accNo;
        cout << "Name: ";
        cin >> a[i].name;
        cout << "Initial Balance: ";
        cin >> a[i].balance;
    }

    // Display all accounts
    cout << "\n--- Customer Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Account No: " << a[i].accNo
             << ", Name: " << a[i].name
             << ", Balance: " << a[i].balance << endl;
    }

    // Deposit money
    int acc;
    float amt;
    cout << "\nEnter account number to deposit money: ";
    cin >> acc;
    cout << "Enter amount to deposit: ";
    cin >> amt;

    for (int i = 0; i < n; i++) {
        if (a[i].accNo == acc) {
            a[i].balance += amt;
            cout << "Updated Balance for " << a[i].name << ": " << a[i].balance << endl;
        }
    }

    return 0;
}
