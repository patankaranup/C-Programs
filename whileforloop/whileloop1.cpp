// the code executes until the condition is true
#include <iostream>
using namespace std;
int main()
{
    int count = 1, sum = 0;
    while (count <= 10)
    {
        sum += count;
        cout << "The sum is " << sum << endl;
        count++;
    }

    return 0;
}