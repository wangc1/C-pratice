//3.6
#include <iostream>

int main7() {
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to he character code:";
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout.put('!');
	cout << endl << "Done" << endl;
	system("pause");
	return 0;
}