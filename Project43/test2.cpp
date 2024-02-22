#include <iostream>

using namespace std;
void change(int* number) {
	(*number) = (*number) *  2;

	//a = a * 2;
	//a *= 2
}

int main() {
	int num = 100;

	cout << "Before num = " << num << endl;

	change(&num);

	cout << "After num = " << num << endl;


	return 0;
}