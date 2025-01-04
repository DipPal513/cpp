#include <iostream>

using namespace std;


int main(){
   

    // half pyramid 180 rotation
    int n;
    cin >> n;
    for(int i = n; i > 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
    cout << endl;
    }
}