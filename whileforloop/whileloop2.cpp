// the code executes until the condition is true
#include <iostream>
using namespace std;
int main()
{
    int count = 1, sum = 0, num;
    cout << "Enter a number to add upto :" << endl;
    cin >> num;
    while (count <= num)
    {
        sum += count;
        cout << "The sum is " << sum << endl;
        count++;
    }
    cout << "The total sum is " << sum << endl;

    return 0;
}