#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

#include <blaze/math/CompressedMatrix.h>
#include <blaze/math/CustomMatrix.h>
#include <blaze/math/DiagonalMatrix.h>
#include <blaze/math/DynamicMatrix.h>
#include <blaze/math/LowerMatrix.h>
#include <blaze/math/UpperMatrix.h>
#include <blaze/util/Complex.h>
#include <blaze/util/Memory.h>
#include <blaze/util/policies/Deallocate.h>
#include <blaze/util/Random.h>

using namespace std;

typedef blaze::StaticMatrix <int, 2000, 2000> big_matrix;

void read(string filename, big_matrix& mat1, big_matrix& mat2) {
    string line;
    ifstream infile;
    infile.open (filename.c_str());

    int i = 0;
    while (getline(infile, line) && !line.empty()) {
        istringstream iss(line);
        int a, j = 0;
        while (iss >> a) {
	    mat1(i, j) = mat2(i, j) = a;
            j++;
        }
        i++;
    }

    infile.close();
}

int main () {

    big_matrix mat1, mat2, mat3;
    cout << "Starting after allocating the memory ...\n";
    string filename {"big_file"};
    read (filename, mat1, mat2);
    cout << "Read the file, now going to multiply ...\n";

    mat3 = mat1 * mat2;

//    printMatrix(C);
    return 0;
}
