#include <iostream>
#include <iomanip>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void getinput(int &a, int &b){
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
}
void getinput(float &a, flat &b){
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
}
void swapTwoValues(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapTwovalues(float &a, float &b){
	float temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int num1, num2;
	float fnum1, fnum2;
	getinput(num1, num2);
	cout << " Before Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;
	swapTwoValues(num1, num2);
	cout << " After Swap" << setw(5) << num1 << setw(5) << num2 << setw(5) << endl;

	// -- Call overloaded function with float parameters
	getinput(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
	swapTwoValues(fnum1, fnum2);
	cout << setw(5) << fnum1 << setw(5) << fnum2 << setw(5) << endl;
}

// ******************************
// Implement all your functions here
// ******************************