#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "123";
    int num = 0;
    num = stoi(str, nullptr, 10);
    cout << "str is " << str << " and num is " << num << endl;
    return 0;
}