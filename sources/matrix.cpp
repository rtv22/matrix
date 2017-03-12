#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	string filename;
	int ySize, xSize;
	int sum, comp;
	cout << "Кол-во столбцов: ";
	cin >> ySize;
	cout << "Кол-во сток: ";
	cin >> xSize;
	Matrix Matrix_1(xSize, ySize);
	cout << "Введите имя файла для 1й матрицы: ";
	cin >> filename;
	Matrix_1.fill(filename);
	Matrix_1.printMatrix();
	Matrix Matrix_2(xSize, ySize);
	cout << "Введите имя файла для 2й матрицы: ";
	cin >> filename;
	Matrix_2.fill(filename);
	Matrix_2.printMatrix();
	Matrix Sum = Matrix_1 + Matrix_2;
	Sum.printMatrix();
	Matrix Comp = Matrix_1*Matrix_2;
	Comp.printMatrix();
	system("pause");
}
