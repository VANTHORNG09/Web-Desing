#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int option = 0;
    do
    {
        cout << "[+] Welcome to Program One [+]" << endl;
        cout << "1. Open Calculator" << endl;
        cout << "2. Odd/Even Printers" << endl;
        cout << "3. Days Finder (Month(1-12))" << endl;
        cout << "4. Exit" << endl;
        cout << "-> Choose your option (1-4): ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
        {
            float value1;
            float value2;
            float result = 0;
            char op;
            cout << "[<] Calculator Program [>]" << endl;
            cout << "-> Choose [+, -, *, /, %]: ";
            cin >> op;
            switch (op)
            {
            case '+':
                cout << "Enter value1: ";
                cin >> value1;
                cout << "Enter value2: ";
                cin >> value2;
                result = value1 + value2;
                break;
            case '-':
                cout << "Enter value1: ";
                cin >> value1;
                cout << "Enter value2: ";
                cin >> value2;
                result = value1 - value2;
                break;
            case '*':
                cout << "Enter value1: ";
                cin >> value1;
                cout << "Enter value2: ";
                cin >> value2;
                result = value1 * value2;
                break;
            case '/':
                cout << "Enter value1: ";
                cin >> value1;
                cout << "Enter value2: ";
                cin >> value2;
                result = value1 / value2;
                break;
            case '%':
                cout << "Enter value1: ";
                cin >> value1;
                cout << "Enter value2: ";
                cin >> value2;
                result = (int)value1 % (int)value2;
                break;
            default:
                cout << "Invalid Operator! Choose Again!!!" << endl;
                break;
            }
            cout << "Result is: " << result << endl;
            // Press enter to continue
        }
        break;
        case 2:
        {
            int op;
            int n;
            cout << "[<] Odd/Even Printer Program [>]" << endl;
            cout << "1. Print Even Number" << endl;
            cout << "2. Print Odd Number" << endl;
            cout << "3. Exit" << endl;
            cout << "-> Choose your option: ";
            cin >> op;
            switch (op)
            {
            case 1:
                cout << "=> Enter n: ";
                cin >> n;
                for (int i = 1; i <= n; i++)
                {
                    // continue (skip)
                    if (i % 2 != 0)
                    {
                        continue;
                    }
                    cout << " " << i;
                }
                cout << endl; // add a new line after printing all the numbers
                break;
            case 2:
                cout << "=> Enter n: ";
                cin >> n;
                for (int i = 1; i <= n; i++)
                {
                    // Odd
                    // skip even
                    if (i % 2 == 0)
                    {
                        continue;
                    }
                    cout << " " << i;
                }
                cout << endl;
                break;
            case 3:
                cout << "Exit from our case!!!" << endl;
                break;
            default:
                cout << "Invalid Option! Choose again from 1-2!!!" << endl;
                break;
            }
        }
        break;
        case 3:
        {
            // 31 = 1, 3, 5, 7, 8, 10, 12
            // 28, 29 = 2
            // 30 = 4, 6, 9, 11
            int days;
            int month;
            cout << "[<] Days Finder Program [>]" << endl;
            cout << "=> Enter Month (1-12): ";
            cin >> month;
            switch (month)
            {
            case 1:

            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                days = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                days = 30;
                break;
            case 2:
                days = 28;
                break;
            default:
                cout << "Invalid Month! Choose again from 1-12!!!" << endl;
                break;
            }
            // DRY -> Don't repeat yourself
            if (month >= 1 && month <= 12)
            {
                cout << "Month = " << month << " => " << days << " Days" << endl;
            }
        }
        break;
        case 4:
            cout << "Exit from our program!!!" << endl;
            break;
        default:
            cout << "Invalid option! Choose again from 1-4" << endl;
            break;
        }
        // ask user to press enter to continue
        cout << "-------------------- << Press enter to continue >> --------------------" << endl;
        cin.ignore(); // clear buffer
        cin.get();    // get input from user
    } while (option != 4);
    return 0;
}
