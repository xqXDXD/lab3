# 1. Минимальная требуемая версия CMake
cmake_minimum_required(VERSION 3.16)

# 2. Название проекта и язык
project(Matrix_Calculator LANGUAGES CXX)

# 3. Устанавливаем стандарт C++17 (как требует методичка)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 4. Указываем, где искать заголовочные файлы (.h)
include_directories(include)

# 5. Говорим собрать исполняемый файл matrix_calculator из этих файлов
add_executable(matrix_calculator
    src/main.cpp
    src/matrix.cpp
)
enable_testing()
add_subdirectory(tests)
# 6. Добавляем флаги предупреждений (требование твоего первого документа)
# Если код написан криво, компилятор выдаст предупреждения
target_compile_options(matrix_calculator PRIVATE -Wall -Wextra -Wpedantic)