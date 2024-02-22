#include <iostream>

using namespace std;





int* test8() {
	int number = 100
		;
	return &number;
}

int main() {
	int* result = test8();
	cout << "addres " << result << endl;
	
	cout << "Value " << *result << endl;


	return 0;
}