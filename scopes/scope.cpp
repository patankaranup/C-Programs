#include <iostream>
using namespace std;
int another_func(); // function declaration

int main() // main has global scope as it is defined outside curly braces
{
    int sum = 0;                 // sum has block scope
    for (int i = 0; i < 10; i++) // i has for loop scope
    {
        sum = sum + i;
    }
    cout << "Sum is : " << sum << endl;
    another_func();
    return 0;
}
int another_func()
{
    cout << "This is another function outside main" << endl;
    // cout<<sum<<endl; // this will give error
    return 0;
}