#include <iostream>
using namespace std;
int main()
{
    // references variable have single source of data if one is change then the other will also be changed
    int var1 = 1024;
    int &var2 = var1;
    cout << "VAlue of var 1 is " << var1 << " and value of var 2 reference variable is " << var2 << endl;
    var2 = 2048;
    cout << "VAlue of var 1 is " << var1 << " and value of var 2 reference variable is " << var2 << endl;
    var1 = 4096;
    cout << "VAlue of var 1 is " << var1 << " and value of var 2 reference variable is " << var2 << endl;
    // this is normal variable assignment both will have separate  value
    int a = 10;
    int b = a;
    cout << a << "    " << b << endl;
    a = 20;
    cout << a << "    " << b << endl;
    b = 30;
    cout << a << "    " << b << endl;

    return 0;
}