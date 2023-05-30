#include <stdio.h>
#include <stdlib.hi>
#include <string.h>

// Structure to represent a bank account
struct Account {
    int accountNumber;
    char customerName[100];
    float balance;
};

// Function to create a new account
struct Account createAccount(int accountNumber, char customerName[], float initialBalance) {
    struct Account newAccount;
    newAccount.accountNumber = accountNumber;
    strcpy(newAccount.customerName, customerName);
    newAccount.balance = initialBalance;
    return newAccount;
}

// Function to deposit funds into an account
void deposit(struct Account* account, float amount) {
    account->balance += amount;
    printf("Deposit successful. New balance: %.2f\n", account->balance);
}

// Function to withdraw funds from an account
void withdraw(struct Account* account, float amount) {
    if (account->balance >= amount) {
        account->balance -= amount;
        printf("Withdrawal successful. New balance: %.2f\n", account->balance);
    } else {
        printf("Insufficient funds.\n");
    }
}

// Function to display account details
void displayAccountDetails(struct Account* account) {
    printf("Account Number: %d\n", account->accountNumber);
    printf("Customer Name: %s\n", account->customerName);
    printf("Balance: %.2f\n", account->balance);
}

int main() {
    struct Account account1 = createAccount(1001, "John Smith", 1000.00);
    struct Account account2 = createAccount(1002, "Jane Doe", 500.00);

    displayAccountDetails(&account1);
    printf("\n");

    displayAccountDetails(&account2);
    printf("\n");

    deposit(&account1, 500.00);
    printf("\n");

    withdraw(&account2, 200.00);
    printf("\n");

    return 0;
}

