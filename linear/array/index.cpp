#include<iostream>

using namespace std;



int main(){

    int nums[] = {4,5,6,7,8,-12,4,1};
    int size = 8;
    // int smallest = INT_MAX;
    // smallest number in array
    for (int i = 0; i < size; i++){
        if(nums[i] < nums[0]){
            nums[0] = nums[i];
        }

        cout << "smallest = " << nums[0] << endl;
    }

    return 0;
}