#include <iostream>
using namespace std;

int main()
{

    // reverse array
    // two pointer approach

    int nums[] = {4, 5, 6, 7, 8, -12, 4, 1};
    int size = 8;
    int target = 8;
    int start = 0;
    int end = size - 1;
    for (int i = 0; i < size; i++)
    {
        if (start < end)
        {
          swap(nums[start], nums[end]);
            start++;
            end--;
        }
        cout << nums[i];
    }

    return 0;
}