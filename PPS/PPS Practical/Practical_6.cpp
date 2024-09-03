// Program to calculate area and perimeter of rectangle where length and breadth are input by the user.
#include <iostream>
using namespace std;

int main(){
    float L, B, A, P;
    cout << "This script will show you the area and perimeter of a rectangle where length and breadth are input by you." << endl;
    
    // Getting input length and breadth
    cout << "Enter Length: ";
    cin >> L;
    cout << "Enter Breadth: ";
    cin >> B;
    
    // Area
    A = L * B; 
    cout << endl << "Area of rectangle: " << A << endl;
    
    // Perimeter
    P = 2 * (L + B);
    cout << "Perimeter of rectangle: " << P << endl;
    
    return 0;
}
