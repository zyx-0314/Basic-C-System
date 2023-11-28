/*
    System 1: Simple ATM Bank System
    Scenario: There is single account which need password
    lock which can withdraw/deposit, check balance, update account data.
    - account data: First Name, Last Name, Middle Initial(Optional), Born Sex and BoD

    Statements Used:
    - When If and Switch can be used
    - Break and Continue
    - Looping
        - Sentinel-Repetition(Event Based Control)
*/
/*
    System 2: Admin and User ATM Bank System
    Scenario: There is 2 Types of user the bank admins and the customers of bank which is the users.
    Admins controls who can create account and retrieval of their account
    Customers can manage their money; they can withdraw/deposit, check balance, update account data
*/
/*
    System 3: Based from System 2
    Scenario: Bank needs better system which uses Algorithms.
    Admin uses Sort Algorithm and Search for looking to users
    Customers can filter their history data
*/

#include <stdio.h>

int main() {

    const int MAX = 50;
    int pin = 1234, balance = 10000, temp;
    char f_name[MAX], l_name[MAX], m_name[MAX], b_sex[MAX], bod[MAX];
    // 1 means true and and 0 means false
        // if you also observe the name is question type, it is because to identify that it will be used to accept
        // a value that is true or false only
    int isInvalidPin = 1, isLogin = 0;

    // the do while infinite loop until user input is correct or can be terminated
    do
    {
        printf("-----  ATM SYSTEM 1  -----\n");
        printf("Input 0 to exit system\n");
        printf("> Enter Pin: ");
        scanf("%d", &temp);

        // this is used to clear screen in the cmd
        system("cls");

        printf("------   Accessing  ------\n");
        if (temp == 0)
        {
            // return 0; stops the whole program
            return 0;
        }
        else if (temp == pin)
        {
            // states input is correct so the infinite loop stops
            isInvalidPin = 0;
            // states that user is now login
            isLogin = 1;
            printf("         Accepted!\n");

            // this is used to pause the process before preceding
            system("pause");
            system("cls");
        }
        else
        {
            printf("        Invalid Pin\n");
            system("pause");
            system("cls");
        }

    // while checks the isInvalidPin once it was false or 0 it will stop
    } while(isInvalidPin);

    do
    {
        printf("-----  ATM SYSTEM 1  -----\n");
        printf("1 Check Balance\n");
        printf("2 Withdraw\n");
        printf("3 Deposit\n");
        printf("4 Logout\n");
        printf("\n");
        printf("Input Number: ");
        scanf("%d", &temp);

        system("cls");

        printf("-----  ATM SYSTEM 1  -----\n");
        switch(temp)
        {
        case 1:
            printf("     Checking Balance\n");
            printf("      > P %d\n", balance);

            system("pause");
            system("cls");
            break;
        case 2:
            printf("> How Much to Withdraw: ");
            scanf("%d", &temp);

            if (temp > balance)
            {
                printf("\n--------------------------\n");
                printf("> Balance Insufficient!");
                system("pause");
                system("cls");
                continue;
            }

            balance -= temp;

            printf("\n--------------------------\n");
            printf("> Balance: %d\n", balance);

            system("pause");
            system("cls");
            break;
        case 3:
            printf("> How Much to Deposit: ");
            scanf("%d", &temp);

            balance += temp;

            printf("\n--------------------------\n");
            printf("> Balance: %d\n", balance);

            system("pause");
            system("cls");
            break;
        case 4:
            printf("Thank you for your Time\n");
            system("pause");
            system("cls");

            isLogin = 0;
            break;
        default:
            printf("Invalid Input!");
            break;
        }
    }while(isLogin);

    return 0;
}

// Q & A?
    // Q: why use if else chain in the pin and use switch in mainmenu?
    // A: using if else chain in pin because it has 2 options to go to but 1 of them uses a dynamic variable(pin)
    //      while the mainmenu has 4 specific options and does not use dynamic variable or range value

    // Q: why use do while loop?
    // A: because you need to run the functionality first before checking if their sentinel is suggesting to stop or not

    // Q: what difference of continue and break int switch?
    // A: There is non when it comes to using conditional


