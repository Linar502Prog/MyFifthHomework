#include <iostream>

int main() {
    setlocale(LC_ALL, "RUS");
    bool first{ 1 }, second{ 1 };
    std::cout << std::boolalpha;
    std::cout << "Оператор: ||" << std::endl;
    std::cout << first << " " << second << " " << (first || second) << std::endl;
    std::cout << !first << " " << second << " " << (!first || second) << std::endl;
    std::cout << first << " " << !second << " " << (first || !second) << std::endl;
    std::cout << !first << " " << !second << " " << (!first || !second) << std::endl << std::endl;
    std::cout << "Оператор: &&" << std::endl;
    std::cout << first << " " << second << " " << (first && second) << std::endl;
    std::cout << !first << " " << second << " " << (!first && second) << std::endl;
    std::cout << first << " " << !second << " " << (first && !second) << std::endl;
    std::cout << !first << " " << !second << " " << (!first && !second) << std::endl;

    return EXIT_SUCCESS;
}