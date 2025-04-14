#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++) // Loop for rows
    {
        for (int j = 1; j <= i; j++) // Loop for columns
        {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
