#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("matrix init", "[init]") {
	Matrix m;
	REQUIRE(m.rows() == 0);
	REQUIRE(m.columns() == 0);
}
