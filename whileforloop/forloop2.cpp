// the code executes until the condition is true
#include <iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter the number to add upto :" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
        cout << "The sum is : " << sum << endl;
    }
    cout << "The sum is :" << sum << endl;
    return 0;
}