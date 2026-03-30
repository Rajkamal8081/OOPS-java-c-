#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;   // DATA HIDDEN

public:
    BankAccount(int b) {   // Constructor
        balance = b;
    }

    void deposit(int amount) {   // CONTROLLED ACCESS
        if(amount > 0) {
            balance += amount;
        }
    }

    void withdraw(int amount) {
        if(amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    int getBalance() {   // Getter function
        return balance;
    }
};

int main() {
    BankAccount acc(1000);

    acc.deposit(500);
    acc.withdraw(300);

    cout << "Current Balance: " << acc.getBalance();
}
