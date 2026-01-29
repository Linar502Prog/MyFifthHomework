#include <iostream>
#include<Windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int number1{}, number2{};
    int des1, jig1, des2, jig2;
    std::string jigit[]{"ноль","один", "два", "три", "четыре", "пять","шесть","семь","восемь","девять","десять", "одиннадцать","двенадцать", "тринадцать",
        "четырнадцать", "пятнадцать", "шестнадцать","семнадцать","восемнадцать", "девятнадцать", "двадцать" };
    std::string desyat[]{ "", "","двадцать","тридцать","сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят","девяносто" };
    std::cout << "Введите целое число: ";
    std::cin >> number1;
    std::cout << "Введите целое число: ";
    std::cin >> number2;
    std::cout<<std::endl;
    des1 = abs(number1) / 10;
    jig1 = abs(number1) % 10;
    des2 = abs(number2) / 10;
    jig2 = abs(number2) % 10;
    if (number1 > 99 || number1 < -99 || number2>99 || number2 < -99) {
        std::cout << "Ошибка! Одно из чисел вне диапазона" << std::endl;
        return 0;
    }
    if (abs(number1) >= 10 && abs(number1) <= 20) {
        des1 = 0;
        jig1 = abs(number1);
    }
    if (abs(number2) >= 10 && abs(number2) <= 20) {
        des2 = 0;
        jig2 = abs(number2);
    }
    //первый случай положительных
    if (number1 >= 0 && number2 >= 0) {
        if (number1 > number2) {
            std::cout <<desyat[des1]  << jigit[jig1] << " больше чем " << desyat[des2] << " " << jigit[jig2] << std::endl;
        }
        else if (number1 < number2) {
            std::cout << desyat[des1]  << jigit[jig1] << " меньше чем " << desyat[des2] << " " << jigit[jig2] << std::endl;
        }
        else {
            std::cout << desyat[des1]  << jigit[jig1] << " равно " << desyat[des2] << " " << jigit[jig2] << std::endl;
        }

    }
    else if (number1 < 0 && number2 >= 0) {
        if (number1 < number2) {
            std::cout << "минус " << desyat[des1] << " " << jigit[jig1] << " меньше чем " << desyat[des2] << " " << jigit[jig2] << std::endl;
        }

    }
    else if (number1 >= 0 && number2 < 0) {
        if (number1 > number2) {
            std::cout << desyat[des1] << " " << jigit[jig1] << " больше чем " << " минус" << desyat[des2] << " " << jigit[jig2] << std::endl;
        }
    }
    else if (number1 < 0 && number2 < 0) {
        if (number1 > number2) {
            std::cout << "минус " << desyat[des1] << " " << jigit[jig1] << " больше чем " << " минус" << desyat[des2] << " " << jigit[jig2] << std::endl;
        }
        else if (number1 < number2) {
            std::cout << "минус " << desyat[des1] << " " << jigit[jig1] << " меньше чем " << " минус" << desyat[des2] << " " << jigit[jig2] << std::endl;
        }
        else {
            std::cout << "минус " << desyat[des1] << " " << jigit[jig1] << " равно " << " минус" << desyat[des2] << " " << jigit[jig2] << std::endl;
        }
    }


    return EXIT_SUCCESS;
}