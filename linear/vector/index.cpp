#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> fruits = {"apple", "banana", "cherry"};
    
    fruits.push_back("papia");
    fruits.push_back("dongle");
    fruits.clear();
    for(int i = 0; i < fruits.size(); i++){
        cout << fruits[i] << endl;
    }
    return 0;
}