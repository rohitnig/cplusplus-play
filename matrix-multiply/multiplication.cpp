#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main () {
	mat mat1(7, 9), mat2 (9, 7), mat3;
	mat mat4(9, 9);

	mat big_mat1 = randu<mat>(2000, 2000);
	mat big_mat2 = randu<mat>(2000, 2000);

//	mat big_mat1, big_mat2;
//	big_mat1.load("big_file");
//	big_mat2.load("big_file");

	mat big_mat3 = big_mat1 * big_mat2;

//	mat1.load("mat-1.txt");
//	mat2.load("mat-2.txt");

//	mat1.print("mat1: ");
//	mat2.print("mat2: ");
//	mat3.print("mat3: ");

//	mat3 = mat1 * 2;
//	mat3.print("mat3: ");

//	mat4 = mat1 * mat2;
//	mat4.print("mat4: ");


	return 0;
}
