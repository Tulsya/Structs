#include <iostream>

enum class Months {January = 1, February, March, April, May, June, July, August, September, October, November, December};

int main() {
    int userInput;
    do {
        std::cout << "Введите номер месяца (1-12) или 0 для выхода: ";
        std::cin >> userInput;

        if (userInput >= 1 && userInput <= 12) {
            Months selectedMonth = static_cast<Months>(userInput);
            switch(selectedMonth) {
                case Months::January:
                    std::cout << "Январь" << std::endl;
                    break;
                case Months::February:
                    std::cout << "Февраль" << std::endl;
                    break;
                case Months::March:
                    std::cout << "Март" << std::endl;
                    break;
                case Months::April:
                    std::cout << "Апрель" << std::endl;
                    break;
                case Months::May:
                    std::cout << "Май" << std::endl;
                    break;
                case Months::June:
                    std::cout << "Июнь" << std::endl;
                    break;
                case Months::July:
                    std::cout << "Июль" << std::endl;
                    break;
                case Months::August:
                    std::cout << "Август" << std::endl;
                    break;
                case Months::September:
                    std::cout << "Сентябрь" << std::endl;
                    break;
                case Months::October:
                    std::cout << "Октябрь" << std::endl;
                    break;
                case Months::November:
                    std::cout << "Ноябрь" << std::endl;
                    break;
                case Months::December:
                    std::cout << "Декабрь" << std::endl;
                    break;
                default:
                    break;
            }
        } else if (userInput != 0) {
            std::cout << "Некорректный ввод. Попробуйте еще раз." << std::endl;
        }
    } while (userInput != 0);

    return 0;
}
