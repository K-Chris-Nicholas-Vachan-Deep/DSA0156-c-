#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(const std::string& accNumber, double initialBalance)
        : accountNumber(accNumber), balance(initialBalance) {
        std::cout << "Bank account " << accountNumber << " created with initial balance " << balance << "." << std::endl;
    }

    // Destructor
    ~BankAccount() {
        std::cout << "Bank account " << accountNumber << " closed." << std::endl;
    }

    // Getters (optional)
    const std::string& getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }
};

int main() {
    BankAccount myAccount("123456789", 1000.0);
    return 0;
}
