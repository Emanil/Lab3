#include <iostream>
using namespace std;

auto replace_chars(char *str, char inpSearch, char inpReplace) {

	while (*str != '\0') {
		cout << *str << endl;
		if (*str == inpSearch) {
			*str = inpReplace;
		}
		str++;
	}

}

int main() {
	char str[] = "greetings", inpReplace, inpSearch;
	char *ptr;

	ptr = str;

	cout << "Search for a character to replace: ";
	cin >> inpSearch;

	// search if char inp in str
	while(true) {
		if (*ptr == inpSearch) {
			cout << "Replace " << inpSearch << " with: ";
			cin >> inpReplace;

			cout << "Before: " << str << endl;
			replace_chars(str, inpSearch, inpReplace);
			break;
		}
		else if(*ptr == '\0') {
			cout << "Char not found!" << endl;
			return 0;
		}
		ptr++;
	}

	cout << "After: " << str << endl;

}