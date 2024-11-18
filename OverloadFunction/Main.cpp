#include "OverloadFunction.hpp"

int main() {
    setlocale(LC_ALL, "RUS");

    int const size = 5;
    int matrix[100][100];

    // Инициализация матрицы с помощью целых чисел
    intMatrix(matrix, size);
    std::cout << "Инициализация матрицы с помощью целых чисел:\n";
    printMatrixInt(matrix, size);

    // Определение максимального и минимального элементов на главной диагонали
    int maxDiagonal, minDiagonal;
    findMinMaxDiagonalInt(matrix, size, maxDiagonal, minDiagonal);
    std::cout << "Максимальный элемент на главной диагонали: " << maxDiagonal << "\n";
    std::cout << "Минимальный элемент на главной диагонали: " << minDiagonal << "\n";

    // Сортировка элементов каждой строки по возрастанию
    sortInt(matrix, size);
    std::cout << "Матрица после сортировки строк:\n";
    printMatrixInt(matrix, size);
    std::cout << std::endl;

    // Инициализация матрицы с помощью вещественных чисел
    double matrix1[100][100];
    double const size1 = 3;
    doubleMatrix(matrix1, size1);
    std::cout << "Инициализация матрицы с помощью вещественных чисел:\n";
    printMatrixDouble(matrix1, size1);

    // Определение максимального и минимального элементов на главной диагонали
    double maxDiagonal1, minDiagonal1;
    findMinMaxDiagonalDouble(matrix1, size1, maxDiagonal1, minDiagonal1);
    std::cout << "Максимальный элемент на главной диагонали: " << maxDiagonal1 << "\n";
    std::cout << "Минимальный элемент на главной диагонали: " << minDiagonal1 << "\n";

    // Сортировка элементов каждой строки по возрастанию
    sortDouble(matrix1, size1);
    std::cout << "Матрица после сортировки строк:\n";
    printMatrixDouble(matrix1, size1);
    std::cout << std::endl;

    // Инициализация матрицы с помощью char
    
    char charMatrix[100][100];
    int const size2 = 5;
    std::cout << "Инициализация матрицы с помощью char:\n";
    MatrixChar(charMatrix, size2);
    printMatrixChar(charMatrix, size2, 'A');

    return 0;
}