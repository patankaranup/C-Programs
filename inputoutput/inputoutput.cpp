// iostream have 4 objects of two types istream and ostream
// 1 cin 2 cout 3 cerr 4 clog
// :: is scope operator means use cout from std library
#include <iostream>
// using namespace std;
int main()
{
    std::cout << "Enter Two Numbers : " << std::endl;
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    std::cout << "The sum of two numbers " << n1 << " and " << n2 << " is " << n1 + n2 << std::endl;

    return 0;
}
