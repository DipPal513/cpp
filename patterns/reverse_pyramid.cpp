#include <iostream>

using namespace std;

int main()
{
    int n = 6; // Number of rows

    for (int i = n; i > 0; i--)
    {
        // Print leading spaces
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}