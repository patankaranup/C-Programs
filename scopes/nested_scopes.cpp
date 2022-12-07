#include <iostream>
using namespace std;
int reused = 42; // reused has global scope
int main()
{
    int unique = 24; // block scope
    cout << reused << " " << unique << endl;
    int reused = 0; // this will create new local variable with same name as global variable
    cout << reused << " " << unique << endl;
    cout << ::reused << " " << unique << endl; // ::global_var explicitly calling global variable
    return 0;
}