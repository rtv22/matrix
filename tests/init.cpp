#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") {
	matrix_t matrix;
	REQUIRE(Matrix_1.xSize() == 0);
	REQUIRE(Matrix_1.ySize() == 0);
}
