// Write a program to input a positive integer and calculate the sum of its digits using loop
#include <iostream>
using namespace std;

int sumDigit(int n){
    int sum = 0, lastdigit;

    while(n > 0){
        lastdigit = n % 10;
        sum += lastdigit;
        n /= 10;
    }

    return sum;
}

int main(){
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;

    if(n <= 0){
        cout << "ERROR! you didn't enter a positive integer";
        return 1;
    }
    else{
        cout << "Sum of digits: " << sumDigit(n) << endl;
    }
return 0;
}