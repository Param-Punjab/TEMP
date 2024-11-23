// Write a program to input a positive integer and print all its divisors using a loop.
#include <iostream>
using namespace std;

int divisor(int n){
    int i;
    for( i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}

int main(){
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if(n <= 0){
        cout << "ERROR! You enter a positive integer.";
        return 1;
    }
    else{
        cout << divisor(n) << endl;
    }
    return 0;
}