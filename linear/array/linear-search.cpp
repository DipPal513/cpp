#include<iostream>
using namespace std;



int main(){


    // linear search

    int nums[] = {4,5,6,7,8,-12,4,1};
    int size = 8;
    int target = 8;
    for (int i = 0; i < size; i++){
        if(nums[i] == target){
            cout << i;
        }
    }

    return 0;
}