#include <iostream>
using namespace std;
int main()
{
    bool yesorno = true;
    char cha = 'ch';
    wchar_t wch = 'w_ch';
    char16_t ch16 = 'ucch16bit';
    char32_t ch32 = 'ucch32bit';
    short s = 16;
    int i = 16;
    long l = 32;
    long long ll = 64;

    float f = 2.345645;
    double d = 2.1234567890;
    long double ld = 2.9087654321;
    cout << "-------------Size of all primitives Data Types-------------" << endl;

    cout << "Size of bool: " << sizeof(yesorno) << " bits" << endl;
    cout << "Size of wide char: " << sizeof(wch) << " byte" << endl;
    cout << "Size of char16 t: " << sizeof(ch16) << " byte" << endl;
    cout << "Size of char32: " << sizeof(ch32) << " byte" << endl;
    cout << "Size of short: " << sizeof(s) << " byte" << endl;
    cout << "Size of long: " << sizeof(l) << " byte" << endl;
    cout << "Size of long long: " << sizeof(ll) << " byte" << endl;
    cout << "Size of char: " << sizeof(cha) << " byte" << endl;
    cout << "Size of int: " << sizeof(i) << " bytes" << endl;
    cout << "Size of float: " << sizeof(f) << " bytes" << endl;
    cout << "Size of double: " << sizeof(d) << " bytes" << endl;
    cout << "Size of long double : " << sizeof(ld) << " byte" << endl;

    cout << "-------------Memory address of all variables-------------" << endl;
    cout << "Memory Address of bool: " << &yesorno << endl;
    cout << "Memory Address of wide char: " << &wch << endl;
    cout << "Memory Address of char16 t: " << &ch16 << endl;
    cout << "Memory Address of char32: " << &ch32 << endl;
    cout << "Memory Address of short: " << &s << endl;
    cout << "Memory Address of long: " << &l << endl;
    cout << "Memory Address of long long: " << &ll << endl;
    cout << "Memory Address of char: " << &cha << endl; // some error here
    cout << "Memory Address of int: " << &i << endl;
    cout << "Memory Address of float: " << &f << endl;
    cout << "Memory Address of double: " << &d << endl;
    cout << "Memory Address of long double : " << &ld << endl;
    cout << &cha; // some error here

    return 0;
}