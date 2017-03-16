#include <classmatrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") {
	matrix_t matrix;
	REQUIRE(matrix.rows() == 0);
	REQUIRE(matrix.columns() == 0);
}
