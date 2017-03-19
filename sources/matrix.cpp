#include "matrix.hpp"

Matrix::Matrix() : n(0), m(0), p{nullptr}
{
	
}

int Matrix::rows()
{
	return n;
}

int Matrix::columns()
{
	return m;
}

Matrix::Matrix(int xSize, int ySize) : n(xSize), m(ySize)
{
	p = new int *[xSize];
	for (int i = 0; i < xSize; i++){
		p[i] = new int[ySize];
	}
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

	Matrix Matrix::operator=(const Matrix &MatrixCopy) //перегрузка оператора присваивания
	{
		for (int i = 0; i < n; i++){
			delete[] p[i];
		}
		delete[] p;
		n = MatrixCopy.n;
		m = MatrixCopy.m;
		p = new int*[n];
		for (int i = 0; i < n; i++)
		{
			p[i] = new int[MatrixCopy.m];
		}
		p[n][m] = MatrixCopy.p[n][m];
		return *this;
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

bool Matrix::operator == (const Matrix &MatrixCopy)const{
	Matrix re(n, m);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (p[i][j] != MatrixCopy.p[i][j]){
				return false;
			}
			break;
		}
		break;
	}
	return true;
}

istream& operator >> (istream& in,const Matrix& MatrixCopy){
	for (int i = 0; i < MatrixCopy.n; i++){
		for (int j = 0; j < MatrixCopy.m; j++){
			rez >> MatrixCopy.p[i][j];
		}
	}
	return rez;
}

ostream& operator <<(ostream& out,const Matrix& MatrixCopy){
	for (int i = 0; i < MatrixCopy.n; i++){
		for (int j = 0; j < MatrixCopy.m; j++){
			rez << MatrixCopy.p[i][j];
		}
	}
	return rez;
}

Matrix::~Matrix(){
	for (int i = 0; i < n; i++){
		delete[] p[i];
	}
	delete[] p; 
}
