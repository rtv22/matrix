#include <classmatrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") {
	matrix_t matrix;
	REQUIRE(matrix.rows() == 0);
	REQUIRE(matrix.columns() == 0);
}

SCENARIO("with params", "[init]")
{
	int init = 5;
	Matrix temp(init, init);
	REQUIRE(temp.rows() == 5);
	REQUIRE(temp.columns() == 5);
}

SCENARIO("copy", "[init]")
{
	int init = 5;
	Matrix temp(init, init);
	Matrix copy(temp);
	REQUIRE(copy.rows() == 5);
	REQUIRE(copy.columns() == 5);
}
