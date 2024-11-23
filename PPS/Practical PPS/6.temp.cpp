#include <iostream>
using namespace std;

void f(int n){
    int a = 0, b = 1;

    for(int i = 0; i < n; i++){
        cout << a << " ";

        int next_term = a + b;
        a = b;
        b = next_term;
    }
}

int main(){
    int n;

    cout << "Enter number: ";
    cin >> n;

    f(n);

    return 0;
}