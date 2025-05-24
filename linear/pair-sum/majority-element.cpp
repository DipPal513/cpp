#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // majority element find
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 2, 2};
    int n = 9;
    int ans = nums[0];
    int f = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            f++;
        }
        else
        {
            f = 1;
            ans = nums[i];
        }
        if(f > n/2){
            cout << ans;
        }
    }
    cout << ans;
 
    return 0;
}