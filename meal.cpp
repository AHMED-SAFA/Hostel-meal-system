#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;
class student
{
private:
     string boarder;
     string password;
     string dept;
     string name;
     string menui;

public:
     // start :
     int money = 0;
     fstream record;
     void admin()
     {
          fstream record;
          HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
          cout << endl
               << "\t\t\t\t\t"
               << "  WELCOME TO YOUR HALL" << endl;
          cout << "\t\t\t\t\t"
               << "KHAN JAHAN ALI HALL,KUET" << endl
               << endl;
          cout << "\t\t\t\t\t"
               << "  |-------------------|" << endl;
          SetConsoleTextAttribute(h, 3);
          cout << "\t\t\t\t\t"
               << "  |   Student Login   |" << endl;
          SetConsoleTextAttribute(h, 15);
          cout << "\t\t\t\t\t"
               << "  |-------------------|" << endl;
          cout << endl;
          cout << "\t\t\t\t\t"
               << "Enter name       : ";
          getline(cin >> ws, name);
          cout << "\t\t\t\t\t"
               << "Enter Department : ";
          getline(cin >> ws, dept);
          cout << "\t\t\t\t\t"
               << "Enter boarder    : ";
          cin >> boarder;
          cout << "\t\t\t\t\t"
               << "Enter password   : ";
          cin >> password;
          record.open("student record.txt", ios ::app | ios ::out);
          record << name << endl
                 << boarder << endl
                 << password << endl
                 << dept << endl;
          record.close();
     }
     void breakfast()
     {
     start:
          menui = "Breakfast";
          record.open("student record.txt", ios ::app | ios ::out);
          record << menui << endl;
          money = 0;
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
               << "5. cancle" << endl
               << endl;
          cout << "\t\t\t\t\t"
               << "You can Choose Any Three: ";

          for (int i = 0; i < 3; i++)
          {
               cin >> n;
               if (n == 5)
                    goto start;
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
     void lunch()
     {
     go:
          menui = "Lunch";
          money = 0;
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
               << "6. Cancel" << endl
               << endl;
          cout << "\t\t\t\t\t"
               << "You can Choose Any Three: ";
          for (int i = 0; i < 3; i++)
          {
               cin >> n;
               if (n == 6)
                    goto go;
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
     void dinner()
     {
     now:
          menui = "Dinner";
          money = 0;
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
               << "6. Cancel" << endl
               << endl;
          cout << "\t\t\t\t\t"
               << "You can Choose Any Three: ";
          for (int i = 0; i < 3; i++)
          {
               cin >> n;
               if (n == 6)
                    goto now;
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
     void menu();
     void reciept()
     {
          time_t tt;
          struct tm *ti;
          time(&tt);
          ti = localtime(&tt);
          fstream record;
          HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
          SetConsoleTextAttribute(h, 3);
          cout << "\t\t\t\t\t   KHAN JAHAN ALI HALL,KUET" << endl;
          SetConsoleTextAttribute(h, 15);

          cout << "\t\t\t\t\t |--------------------------|" << endl;
          SetConsoleTextAttribute(h, 10);
          cout << "\t\t\t\t\t |   Meal Payment Reciept   |" << endl;
          SetConsoleTextAttribute(h, 15);
          cout << "\t\t\t\t\t |--------------------------|" << endl;
          cout << "\t\t\t\t\t\t\t\t\t  " << asctime(ti);
          record.open("student record.txt", ios ::in);
          // record >> name >> dept >> boarder;
          cout << "\t\t\t\t\tName         : " << name << endl;
          cout << "\t\t\t\t\tDepartment   : " << dept << endl;
          cout << "\t\t\t\t\tBoarder      : " << boarder << endl;
          cout << "\t\t\t\t\tMeal for     : " << menui << endl
               << endl;
          cout << "\t\t\t\t\tMeal sub total  =   " << money << " taka" << endl
               << endl;
          SetConsoleTextAttribute(h, 4);
          cout << "\t\t\t\t\t[Please pay the amount to the supervisor]" << endl;
          cout << "\t\t\t\t\t[THANK YOU]" << endl;
          SetConsoleTextAttribute(h, 15);
     };
};

void student ::menu()
{
     HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
     cout << endl
          << "\t\t\t\t\t  |-------------------|" << endl;
     SetConsoleTextAttribute(h, 3);
     cout << "\t\t\t\t\t  |  Available Menu   |" << endl;
     SetConsoleTextAttribute(h, 15);
     cout << "\t\t\t\t\t  |-------------------|" << endl;
     // SetConsoleTextAttribute(h, 13);
     cout << endl
          << "\t\t\t\t\t1. ";
     SetConsoleTextAttribute(h, 13);
     cout << "Breakfast" << endl;
     SetConsoleTextAttribute(h, 15);
     cout
         << "\t\t\t\t\t2. ";
     SetConsoleTextAttribute(h, 13);
     cout << "Lunch" << endl;
     SetConsoleTextAttribute(h, 15);
     cout
         << "\t\t\t\t\t3. ";
     SetConsoleTextAttribute(h, 13);
     cout << "Dinner" << endl;
     SetConsoleTextAttribute(h, 15);
     cout
         << "\t\t\t\t\t4. ";
     SetConsoleTextAttribute(h, 13);
     cout << "Exit" << endl;
     SetConsoleTextAttribute(h, 15);
     cout << endl
          << "\t\t\t\t\tEnter your choice: ";
}

int main()
{
     remove("student record.txt");
     // system("color a6");
     HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
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
          cout << "\t\t\t\t\t   |--------------|" << endl;
          SetConsoleTextAttribute(h, 3);
          cout << "\t\t\t\t\t   |Breakfast Menu|" << endl;
          SetConsoleTextAttribute(h, 15);
          cout << "\t\t\t\t\t   |--------------|" << endl
               << endl;
          s1.breakfast();
          cout << endl;
          cout << "\t\t\t\t\tDo you want to confirm meal?" << endl;
          cout << "\t\t\t\t\t1. Yes" << endl;
          cout << "\t\t\t\t\t2. No" << endl
               << endl;
          cout << "\t\t\t\t\tEnter choice: ";
          cin >> x;
          cout << endl;
          if (x == 1)
               s1.reciept();
          else if (x == 2)
               goto menu;
          break;
     case 2:
          cout << "\t\t\t\t\t    |--------------|" << endl;
          SetConsoleTextAttribute(h, 3);
          cout << "\t\t\t\t\t    |  Lunch Menu  |" << endl;
          SetConsoleTextAttribute(h, 15);
          cout << "\t\t\t\t\t    |--------------|" << endl
               << endl;
          s1.lunch();
          cout << endl;
          cout << "\t\t\t\t\tDo you want to confirm meal?" << endl;
          cout << "\t\t\t\t\t1. Yes" << endl;
          cout << "\t\t\t\t\t2. No" << endl
               << endl;
          cout << "\t\t\t\t\tEnter choice: ";
          cin >> x;
          cout << endl;
          if (x == 1)
               s1.reciept();
          else if (x == 2)
               goto menu;
          break;
     case 3:
          cout << "\t\t\t\t\t   |--------------|" << endl;
          SetConsoleTextAttribute(h, 3);
          cout << "\t\t\t\t\t   |  Dinner Menu |" << endl;
          SetConsoleTextAttribute(h, 15);
          cout << "\t\t\t\t\t   |--------------|" << endl
               << endl;
          s1.dinner();
          cout << endl;
          cout << "\t\t\t\t\tDo you want to confirm meal?" << endl;
          cout << "\t\t\t\t\t1. Yes" << endl;
          cout << "\t\t\t\t\t2. No" << endl
               << endl;
          cout << "\t\t\t\t\tEnter choice: ";
          cin >> x;
          cout << endl;
          if (x == 1)
               s1.reciept();
          else if (x == 2)
               goto menu;
          break;
     case 4:
          // ofstream record;
          // record.open("student record.txt", ofstream::out | std::ofstream::trunc);
          // record.close();
          remove("student record.txt");
          // exit(0);
          goto admin;
          break;
     default:
          SetConsoleTextAttribute(h, 4);
          cout << "\t\t\t\t\tInvalid choice. Please try again." << endl;
          SetConsoleTextAttribute(h, 15);
          goto menu;
     }
     getch();
}
