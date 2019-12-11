#include <iostream>
#include <vector>
#include <string>

using namespace std;

int vector_Alternatives(int userInp, string wordInp, string userYN, vector<string>& vector) {
	int len = 0, i = 0;
	switch (userInp) {

	case 1:
		cout << "Are you sure? [Y/N] ";
		cin >> userYN;
		if (userYN == "y" || userYN == "Y") {
			vector.clear();
		}
		break;

	case 2:
		while (true) {
			cout << "Insert a name [Q=quit]: ";
			cin >> wordInp;
			if (wordInp == "q" || wordInp == "Q")
				break;
			else {
				vector.insert(vector.end(), wordInp);
			}
		}
		break;

	case 3:
		cout << "Search for a name: ";
		cin >> wordInp;
		len = wordInp.length(); // Lenght of the search
		for (int i = 0; i < vector.size(); i++) { // Do for the whole vector
			auto currentWord = vector.at(i);
			for (int n = 0; n < len; n++) {
				if (wordInp[n] == currentWord[n] && n == len - 1) { // If characters of the word in the vector and search are the same for len, found 
					cout << "Found: " << currentWord << " ";
				}
			}
		}
		break;

	case 4:
		cout << "Delete the name: ";
		cin >> wordInp;
		do {
			try { // Know this from try and except in python
				if (wordInp == vector.at(i)) {
					vector.erase(vector.begin() + i);
					cout << "Deleted!" << endl;
					break;
				}
			}
			catch (const std::exception&) { // Catch if "i" goes out of range
				cout << "Not found." << endl;
				break;
			}
			i++;
		} while (wordInp != vector.at(i));
		break;

	case 5: // Prints every word
		cout << "<";
		for (auto i = vector.begin(); i != vector.end(); i++) {
			cout << *i;
			if (i != vector.end() - 1) {
				cout << ", ";
			}
		}
		cout << ">" << endl;
		break;

	case 6:
	default:
		return false;
	}
}

int main() {
	int userInp = 1;
	string wordInp, userYN;
	vector<string> vector;
	while (userInp) {
		cout << endl;
		cout << "MENU:" << endl;
		cout << "1: Initialise vector" << endl;
		cout << "2: Insert" << endl;
		cout << "3: Search" << endl;
		cout << "4: Delete" << endl;
		cout << "5: Print" << endl;
		cout << "6: Quit" << endl;
		cout << endl;
		cout << "Input: ";
		cin >> userInp;

		userInp = vector_Alternatives(userInp, wordInp, userYN, vector);
	}
	return(0);
}