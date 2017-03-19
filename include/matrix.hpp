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
	auto rows() -> unsigned int;
    	auto columns() -> unsigned int;
	bool operator==(Matrix&)const;
	Matrix operator=(Matrix &MatrixCopy);
	friend ostream& operator<<(ostream& rez, Matrix &MatrixCopy);
	friend istream& operator>>(istream& rez, Matrix &MatrixCopy);
};
