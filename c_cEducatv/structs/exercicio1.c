#include <stdio.h>

#define MAXDATA 1024

typedef struct {
  double data[MAXDATA];
  int nrows;
  int ncols;
} Matrix;

void printmat(Matrix M);
Matrix matrixmult(Matrix A, Matrix B);

int main(int argc, char *argv[]) {
  Matrix A = {{1.2, 2.3, 3.4, 4.5, 5.6, 6.7}, 3, 2};
  Matrix B = {{5.5, 6.6, 7.7, 1.2, 2.1, 3.3}, 2, 3};
  printmat(A);
  printmat(B);

  //  Matrix C = matrixmult(A, B);
  //  printmat(C);

  return 0;
}

// your code goes below...

void printmat(Matrix M) {

  printf("\n");
  int addToComllum = 0;
  int c = 0;
  for (int i = 0; i < M.nrows; i++) {
    for (c = 0; c < M.ncols; c++) {
      printf("%f", M.data[(c + addToComllum)]);
    }
    addToComllum = c + 1;
    printf("\n");
  }
}
//OUT desse usa um calculo simples e retorna o indice correto na hr 
void printmat2(Matrix M)
{
  int i, j;
  printf("[\n");
  for (i=0; i<M.nrows; i++) {
    for (j=0; j<M.ncols; j++) {
      printf("%6.3f ", M.data[i*M.ncols + j]);
    }
    printf("\n");
  }
  printf("]\n\n");
}

Matrix matrixmult(Matrix A, Matrix B) {
  // fill in the code here
  printf("so far matrixmult does nothing\n");
  Matrix C;
  return C;
}
