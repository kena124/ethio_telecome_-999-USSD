#include <iostream>
using namespace std;

string option1 = "1. For yourself \n2. For Gift \n";
string option2 = "1. Daily \n2. Weekly \n";
string success = "Dear Customer, as per as your request a new ";
string success1 [2] = {" is added to your service number.\n", "have successfully sent to number a ## ## ## ## ## \n"};

string offerType [2] = {"Felix service ", "Package offer "};
string timeOffer [2] = {"daily ", "weekly "};
string failure = "Dear Customer, your request have been unsuccessful.\n";

string choiceName[2] = {"For yourself", "For Gift"};
int flexiPackageChoice, giftSelfChoice, dayWeekChoice;
void choice2(int choiceName2)
{
    system("cls");
    cout << choiceName[choiceName2] << endl;
    cout << option2;

    cin >> dayWeekChoice;

    switch (dayWeekChoice)
    {
    case 1:
        system("cls");
        cout << success << timeOffer[dayWeekChoice-1]<<offerType[flexiPackageChoice-1] << success1[giftSelfChoice-1];
        break;
    case 2:
        system("cls");
        cout << success << timeOffer[dayWeekChoice-1] << offerType[flexiPackageChoice-1] << success1[giftSelfChoice-1];
        break;
    default:
        failure;
        exit(0);
    }
}

void offer(int choiceName1)
{
    system("cls");
    cout << offerType[choiceName1] << endl;
    cout << option1;
    cin >> giftSelfChoice;

    switch (giftSelfChoice)
    {
    case 1:
        choice2(giftSelfChoice-1);
        break;
    case 2:
        choice2(giftSelfChoice-1);
        break;
    }
}
int main()
{
    cout << "Welcome to Ethio-Telecom\n";
    cout << "1. Flexi Package\n";
    cout << "2. Package offers \n";

    label:
    cin >> flexiPackageChoice;
    switch (flexiPackageChoice)
    {
    case 1:
        offer(flexiPackageChoice-1);
        break;
    case 2:
         offer(flexiPackageChoice-1);
         break;
    default:
        cout << "Wrong input, please try again!\n";
        goto label;
    }
    return 0;
}