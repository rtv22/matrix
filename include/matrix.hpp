#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

class Matrix
{
private:
	int **p;
	int n, m;
public:
	Matrix(); // (1)
	Matrix(int, int);// (2)
	~Matrix();// (3)	
	void fill();// (4)
	void printMatrix(); //(5)
	Matrix operator+(Matrix)const;// (6)
	Matrix operator*(Matrix)const;// (7)
	Matrix(Matrix &MatrixCopy);
};

Matrix::Matrix(){
	n = 0;
	m = 0;
}

Matrix::Matrix(int xSize, int ySize){ //заполнить матрицу 0
	p = new int * [ySize];
	for (int count = 0; count < ySize; count++)
		p[count] = new int[xSize];
	n = xSize;
	m = ySize;
}

void Matrix::fill(){
	ifstream file("file.txt");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			file >> p[i][j];
		}
	}
}

void Matrix::printMatrix() {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << p[i][j] << " ";
		}
		cout << "\n";
	}
	cout << flush;
}

Matrix::Matrix(Matrix&MatrixCopy){
	n = MatrixCopy.n;
	m = MatrixCopy.m;
	p = new int*[n];
	for (int i = 0; i < n; i++) {
		p[i] = new int[m];
		for (int j = 0; j < m; j++) {
			p[i][j] = MatrixCopy.p[i][j];
		}
	}
}

Matrix Matrix::operator+(Matrix MatrixCopy)const {

	Matrix re(n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			re.p[i][j] = p[i][j] + MatrixCopy.p[i][j];
		}
	}
	return re;
}

Matrix Matrix::operator*(Matrix MatrixCopy)const {
	Matrix re(n, m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			re.p[i][j] = 0;
			for (int k = 0; k < m; k++) 
				re.p[i][j] += p[i][k] * MatrixCopy.p[k][j];
		}
	}
	return re;
}

Matrix::~Matrix(){
	for (int i = 0; i < n; i++){
		delete[] p[i];
	}
	delete[] p; 
}
