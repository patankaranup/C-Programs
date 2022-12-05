#include <iostream>
using namespace std;
int main()
{
    // examples of escape sequences are \n \t \b \' \" \\ \? \r \a
    // \r returns the cursor to the beginning of the line
    // \a for alert bell
    cout << "\tHii there " << endl;
    cout << "\"Print double quotes \"" << endl;
    cout << "?" << endl;
    cout << "\a";
    cout << "oka\ay" << endl;

    return 0;
}