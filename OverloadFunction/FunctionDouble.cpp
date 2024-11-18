#include "OverloadFunction.hpp"

// Инициализация квадратной матрицы типа double
void doubleMatrix(double matrix[][100], double size) {
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_real_distribution<double> distribution(1.0, 100.0);

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = distribution(generator);
        }
    }
}
// Функция для вывода матрицы типа double
void printMatrixDouble(double matrix[][100], double size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << std::setw(10) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Функция для определения максимального и минимального элементов на главной диагонали
void findMinMaxDiagonalDouble(double matrix[][100], double size, double& max, double& min) {
    max = matrix[0][0];
    min = matrix[0][0];

    for (int i = 0; i < size; ++i) {
        if (matrix[i][i] > max) {
            max = matrix[i][i];
        }
        if (matrix[i][i] < min) {
            min = matrix[i][i];
        }
    }
}

// Функция для сортировки элементов каждой строки по возрастанию
void sortDouble(double matrix[][100], double size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            for (int k = j + 1; k < size; ++k) {
                if (matrix[i][j] > matrix[i][k]) {
                    std::swap(matrix[i][j], matrix[i][k]);
                }
            }
        }
    }
}