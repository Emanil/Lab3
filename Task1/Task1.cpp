#include <iostream>
using namespace std;

int len_of_string(char *arr) {
	for (char i = 0; i < *arr-1; i++) {
		cout << arr << endl;
		return i;
	}
}

int main() {
	int len = 0;
	char arr[] = "four";
	char* ptr = arr;

	len = len_of_string(ptr);

	cout << "The lenght is: " << len << endl;
}