#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class Matrix
{
private:
	int **p;
	int n, m;
public:
	Matrix(); // (1)
	int rows();
	int columns();
	Matrix(int, int);// (2)
	~Matrix();// (3)	
	void fill(string);// (4)
	void printMatrix(); //(5)
	Matrix operator+(Matrix)const;// (6)
	Matrix operator*(Matrix)const;// (7)
	Matrix(Matrix &MatrixCopy);
	Matrix operator==(Matrix&)const;
	Matrix operator=(Matrix &MatrixCopy);
};
