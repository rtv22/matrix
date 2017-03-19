#include <matrix.hpp>
#include <catch.hpp>
#include <iostream>

using namespace std;

SCENARIO("matrix init", "[init]") {
	Matrix matrix;
	REQUIRE(matrix.rows() == 0);
	REQUIRE(matrix.columns() == 0);
}

SCENARIO("params init", "[init]") {
	int init = 5;
	Matrix matrix(init, init);
	REQUIRE(matrix.rows() == 5);
	REQUIRE(matrix.columns() == 5);
}

SCENARIO("copy", "[init]")
{
	int init = 2;
	Matrix temp(init, init);
	Matrix copy(temp);
	REQUIRE(copy.rows() == 2);
	REQUIRE(copy.columns() == 2);
}

SCENARIO("comp", "[init]")
{
	Matrix a(2, 2);
	Matrix b(2, 2);
	std::ifstream ("Matr_1.txt") >> a;
	std::ifstream ("Matr_1_1.txt") >> b;
	REQUIRE(a == b);
}
SCENARIO("add", "[init]")
{
	Matrix a(2, 2);
	Matrix b(2, 2);
	Matrix c(2, 2);
	std::ifstream ("Matr_1.txt") >> a;
	std::ifstream ("Matr_2.txt") >> b;
	std::ifstream ("rez.txt") >> c;
	REQUIRE((a + b) == c);
}


