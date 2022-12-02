#include <iostream>
using namespace std;
int main()
{
    cout << "/*" << endl;
    cout << "*/" << endl;
    // cout<< /*"*/"*/ <<endl; error
    cout << /*"*/ " /*" /*"*/ << endl;
    return 0;
}