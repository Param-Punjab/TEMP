#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Use the ternary operator to check if the number is even or odd
    string result = (number % 2 == 0) ? "even" : "odd";

    // Output the result
    cout << "The number " << number << " is " << result << "." << endl;

    return 0;
}
