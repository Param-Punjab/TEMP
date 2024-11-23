// sum of even and odd numbers
#include <iostream>
using namespace std;

int evenOdd(int N){
    int sumEven = 0, sumOdd = 0;

    for(int i =1; i <= N; i++){
        if(i % 2 == 0) sumEven += i;
        else sumOdd += i;
    }
    cout << "Sum Even: " << sumEven;
    cout << endl << "Sum Odd: " << sumOdd;
    return 0;
}

int main(){
    int N, sumEven, sumOdd;
    cout << "Enter a number: ";
    cin >> N;
    if(N <= 0){
        cout << "ERROR";
        return 1;
    }
    else{
        evenOdd(N);
    }
    return 0;
}