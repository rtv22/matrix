#include <classmatrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") {
	Matrix matrix;
	REQUIRE(matrix.n() == 0);
	REQUIRE(matrix.m() == 0);
}
