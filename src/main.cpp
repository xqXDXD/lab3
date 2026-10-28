#include "matrix.h"
#include <stdio.h>
int main() {
    // Создание матриц
    Matrix A = create_matrix(2, 2);
    Matrix B = create_matrix(2, 2);
    
    // Заполнение данными
    A.data[0][0] = 1; A.data[0][1] = 2;
    A.data[1][0] = 3; A.data[1][1] = 4;

    B.data[0][0] = 5; B.data[0][1] = 6;
    B.data[1][0] = 7; B.data[1][1] = 8;
    
    // Операции
    Matrix sum = matrix_add(A, B);
    Matrix product = matrix_multiply(A, B);
    
    // Вывод результатов
    printf("Matrix A:\n");
    print_matrix(A);
    
    printf("\nMatrix B:\n");       // <--- Добавили вывод B
    print_matrix(B);
    
    printf("\nSum A+B:\n");
    print_matrix(sum);
    
    printf("\nProduct A*B:\n");    // <--- Добавили вывод умножения
    print_matrix(product);
    
     // --- ТЕСТ ДЛЯ ЧАСТИ 2 (Вариант 10) ---
    printf("\n--- Part 2: Matrix Diagonal ---\n");
    
    // Создаем матрицу 3х3 и заполняем её числами от 1 до 9
    Matrix C = create_matrix(3, 3);
    double val = 1.0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            C.data[i][j] = val++;
        }
    }
    
    printf("Matrix C (3x3):\n");
    print_matrix(C);

    // Вызываем нашу новую функцию
    Matrix diag = matrix_get_diagonal(C);
    
    printf("Diagonal of C (Vector):\n");
    print_matrix(diag);

    // Очищаем память для новых матриц (C и diag)
    free_matrix(C);
    free_matrix(diag);
    // -------------------------------------
    // Освобождение памяти (для всех четырёх матриц!)
    free_matrix(A);
    free_matrix(B);
    free_matrix(sum);
    free_matrix(product);
    
    return 0;
}