/*
Name	: Azizdek Muminjonov
ID		: U2110207
Project : Lab 8 

Please, if you want to check design, run :)
*/
#include <iostream>

using namespace std;

void clear();

int main() {
	clear();
	cout << "Task 1\n\n";																		// Task 1
	int m, n, value, m2, n2;
	cout << "Please enter the number of row: ";
	cin >> m;
	cout << "Please enter the number of col: ";
	cin >> n;
	int matrix[15][15];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Input the value for row: " << i << " and col: " << j<< " :";
			cin >> value;
			matrix[i][j] = value;

		}
	}
	
	cout << "Please enter the number of row: ";
	cin >> m2;
	cout << "Please enter the number of col: ";
	cin >> n2;
	int matrix2[15][15];
	for (int i = 0; i < m2; i++) {
		for (int j = 0; j < n2; j++) {
			cout << "Input the value for row: " << i << " and col: " << j << " :";
			cin >> value;
			matrix2[i][j] = value;

		}
	}
	clear();
	cout << "First matrix:\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Second matrix:\n";
	for (int i = 0; i < m2; i++) {
		for (int j = 0; j < n2; j++) {
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
	cout << "1. Sum of matrices\n2. Transpose of matrices\n3. Product of matrices\n";
	cin >> value;
	cout << endl;
	switch (value) {
	case 1:																				// Sum matrices
	{
		cout << "Sum of matixs:\n";																
		int matrixSum[15][15];
		if (m == m2 && n == n2) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					matrixSum[i][j] = matrix[i][j] + matrix2[i][j];
					cout << matrix[i][j] + matrix2[i][j] << " ";

				}
				cout << endl;
			}
		}
		else {
			cout << "They can not be added, the amount of rows and cols must be equal T_T\n";
			cout << "Try again";
			cin.clear();
			cin.ignore(32767, '\n');
			cin.get();
			clear();
			main();
		}
		break; 
	}
	case 2:																				// Transpose of matrices
	{
		cout << "Tranpose of matrices\n";													
		int matrixTrampose1[15][15];
		int matrixTrampose2[15][15];
		int tm, tn, tm2, tn2;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				matrixTrampose1[i][j] = matrix[j][i];
				cout << matrix[j][i] << " ";
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < n2; i++) {
			for (int j = 0; j < m2; j++) {
				matrixTrampose2[i][j] = matrix[j][i];
				cout << matrix2[j][i] << " ";
			}
			cout << endl;
		}
		break;
	}
	case 3:																				// Product of matrices
	{
		cout << "Product of matrices\n";
		int matrixMulti[15][15];
		if (n == m2) {
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n2; j++) {
					int multi = 0;
					for (int k = 0; k < n; k++) {
						multi = multi + matrix[i][k] * matrix2[k][j];
					}
					matrixMulti[i][j] = multi;
					cout << matrixMulti[i][j] << " ";
				}
				cout << endl;
			}
			
		}
		else {
			cout << "They can not be multiplied, the amount of rows1 must be equal to cols2 T_T\n";
			cout << "Try again";
			cin.clear();
			cin.ignore(32767, '\n');
			cin.get();
			clear();
			main();
		}
		break;
	}
	}
	system("pause");


//task 2
	clear();
	cout << "Task 2\n\n";
	int salesMatrix[15][15], cost;
	for (int i = 0; i < 3; i++) {
		cout << "Enter the sales for product " << i + 1 << "\n"<<endl;
		for (int j = 0; j < 5; j++) {
			cout << "Salesman " << j + 1 << " : ";
			cin >> cost;
			salesMatrix[i][j] = cost;
			cout << endl;
		}
	}
	cout << "\t  S1  S2  S3  S4  S5\n";
	for (int i = 0; i < 3; i++) {
		cout << "Product " << i + 1 << " : ";
		for (int j = 0; j < 5; j++) {
			cout << salesMatrix[i][j] << "  ";
		}
		cout << endl;
	}
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum = 0;
		cout << "Total sales by salesman "<< i + 1<< " : ";
		for (int j = 0; j < 3; j++) {
			sum = sum + salesMatrix[j][i];
		}
		cout << sum << endl;
	}
	for (int i = 0; i < 3; i++) {
		sum = 0;
		cout << "Total sales of a product : " << i + 1 << " : ";
		for (int j = 0; j < 5; j++) {
			sum = sum + salesMatrix[i][j];
		}
		cout << sum << endl;
	}
	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
	return 0;
}

void clear() {
	cout << "\x1B[2J\x1B[H";
}