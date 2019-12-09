#include <iostream>
using namespace std;

void swap_sort(int* a, int* b, int* c, bool order) {
	int list[3] = { *a, *b, *c };
	int i = 0, n = i + 1; // Iterators
	if (order == 1) { // Ascending
		while (list[0] > list[1] || list[0] > list[2] || list[1] > list[2]) { // While not sorted, can definitely be written better

			// Swaps values between i and n
			if (list[i] > list[n]) {

				int temp = list[i];
				list[i] = list[n];
				list[n] = temp;
			}
			//-----------------
			i++;
			n++;
			// Resetts the values of the iterators
			// So that we can look at the array again
			if (i == 3) {
				i = 0;
			}
			if (n >= 3) {
				n = 1;
			}
			//-----------------
		}

	}
	else if (order == 0) { // Descending
		for (int i = 0; i <= 1; i++) {
			while (list[0] < list[1] || list[0] < list[2] || list[1] < list[2]) {

				// Swaps values between i and n
				if (list[i] < list[n]) {

					int temp = list[i];
					list[i] = list[n];
					list[n] = temp;
				}
				i++;
				n++;
				if (i == 3) {
					i = 0;
				}
				if (n >= 3) {
					n = 1;
				}
			}
		}
	}
	*a = list[0]; // Untill now a,b,c hasn't changed
	*b = list[1];
	*c = list[2];
}

int main() {
	int userInp = 0, a, b, c;
	bool order;
	while (true) {
		cout << "Give 'a' a value (0 = quit): ";
		cin >> userInp;
		if (userInp == 0)
			break;
		a = userInp;
		cout << "Give 'b' a value: ";
		cin >> userInp;
		b = userInp;
		cout << "Give 'c' a value: ";
		cin >> userInp;
		c = userInp;
		cout << "Sort ascending/descending (1/0): ";
		cin >> order;

		swap_sort(&a, &b, &c, order);

		cout << a << ", " << b << ", " << c << endl;
	}
	return(0);
}