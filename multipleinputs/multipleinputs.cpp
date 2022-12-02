#include <iostream>
using namespace std;
int main()
{
    int sum = 0, value = 0;
    // this will keep reading until we are entering valid value i.e integer type and you are not entering end of file
    while (cin >> value)
    {
        sum += value;
    }
    cout << "The sum is : " << sum << endl;

    return 0;
}