#include <iostream>
using namespace std;

int countDigit(int n){
    int count = 0;

    while(n > 0 ){
        n /= 10;
        count++;
    }
    return count;
}

int main(){
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if(n <= 0){
        cout << "ERROR! You didn't enter positive integer.";
        return 1; 
    }
    else{
        cout << "Number of digits: " << countDigit(n) << endl;
    }
    return 0;
}