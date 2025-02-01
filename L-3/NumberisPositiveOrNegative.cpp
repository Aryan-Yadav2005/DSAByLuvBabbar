#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a value for a :";
    cin >> a;

    if (a > 0)
    {
        cout << "a is positive " << endl;
    }
    else if (a < 0)
    {
        cout << "a is negative" << endl;
    }
    else
    {
        cout << "a is equal to 0" << endl;
    }
}