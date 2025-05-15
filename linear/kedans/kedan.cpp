#include <iostream>

using namespace std;

int main()
{

    int nums[] = {1, 5, -6, 4, 5, -1, -6, 8}, maxSum = 0, currSum = 0, n = 8;

    for (int i = 0; i < n; i++)
    {
        currSum += nums[i];
        cout << currSum << endl;
        
        if (currSum < 0)
        {
            currSum = 0;
        }
        if(maxSum < currSum){
            maxSum = currSum;
        }

    }
    cout << maxSum;
    return 0;
}