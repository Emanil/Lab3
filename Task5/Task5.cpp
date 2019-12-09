#include <iostream>
using namespace std;

auto replace_chars(char *str, char inpSearch, char inpReplace) {
	char* end = str + 9;
	cout << end << endl;
	for (char *i = 0; i != end; i++) {

	}
	return str;
}

int main() {
	char str[] = "greetings", inpReplace, inpSearch;

	cout << "Search for a character to replace: ";
	cin >> inpSearch;

	// search if char in str
	for (char* i = str; i != str + 9; i++) {
		
	}

	cout << "Replace " << inpSearch << " with: ";
	cin >> inpReplace;

	cout << "Before: " << str << endl;
	replace_chars(str, inpSearch, inpReplace);
	cout << "After: " << str << endl;


}