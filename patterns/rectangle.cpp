#include <iostream>

using namespace std;

int main(){
     // rectangle pattern
    int row,col;
    cin >> row>>col;
    for (int i =1; i <= row; i++){

    for (int i =1; i <= col; i++){
        cout << "*";
    }
    cout << endl;
    }
}