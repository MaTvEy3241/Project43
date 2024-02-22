#include <iostream>

using namespace std;





int* test7() {
	int* pointer = new int;
	*pointer = 100;
	return pointer;
}

int main() {
	int* result = test7();
	cout << "addres " << result <<endl;
	cout << "Value " << *result << endl;


	return 0;
}