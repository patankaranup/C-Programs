#include <iostream>
// #include <stack>
using namespace std;
int main()
{
    int i = 24;
    int j = 25;
    int sum = i + j;
    cout << "Sum is " << sum << endl;
    cout << &i << endl;
    cout << &j << endl;
    cout << &sum << endl;

    return 0;
}