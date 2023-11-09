#include <iostream>
#include <ctime>

void generateMatrix(int matrix[][5], int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
}

void printMatrix(int matrix[][5], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
}

int findMaxInMainDiagonal(int matrix[][5], int n) {
    int maxElem = matrix[0][0];
    for (int i = 1; i < n; i++) {
        if (matrix[i][i] > maxElem) {
            maxElem = matrix[i][i];
        }
    }
    return maxElem;
}

int main() {
    int n = 5;
    int matrix[5][5];
    generateMatrix(matrix, n);

    std::cout << "matrix:\n";
    printMatrix(matrix, n);

    int maxElem = findMaxInMainDiagonal(matrix, n);
    std::cout << "max element diagonally: " << maxElem << "\n";

    return 0;
}
