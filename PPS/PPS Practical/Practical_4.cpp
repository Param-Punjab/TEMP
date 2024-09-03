// Input Marks of a student in 3 subject. Math's, English and Hindi. Find out aggregate marks and percentage marks.
#include <iostream>
using namespace std;


int main(){
  //Taking Variables
  float M, E, H, A, P, M_T, E_T, H_T, T_M, T_P_M;
  cout << "This script is used to find out aggregate marks and percentage marks of three subject where marks entered by the user" << endl;
    //Getting input of total marks obtained in Math's, English, Hindi
  cout << "Enter marks obtained in Math's: ";
  cin >> M;
  cout << "Enter marks obtained in English: ";
  cin >> E;
  cout << "Enter marks obtained in Hindi: "; 
  cin >> H;
  //Getting input total possible marks in Math's, English, Hindi
  cout << "Enter total possible marks in Math's: ";
  cin >> M_T;
  cout << "Enter total possible marks in English: ";
  cin >> E_T;
  cout << "Enter total possible marks in Hindi: ";
  cin >> H_T;
  //Aggregate Marks
  A = M + E + H;
  cout << "Aggregatre marks: " << A << endl;
  //Percentage Marks
  T_M = M + E + H;
  T_P_M = M_T + E_T + H_T;
  P = (T_M/T_P_M)*100;
  cout << "Percentage Marks: " << P << endl;
  return 0;
}