#include <iostream>
using namespace std;
int main() {
    int n;
    int i = 2;
    // Take input from user
    cout << "Enter a number: "; 
    cin >> n;
    // Check if the number is prime
   while(i <= n/2){
        if(n % i == 0){
            cout << "The number is not a prime number";
        };
        i++;
        
   };
    cout << "The number is a prime number";
    return 0;
}
