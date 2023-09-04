#include <iostream>
#include "Furniture.h"
#include "Chair.h"

int main() {
    int stoolHeight, chairHeight, chairBackHeight;
    Quality stoolQuality, chairQuality;

    // Ввод данных с клавиатуры
    std::cout << "Enter stool height (in cm): ";
    std::cin >> stoolHeight;
    std::cout << "Enter stool quality (0 for Low, 1 for Medium, 2 for High): ";
    int stoolQualityInt;
    std::cin >> stoolQualityInt;
    stoolQuality = static_cast<Quality>(stoolQualityInt);

    std::cout << "Enter chair height (in cm): ";
    std::cin >> chairHeight;
    std::cout << "Enter chair quality (0 for Low, 1 for Medium, 2 for High): ";
    int chairQualityInt;
    std::cin >> chairQualityInt;
    chairQuality = static_cast<Quality>(chairQualityInt);

    std::cout << "Enter chair back height (in cm): ";
    std::cin >> chairBackHeight;

    // Создание объектов
    Furniture stool(stoolHeight, stoolQuality);
    Chair chair(chairHeight, chairQuality, chairBackHeight);

    // Вывод информации
    std::cout << "Stool Information:\n" << stool.Information() << std::endl;
    std::cout << "Chair Information:\n" << chair.Information() << std::endl;

    return 0;
}
