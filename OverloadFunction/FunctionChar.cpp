#include "OverloadFunction.hpp"

// Функция для вывода матрицы типа char
void MatrixChar(char matrix[][100], int size) {
    int value = 1;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = value++;
        }
    }
}

void printMatrixChar(char matrix[][100], int size, int value) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << std::setw(4) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}