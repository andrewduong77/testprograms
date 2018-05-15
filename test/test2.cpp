#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    double val = 2.5;
    string out;
    ostringstream ost;
    ost << "The value is " << val << ".\n";
    out = ost.str();
    cout << out;
}