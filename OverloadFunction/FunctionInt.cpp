#include "OverloadFunction.hpp"

// Инициализация квадратной матрицы типа int
void intMatrix(int matrix[][100], int size) {
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(1, 100);

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = distribution(generator);
        }
    }
}
// Функция для вывода матрицы типа int
void printMatrixInt(int matrix[][100], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << std::setw(4) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Функция для определения максимального и минимального элементов на главной диагонали
void findMinMaxDiagonalInt(int matrix[][100], int size, int& max, int& min) {
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
void sortInt(int matrix[][100], int size) {
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