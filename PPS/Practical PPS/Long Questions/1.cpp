#include <iostream>
using namespace std;

int main(){
    int a, n, fact = 1;

    cout << "Enter a positive integar: ";
    cin >> n;

    if(n >= 0){
        for(a=1; a<=n; a++){
            fact *= a;
        }
        cout << "Factorial: " << fact;
    }
    else{
        cout << "Error";
    }
    return 0;
}