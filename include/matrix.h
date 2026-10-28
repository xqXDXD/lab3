#ifndef MATRIX_H
#define MATRIX_H
// Структура матрицы
typedef struct {
 double** data; // двумерный массив данных
 int rows; // количество строк
 int cols; // количество столбцов
} Matrix;
// Базовые операции
Matrix create_matrix(int rows, int cols);
void free_matrix(Matrix m);
Matrix matrix_add(Matrix a, Matrix b);
Matrix matrix_multiply(Matrix a, Matrix b);
// Вспомогательные функции
void print_matrix(Matrix m);
Matrix matrix_from_array(double* data, int rows, int cols);
#endif


// --- ЧАСТЬ 2: Индивидуальное задание (Вариант 10) ---
Matrix matrix_get_diagonal(Matrix m); 

