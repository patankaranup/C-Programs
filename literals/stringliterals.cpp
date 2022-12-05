#include <iostream>
using namespace std;
int main()
{
    // single quotes 'a' char
    // double quotes "abcd" string
    // string is a array of constant characters
    // the compiler appends a null character ('\O') to every string literal
    // hence the actual size is one more than its apparent size. "Abcd" -> Abcd\O
    char a = 'a';
    string b = "Abcde";
    cout << a << endl;
    cout << b << endl;
    return 0;
}