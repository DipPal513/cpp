#include <iostream>

using namespace std;


int main(){
   

    // holo rectangle pattern
//     int row,col;
//     cin >> row>> col;
//     for(int i =1; i<=row; i++){
//         for (int j = 1; j <= col ; j++){
//             if(i == 1 || i == row || j == 1 || j == col){ 
//                 cout << "*";
//             }else cout << " ";
//         }
//         cout << endl;
//     }
// }

// inverted pyramid

    int n;
    cin >> n;
    for(int i = n; i>= 1; i--){
        for (int j =1; j<=i; j++){
            cout << "* ";
        }
    cout << endl;
    }

    // half pyramid 180 rotation
}