//#include <bits/stdc++.h>
//using namespace std;
//class student
//{
//    int boarder,pass;
//public:
//    void admin()
//    {
//        cout<<"\t\t\t\t\t"<<"  WELCOME TO YOUR HALL"<<endl;
//        cout<<"\t\t\t\t\t"<<"KHAN JAHAN ALI HALL,KUET"<<endl<<endl;
//        cout<<"\t\t\t\t\t"<<"_____student panel______"<<endl<<endl;
//        cout<<"\t\t\t\t\t"<<"Enter boarder  : ";
//        cin>>boarder;
//        cout<<"\t\t\t\t\t"<<"Enter password : ";
//        cin>>pass;
//    }
//
//
//};
//int main()
//{
//    student s;
//    s.admin();
//
//
//}
#include <iostream>
#include <string>

using namespace std;

class student
{
private:

    int boarder;
    int password;
    int money;

public:

    void admin()
    {
        cout<<"\t\t\t\t\t"<<"  WELCOME TO YOUR HALL"<<endl;
        cout<<"\t\t\t\t\t"<<"KHAN JAHAN ALI HALL,KUET"<<endl<<endl;
        cout<<"\t\t\t\t\t"<<"_____student panel______"<<endl<<endl;
        cout<<"\t\t\t\t\t"<<"Enter boarder  : ";
        cin>>boarder;
        cout<<"\t\t\t\t\t"<<"Enter password : ";
        cin>>password;
    }

    student()
    {
        money = 0;
    }

//    void deposit(double amount)
//    {
//        if (amount > 0)
//        {
//            balance += amount;
//            cout << "Deposit successful. New balance: $" << balance << endl;
//        }
//        else
//        {
//            cout << "Invalid deposit amount." << endl;
//        }
//    }
//
//    void withdraw(double amount)
//    {
//        if (amount > 0)
//        {
//            if (balance >= amount)
//            {
//                balance -= amount;
//                cout << "Withdrawal successful. New balance: $" << balance << endl;
//            }
//            else
//            {
//                cout << "Insufficient funds." << endl;
//            }
//        }
//        else
//        {
//            cout << "Invalid withdrawal amount." << endl;
//        }
//    }
//
//    void displayBalance()
//    {
//        cout << "Account Holder: " << accountHolderName << endl;
//        cout << "Account Number: " << accountNumber << endl;
//        cout << "Current Balance: $" << balance << endl;
//    }
};

int main()
{

    student s1;
    s1.admin();

    int choice;

    cout << "\n*** Available Menu ***" << endl;
    cout << "1. Breakfast" << endl;
    cout << "2. Lunch" << endl;
    cout << "3. Dinner" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

//        switch (choice)
//        {
//        case 1:
//            cout << "Enter deposit amount: $";
//            cin >> amount;
//            account.deposit(amount);
//            break;
//        case 2:
//            cout << "Enter withdrawal amount: $";
//            cin >> amount;
//            account.withdraw(amount);
//            break;
//        case 3:
//            account.displayBalance();
//            break;
//        case 4:
//            cout << "Exiting the program. Goodbye!" << endl;
//            break;
//        default:
//            cout << "Invalid choice. Please try again." << endl;
//        }

    return 0;

}



