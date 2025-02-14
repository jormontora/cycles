#include <iostream>

int main() {
    int m, n; //переменная

    
    std::cout << "рядки(m): ";
    std::cin >> m;
    
    std::cout << "столбцы (n): ";
    std::cin >> n;

    // прямоугольник делаем
    for (int i = 0; i < m; i++) { //i++ как в питончике i += 1 . Цыклируем рядки i - счетчик циклов. 
        for (int j = 0; j < n; j++) { //циклируем стобики
            std::cout << "*";
        }
        std::cout << std::endl; // Переходим на новый рядок
    }

    return 0;
}
