#include <iostream>
using namespace std;

int len_of_string(char *arr) {
	int n = 0;
	for (char i = 0; i < *(arr+i); i++) {
		n++;
	}
	return (n);
}

int main() {
	int len = 0;
	char arr[] = "four";
	char* ptr = arr;

	len = len_of_string(ptr);

	cout << "The lenght is: " << len << endl;
}