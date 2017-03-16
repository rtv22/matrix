#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") {
	Matrix matrix;
	REQUIRE(matrix.rows() == 0);
	REQUIRE(matrix.columns() == 0);
}

SCENARIO("params init", "[params init]") {
	int init = 5;
	Matrix matrix(init, init);
	REQUIRE(matrix.rows() == 5);
	REQUIRE(matrix.columns() == 5);
}

SCENARIO("matrixCopy", "[MatrixCopy]") {
	int a = 2, b = 2;
	Matrix matrix(a, b);
	REQUIRE(matrix.rows() == a);
	REQUIRE(matrix.columns() == b);
}

SCENARIO("add", "[operator +]")
{
	int init = 4;
	Matrix Matr_1(init, init);
	Matrix Matr_2(Matr_1), rez(Matr_1);
	std::ifstream("Matr_1.txt") >> Matr_1;
	std::ifstream("Matr_2.txt") >> Matr_2;
	std::ifstream("rez.txt") >> rez;
	REQUIRE(Matr_1 + Matr_2 == rez);
}
