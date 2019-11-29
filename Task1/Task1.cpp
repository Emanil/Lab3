#include <iostream>
using namespace std;

int len_of_string(char arr) {
	for (int i = 0; i < arr; i++) {
		if(i==arr-1)
			return i;
	}
}

int main() {
	int len = 0;
	char arr[] = "computer";
	char* ptr = arr;
	
	len = len_of_string(*arr);

	cout << "The lenght is: " << len << endl;
}