#include <matrix.hpp>
#include <catch.hpp>
#include <iostream>

using namespace std;

SCENARIO("matrix init", "[init]") {
	Matrix matrix;
	REQUIRE(matrix.rows() == 0);
	REQUIRE(matrix.columns() == 0);
}

SCENARIO("params init", "[init with params]") {
	int init = 5;
	Matrix matrix(init, init);
	REQUIRE(matrix.rows() == 5);
	REQUIRE(matrix.columns() == 5);
}

SCENARIO("copy", "[copy]")
{
	int init = 2;
	Matrix temp(init, init);
	Matrix copy(temp);
	REQUIRE(copy.rows() == 2);
	REQUIRE(copy.columns() == 2);
}

SCENARIO("add", "[oper+]")
{
	Matrix A(2, 2);
	Matrix B(2, 2);
	Matrix C(2, 2);
	std::ifstream ("Matr_1.txt") >> A;
	std::ifstream ("Matr_2.txt") >> B;
	std::ifstream ("rez.txt") >> C;
	REQUIRE((A + B) == C);
}

SCENARIO("mult", "[mult]")
{
	Matrix A (2, 2);
	Matrix B (2, 2);
	Matrix C (2, 2);
	std::ifstream("Matr_1.txt") >> A;
	std::ifstream("Matr_2.txt") >> B;
	std::ifstream("rez_1.txt") >> C;
	REQUIRE((A*B) == C);
}

SCENARIO("assign", "[oper=]")
{
	Matrix A(2, 2);
	Matrix B = A;
	REQUIRE(B == A);
}
