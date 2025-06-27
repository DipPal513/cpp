#include <iostream>
using namespace std;

int main()
{

    int n = 20;
    for (int i = 1; i <= n; i++)
    {
        // space print
        for(int j = 1; j <= n-i; j++){
               cout << " ";
        }
        // first number
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        // second number
        for(int j = i-1; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}