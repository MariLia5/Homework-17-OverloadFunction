#include "OverloadFunction.hpp"

// Функция для вывода матрицы типа char
void printMatrixChar(char matrix[][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << std::setw(3) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
