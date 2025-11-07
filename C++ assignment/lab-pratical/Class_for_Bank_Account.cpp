#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(float amount) {
        balance = balance + amount;
        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void showBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(500);
    acc.showBalance();


}

