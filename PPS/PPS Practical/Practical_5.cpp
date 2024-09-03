// Program to convert temperature in Fahrenheit degree into centigrade degree.
#include <iostream>
using namespace std;

int main(){
  float F, C, X;
  //Getting Input
  cout << "Enter value which you want to convert into Celsius (°C) from Fahrenheit (°F): ";
  cin >> F;
  //Calculation
  X = F - 32.0;
  C = (5.0/9.0)*X;
  //Showing Output
  cout << "Value in Celsius (°C)" << C << endl;
  return 0;
}