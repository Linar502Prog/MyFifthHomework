#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int number1{}, number2{}, number3{};
    std::cout << "¬ведите первое число: ";
    std::cin >> number1;
    std::cout << "¬ведите второе число: ";
    std::cin >> number2;
    std::cout << "¬ведите третье число: ";
    std::cin >> number3;
    int maxnum = (number1 > number2) ? ((number1 > number3) ? number1 : number3) : ((number2 > number3) ? number2 : number3);
    int minnum = number1 < number2 ? number1 < number3 ? number1 : number3 : number2 < number3 ? number2 : number3;
    int srnum = number1 + number2 + number3 - minnum - maxnum;
    std::cout << "–езультат: " << maxnum << " " << srnum << " " << minnum << std::endl;

    return EXIT_SUCCESS;
}