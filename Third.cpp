#include <iostream>

int main() {

    setlocale(LC_ALL, "RUS");
    std::string gender, zadiacSign;
    int age;
    std::cout << "Введите пол: ";
    std::cin >> gender;
    std::cout << "Введите знак задиака: ";
    std::cin >> zadiacSign;
    std::cout << "Введите возраст: ";
    std::cin >> age;
    if (gender == "м" && (zadiacSign == "рак"  || zadiacSign == "скорпион" || zadiacSign == "рыбы") && age < 40) {
        std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным." << std::endl;
    }
    else if (gender == "ж" && 15 <= age && age <= 30 && (zadiacSign == "телец" ||  zadiacSign == "дева" || zadiacSign == "козерог")) {
        std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.\n Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех." << std::endl;
    }
    else {
        std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)" << std::endl;
    }

    return EXIT_SUCCESS;
}