#include <matrix.hpp>
#include <catch.hpp>
#include <iostream>

using namespace std;

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

SCENARIO("copy", "[Copy]")
{
	int init = 2;
	Matrix temp(init, init);
	Matrix copy(temp);
	REQUIRE(copy.rows() == 2);
	REQUIRE(copy.columns() == 2);
}

SCENARIO("ADD", "[oper+]")
{
	Matrix a, b, rez;
	std::ifstream ("Matr_1.txt") >> a;
	std::ifstream ("Matr_2.txt") >> b;
	std::ifstream("rez.txt") >> rez;
	REQUIRE((a+b) == rez);
}

SCENARIO("mult", "[oper*]")
{
	int init = 2;
	Matrix a(init, init);
	Matrix b(a), rez(a);
	std::ifstream("Matr_1.txt") >> a;
	std::ifstream("Matr_2.txt") >> b;
	std::ifstream("rez_1.txt") >> rez;
	REQUIRE((a * b) == rez);
}
