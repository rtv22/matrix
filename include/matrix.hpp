class Matrix
{
private:
	int **p;
	int n, m;
public:
	Matrix(); // (1)
	Matrix(int, int);// (2)
	~Matrix();// (3)	
	void fill(string);// (4)
	void printMatrix(); //(5)
	Matrix operator+(Matrix)const;// (6)
	Matrix operator*(Matrix)const;// (7)
	Matrix(Matrix &MatrixCopy);
	bool operator==(Matrix&)const;
	Matrix operator=(Matrix &MatrixCopy);
	friend ostream& operator<<(ostream&, Matrix &MatrixCopy);
	friend istream& operator>>(istream&, Matrix &MatrixCopy);
};
