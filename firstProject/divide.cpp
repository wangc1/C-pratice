//3.11
#include <iostream>

int main9() {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Integer division: 9 / 5 = " << 9 / 5 << endl;
	cout << "Floating-point division: 9.0/5.0 = ";
	cout << 9.0 / 5.0 << endl;
	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants: le7/9.0 = ";
	cout << 1.e7f / 9.0f << endl;
	cout << 1.e7f / 9.0f << endl;
	system("pause");
	return 0;
}