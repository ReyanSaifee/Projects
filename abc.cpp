#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; // Initial balance
    int choice;

    // Display menu and process user choices using a do-while loop
    do {
        // Display the ATM menu
        cout << "\n--- ATM Menu ---\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Process menu selection using a switch statement
        switch (choice) {
            case 1: // Check Balance
                cout << "Your current balance is: $" << balance << "\n";
                break;
            case 2: { // Withdraw Money
                double withdrawAmount;
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;
                if (withdrawAmount > balance) {
                    cout << "Insufficient balance. Withdrawal denied.\n";
                } else if (withdrawAmount <= 0) {
                    cout << "Invalid amount. Please enter a positive value.\n";
                } else {
                    balance -= withdrawAmount;
                    cout << "You have withdrawn $" << withdrawAmount << ". New balance: $" << balance << "\n";
                }
                break;
            }
            case 3: { // Deposit Money
                double depositAmount;
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                if (depositAmount <= 0) {
                    cout << "Invalid amount. Please enter a positive value.\n";
                } else {
                    balance += depositAmount;
                    cout << "You have deposited $" << depositAmount << ". New balance: $" << balance << "\n";
                }
                break;
            }
            case 4: // Exit
                cout << "Exiting the ATM. Thank you for using our service!\n";
                break;
            default: // Invalid Option
                cout << "Invalid choice. Please select a valid option (1-4).\n";
                break;
        }
    } while (choice != 4);

    return 0;
}

