#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
#include <gsl/gsl_blas.h>

using namespace std;

void read(string filename, int** mat1, int** mat2) {
    string line;
    ifstream infile;
    infile.open (filename.c_str());

    int i = 0;
    while (getline(infile, line) && !line.empty()) {
        istringstream iss(line);
        int a, j = 0;
        while (iss >> a) {
	         mat1[i][j] = mat2[i][j] = a;
            j++;
        }
        i++;
    }

    infile.close();
}

int main () {

//    int mat1[2000][2000], mat2[2000][2000], mat3[2000][2000];
    int** mat1 = (int **) malloc (2000*2000*sizeof(int));
    int** mat2 = (int **) malloc (2000*2000*sizeof(int));
    int** mat3 = (int **) malloc (2000*2000*sizeof(int));
    cout << "Starting after allocating the memory ...\n";
    string filename = "big_file";
    read (filename, mat1, mat2);
    cout << "Read the file, now going to multiply ...\n";

    gsl_matrix_view A = gsl_matrix_view_array(mat1, 2000, 2000);
    gsl_matrix_view B = gsl_matrix_view_array(mat2, 2000, 2000);
    gsl_matrix_view C = gsl_matrix_view_array(mat3, 2000, 2000);

    gsl_blas_dgemm (CblasNoTrans, CblasNoTrans,
                1.0, &A.matrix, &B.matrix,
                0.0, &C.matrix);

//    printMatrix(C);
    return 0;
}
