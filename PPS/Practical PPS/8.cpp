#include <iostream>
using namespace std;

int LCM(int n1, int n2){
    int lcm = max(n1, n2);
    while(true){
        if(lcm % n1 == 0 && lcm % n2 == 0){
            cout << "lcm is:" <<  lcm;
            break;
        }
    lcm++;
    }
return lcm;
}

int main(){
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    if(n1 <= 0 || n2 <= 0){
        cout << "ERROR!";
        return 1;
    }
    else{
        int lcm = LCM(n1, n2);
    }
    return 0;
}