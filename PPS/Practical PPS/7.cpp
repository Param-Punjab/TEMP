#include <iostream>
using namespace std;

int GCD(int n1, int n2){
    int gcd = 1;
    for(int i = 1; i <= min(n1, n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int n1, n2;

    cout << "Enter Number one and Number two: ";
    cin >> n1 >> n2;

    if(n1 <= 0 || n2 <= 0){
        cout << "ERROR! Enter a positive integer.";
        return 1;
    }
    else{
        int gcd = GCD(n1, n2);
        cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    }
return 0;
}