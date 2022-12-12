#include <iostream>
using namespace std;
int main()
{
    // pointer holds address of another object
    // it can change its address
    // different datatype cannot have pointers to each other
    int *p1 = nullptr;
    int *p2 = NULL;
    int *ptr = 0;
    int val = 50;
    int *pointer_val = &val;
    cout << " val is " << val << endl;
    cout << " pointer val is " << pointer_val << endl;  // gives address
    cout << " pointer val is " << *pointer_val << endl; // gives value
    *pointer_val = 51;
    cout << *pointer_val << endl;
    cout << val << endl;

    return 0;
}