#include <iostream>


enum struct month { January = 1, February, March, April, May, June, July, August, September, October, November, December };


int main()
{
    setlocale(LC_ALL, "Russian");
    
    int number;
    do
    {
        std::cout << "Введите номер месяца : ";
        std::cin >> number;
        if (number >= 1 && number <= 12) {
            month selectedmonth = static_cast<month>(number);
            switch (selectedmonth)
                case month::January:
                    std::cout << "Январь" << std::endl;
                    break;
                case month::February:
                    std::cout << "Февраль" << std::endl;
                    break;
                case month::March:
                    std::cout << "Март" << std::endl;
                    break;
                case month::April:
                    std::cout << "Апрель" << std::endl;
                    break;
                case month::May:
                    std::cout << "Май" << std::endl;
                    break;
                case month::June:
                    std::cout << "Июнь" << std::endl;
                    break;
                case month::July:
                    std::cout << "Июль" << std::endl;
                    break;
                case month::August:
                    std::cout << "Август" << std::endl;
                    break;
                case month::September:
                    std::cout << "Сентябрь" << std::endl;
                    break;
                case month::October:
                    std::cout << "Октябрь" << std::endl;
                    break;
                case month::November:
                    std::cout << "Ноябрь" << std::endl;
                    break;
                case month::December:
                    std::cout << "Декабрь" << std::endl;
                    break;
                default:
                    break;
        }
        else if (number == 0)
        {
            std::cout << "До свидания";
        }
        while (number != 0)
    }