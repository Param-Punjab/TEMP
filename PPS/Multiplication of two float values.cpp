// Multiplication of two float values
#include <iostream>
#include <iomanip>
using namespace std;

float multi(float var1, float var2);

int main(){
	float var1, var2;
	cin >> var1 >> var2;
	if(1.00 <= var1 <= 1000.00 || 1.00 <= var2 <= 1000.00){
		multi(var1, var2);
	}
	else{
		return 1;
	}
	return 0;
}

float multi(float var1, float var2){
	float result = var1 * var2;
	cout << fixed << setprecision(4) << result;
	return result;
}
