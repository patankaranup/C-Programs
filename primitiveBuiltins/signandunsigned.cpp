#include <iostream>
using namespace std;
int main()
{
    // when you try to store a signed number to unsigned int
    //  first it will ignore the sign
    //  then it will make the binary number of the size of the data type
    //  eg -1 in unsigned char will be converted to 32 bit binary number
    //  then it will do 1s complement of the binary number (i.e reverse the bits 1 to 0 or 0 to 1)
    //  then it will do 2s complement of the 1s complement number (i.e add 1 to the 1s complement)
    //  then the output number is converted to decimal and store in the variable

    unsigned int num = -1;
    int x = num;
    cout << num << " , " << x << endl;

    return 0;
}