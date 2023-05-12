#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class student
{
private:
     int boarder;
     int password;
     string dept;

public:
     int money = 0;
     fstream record;
     void admin()
     {
          fstream record;
          cout << endl
               << "\t\t\t\t\t"
               << "  WELCOME TO YOUR HALL" << endl;
          cout << "\t\t\t\t\t"
               << "KHAN JAHAN ALI HALL,KUET" << endl
               << endl;
          cout << "\t\t\t\t\t"
               << "  --------------------" << endl;
          cout << "\t\t\t\t\t"
               << "     Student Login" << endl;
          cout << "\t\t\t\t\t"
               << "  --------------------" << endl;
          cout << endl;
          cout << "\t\t\t\t\t"
               << "Enter boarder    : ";
          cin >> boarder;
          cout << "\t\t\t\t\t"
               << "Enter password   : ";
          cin >> password;
          cout << "\t\t\t\t\t"
               << "Enter Department : ";
          cin >> dept;
          record.open("student record.txt", ios ::app | ios ::out);
          record << boarder << " " << password << " " << dept;
          record.close();
     }
     void breakfast();
     void lunch();
     void dinner();
     void menu();
     void reciept()
     {
          cout << "\t\t\t\t\tKHAN JAHAN ALI HALL,KUET" << endl
               << endl;
          cout << "Your Meal Payment Reciept:" << endl;
          cout << "Sub total = " << money << endl;
     };
};

void student ::breakfast()
{
     int n;
     cout << "\t\t\t\t\t"
          << "1. Bread -   10 taka" << endl;
     cout << "\t\t\t\t\t"
          << "2. Egg   -   15 taka" << endl;
     cout << "\t\t\t\t\t"
          << "3. Milk  -   10 taka" << endl;
     cout << "\t\t\t\t\t"
          << "4. Tea   -   10 taka" << endl;
     cout << "\t\t\t\t\t"
          << "5. Exit" << endl;
     cout << "\t\t\t\t\t"
          << "You can Choose Any Three: ";

     for (int i = 0; i < 3; i++)
     {
          cin >> n;
          if (n == 1)
               money += 10;
          else if (n == 2)
               money += 15;
          else if (n == 3)
               money += 10;
          else if (n == 4)
               money += 10;
     }
}
void student ::lunch()
{
     int n;
     cout << "\t\t\t\t\t"
          << "1. rice         -    10 taka" << endl;
     cout << "\t\t\t\t\t"
          << "2. Egg          -    15 taka" << endl;
     cout << "\t\t\t\t\t"
          << "3. vagetable    -    10 taka" << endl;
     cout << "\t\t\t\t\t"
          << "4. Fish         -    15 taka" << endl;
     cout << "\t\t\t\t\t"
          << "5. Chicken      -    20 taka" << endl;
     cout << "\t\t\t\t\t"
          << "6. Exit" << endl;
     cout << "\t\t\t\t\t"
          << "You can Choose Any Three: ";
     for (int i = 0; i < 3; i++)
     {
          cin >> n;
          if (n == 1)
               money += 10;
          else if (n == 2)
               money += 15;
          else if (n == 3)
               money += 10;
          else if (n == 4)
               money += 15;
          else if (n == 5)
               money += 20;
     }
}
void student ::dinner()
{
     int n;
     cout << "\t\t\t\t\t"
          << "1. rice         -    10 taka" << endl;
     cout << "\t\t\t\t\t"
          << "2. Chicken      -    15 taka" << endl;
     cout << "\t\t\t\t\t"
          << "3. vagetable    -    10 taka" << endl;
     cout << "\t\t\t\t\t"
          << "4. Fish         -    15 taka" << endl;
     cout << "\t\t\t\t\t"
          << "5. Soya         -    10 taka" << endl;
     cout << "\t\t\t\t\t"
          << "6. Exit" << endl;
     cout << "\t\t\t\t\t"
          << "You can Choose Any Three: ";
     for (int i = 0; i < 3; i++)
     {
          cin >> n;
          if (n == 1)
               money += 10;
          else if (n == 2)
               money += 15;
          else if (n == 3)
               money += 10;
          else if (n == 4)
               money += 15;
          else if (n == 5)
               money += 10;
     }
}
void student ::menu()
{
     cout << endl
          << "\t\t\t\t\t"
          << "  --------------------" << endl;
     cout << "\t\t\t\t\t    Available Menu    " << endl;
     cout << "\t\t\t\t\t"
          << "  --------------------" << endl;
     cout << endl
          << "\t\t\t\t\t1. Breakfast" << endl;
     cout << "\t\t\t\t\t2. Lunch" << endl;
     cout << "\t\t\t\t\t3. Dinner" << endl;
     cout << "\t\t\t\t\t4. Exit" << endl;
     cout << endl
          << "\t\t\t\t\tEnter your choice: ";
}

int main()
{
admin:
     student s1;
     s1.admin();
menu:
     int choice, x;
     s1.menu();
     cin >> choice;
     cout << endl;

     switch (choice)
     {
     case 1:
          cout << "\t\t\t\t\t\t  --------------" << endl;
          cout << "\t\t\t\t\t\t  Breakfast Menu" << endl;
          cout << "\t\t\t\t\t\t  --------------" << endl;
          s1.breakfast();
          cout << endl;
          cout << "\t\t\t\t\tDo you want to confirm meal?" << endl;
          cout << "\t\t\t\t\t1. Yes" << endl;
          cout << "\t\t\t\t\t2. No" << endl;
          cin >> x;
          if (x == 1)
               s1.reciept();
          else if (x == 2)
               goto menu;
          break;
     case 2:
          cout << "\t\t\t\t\t\t  ----------" << endl;
          cout << "\t\t\t\t\t\t  Lunch Menu" << endl;
          cout << "\t\t\t\t\t\t  ----------" << endl;
          s1.lunch();
          cout << endl;
          cout << "\t\t\t\t\tDo you want to confirm meal?" << endl;
          cout << "\t\t\t\t\t1. Yes" << endl;
          cout << "\t\t\t\t\t2. No" << endl;
          cin >> x;
          if (x == 1)
               s1.reciept();
          else if (x == 2)
               goto menu;
          break;
     case 3:
          cout << "\t\t\t\t\t\t  --------------" << endl;
          cout << "\t\t\t\t\t\t   Dinner Menu" << endl;
          cout << "\t\t\t\t\t\t  --------------" << endl;
          s1.dinner();
          cout << endl;
          cout << "\t\t\t\t\tDo you want to confirm meal?" << endl;
          cout << "\t\t\t\t\t1. Yes" << endl;
          cout << "\t\t\t\t\t2. No" << endl;
          cin >> x;
          if (x == 1)
               s1.reciept();
          else if (x == 2)
               goto menu;
          break;
     case 4:
          // ofstream record;
          // record.open("student record.txt", ofstream::out | std::ofstream::trunc);
          // record.close();
          goto admin;
          break;
     default:
          cout << "Invalid choice. Please try again." << endl;
     }
}
