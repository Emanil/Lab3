#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int is_sorted(int arr[4]);

bool is_palindrome(char str[], int len);

void array_rows_cols(int** arr, int userInpRows, int userInpColums);

void swap_sort(int& a, int& b, int& c, bool order);

void shrink_array(int* arr, int size);

int vector_Alternatives(int userInp, string wordInp, string userYN, vector<string>& vector);