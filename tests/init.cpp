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
