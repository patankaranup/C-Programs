// the code executes until the condition is true
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += i;
        cout << "The sum of is : " << sum << endl;
    }

    return 0;
}