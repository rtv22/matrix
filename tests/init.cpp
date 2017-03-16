#include <classmatrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") {
	matrix_t matrix;
	REQUIRE(matrix.n() == 0);
	REQUIRE(matrix.m() == 0);
}
