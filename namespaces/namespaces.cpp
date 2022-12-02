// namespace stops name collisions
// using allows us to use the function inside library without explicitly writing it
// using library::cin or using namesapce library
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    cout << "Enter any number " << endl;
    int n1;
    cin >> n1;
    cout << "The square of the number you enter is " << n1 * n1 << endl;

    return 0;
}