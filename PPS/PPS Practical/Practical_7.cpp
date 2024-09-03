//Write the program to print the size of basic data type.
#include <iostream>
#include <string>
using namespace std;

int main(){
    //Declare a string variable to store the data type entered by the user
    string DataType;

    //Prompt the user to enter a basic data type
    cout << "Enter a basic data type(int, float, double, char, short): ";
    cin >> DataType; //Read the user input 

    //Check if the entered data type is "int"
    if (DataType == "int") {
      //Print the size of the int data type using the sizeof operator
      cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    }
    // Check if the entered data type is "float"
    else if (DataType == "float") {
      //Print the size of the float data type uisng the sizeof operator
      cout << "Sizea of float: " << sizeof(float) << " bytes" << endl;
    }
    else if (DataType == "double") {
      //Print the size of the double data type using the sizeof operator
      cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    }
    else if (DataType == "char") {
      //Print the size of the char data type using the sizeof operator
      cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    }
    else if (DataType == "short") {
      //Print the size of the short data type using the sizeof operator
      cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    }
    else {
      //If unknown data type entered
      cout << "Unknown data type" << endl;
    }
  return 0;
}