#pragma once

#include <iostream>
#include <iomanip>
#include <random>


void intMatrix(int matrix[][100], int size);
void printMatrixInt(int matrix[][100], int size);
void findMinMaxDiagonalInt(int matrix[][100], int size, int& max, int& min);
void sortInt(int matrix[][100], int size);

void doubleMatrix(double matrix[][100], double size);
void printMatrixDouble(double matrix[][100], double size);
void findMinMaxDiagonalDouble(double matrix[][100], double size, double& max, double& min);
void sortDouble(double matrix[][100], double size);

//void charMatrix(char matrix[][100], int size);
void MatrixChar(char matrix[][100], int size);
void printMatrixChar(char matrix[][100], int size, int value);
