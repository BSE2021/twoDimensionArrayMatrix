// twoDimensionArrayMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{ //declared and initialized the array of two dimensional
	int a[2][2] = { {-1,0},{3,6} };
	int b[2][2] = { {9,-3},{5,10} };
	int c[2][2];
	//accessing the array values using nested loop
	int i, j;
	//Matri A
	cout << "\nThe matrix A is: ";
	cout << "\n========================\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			//cout << "\nThe value at ( " << i<<","<< j << ") = "<<a[i][j];
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}

	//Matrix B
	cout << "\nThe matrix B is: ";
	cout << "\n========================\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			//cout << "\nThe value at ( " << i << "," << j << ") = " << a[i][j];
			cout << b[i][j] << "\t";
		}
		cout << "\n";
	}
	//Add two Matrices and display
	cout << "\nThe resultant matrix C is: ";
	cout << "\n========================\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
			//cout << "\nThe value at ( " << i << "," << j << ") = " << c[i][j];
			cout << c[i][j] << "\t";
		}
		cout << "\n";
	}

   
}
