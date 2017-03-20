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
	Matrix(int, int);// (2)
	~Matrix();// (3)	
	void printMatrix(); //(5)
	Matrix operator+(const Matrix)const;// (6)
	Matrix operator*(const Matrix)const;// (7)
	Matrix(Matrix &MatrixCopy);
	auto rows() ->int;
    	auto columns() ->int;
	bool operator==(const Matrix&)const;
	Matrix operator=(const Matrix &MatrixCopy);
	friend ostream& operator<<(ostream&,const Matrix&);
	friend istream& operator>>(istream&,const Matrix&);
};
