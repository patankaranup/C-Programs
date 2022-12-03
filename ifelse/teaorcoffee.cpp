#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Enter :" << endl
         << "1 for Coffee" << endl
         << "2 for Tea" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Your coffee is on its way. Thank You" << endl;
    }
    else if (choice == 2)
    {
        cout << "Your tea is on its way. Thank You" << endl;
    }
    else
    {
        cout << "You have enter a wrong option." << endl;
    }

    return 0;
}