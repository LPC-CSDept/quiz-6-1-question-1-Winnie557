#include <iostream>
#include <iomanip>
using namespace std;

********************
Declare Function Prototypes
********************
void getinput(int &a, int &b){
    cout << "Enter two integers: " << endl;
    cin >> a >> b;
}
void swapTwoValues(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}
void getinput(float &a, float &b){
    cout << "Enter two floats: " << endl;
    cin >> a >> b;
}
void swapTwoValues(float &a, float &b){
    a = a+b;
    b = a-b;
    a = a-b;
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
	return 0;
}

