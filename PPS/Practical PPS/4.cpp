// Write a program to input a positive integer and check if it is a prime number using a loop
#include <iostream>
using namespace std;

bool primeNumber(int n){
    int i;
    if(n <= 1){
        return false;
    }
    else{
        for(i = 2; i * i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if(n <= 0){
        cout << "ERROR! You didn't enter a positive integer.";
        return 1;
    }
    else{
        if(primeNumber(n)){
            cout << n << " is a prime number." << endl;
        }
        else{
            cout << n << " is not a prime number." << endl;
        }
    }
    return 0;
}