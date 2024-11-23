// Write a program to print N terms of the Fibonacci sequence using a loop.
#include <iostream>
using namespace std;

void fibonacci(int n){
    int a = 0, b = 1; 

    for (int i = 0; i < n; i++){
        cout << a << " ";

        int next_term = a + b;
        a = b;
        b = next_term;
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    fibonacci(n);

    return 0;
}