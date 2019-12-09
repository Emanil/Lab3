#include <iostream>
using namespace std;

const int average_salary(const int *arr, int numOfEmp) {
	int avarageSalary = 0;
	for (int i = 0; i < numOfEmp; i++) {
		avarageSalary += arr[i];
	}
	
	return avarageSalary / numOfEmp;
}

int main() {
	int numOfEmployees = 0;
	cout << "How many employees are there? ";
	try {
		cin >> numOfEmployees;
		if (numOfEmployees == 0)
			throw "bruh";
	}
	catch (const char *xd) {
		cout << "Avarage salary of 0 employees is 0." << endl;
		return 0;
	}

	int* arrSalaries = new int[numOfEmployees];

	for (int i = 0; i < numOfEmployees; i++) {

		int userInp = 0;
		cout << "Give salary for employee " << i+1 << ": ";
		cin >> userInp;
		arrSalaries[i] = userInp;
	}

	cout << "The avarage salary is: " << average_salary(arrSalaries, numOfEmployees) << endl;

	delete[] arrSalaries;
}