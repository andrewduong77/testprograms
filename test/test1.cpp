// output formatting with strings
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a = 157.2734;
    cout << "This number is " << fixed << setprecision(1) << a << "." << endl;
    string line = "This number is " + fixed + setprecision(1) + a + "." + "\n"; // This doesn't work this way! Why!?!?!?
    cout << line;
    return 0;
}
*/

// output formatting with streams
/*
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
    double a = 157.2734;
    cout << "This number is " << fixed << setprecision(1) << a << "." << endl;
    ostringstream fmtStr;
    fmtStr << "This number is " << fixed << setprecision(1) << a << ".\n";
    string line = fmtStr.str();
    cout << line;
    return 0;
}
*/

// calculate distance
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

double calculate_distance(int x, int y)
{
    x = abs(x);
    y = abs(y);
    return sqrt(x*x + y*y);
}

int main()
{
    int x, y;
    cout << "Please enter x distance moved: ";
    cin >> x;
    cout << "Please enter y distance moved: ";
    cin >> y;
    double z = calculate_distance(x, y);
    cout << "The distance moved is: " << fixed << setprecision(2) << z << endl;
}
