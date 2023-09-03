//Task1
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

    //Task2
    #include <iostream>
#include <string>
#include <locale>

struct bank
{
    int numberch;
    std::string name;
    int balance;
};

void result(bank *bank_ptr, int new_balance)
{
  (*bank_ptr).balance = new_balance;
};

int main()
{
    setlocale(LC_ALL, "rus");
    std::system("chcp 1251");
    bank b;
    int new_balance;
    std::cout << "Введите номер счёта : ";
    std::cin >> b.numberch;
    std::cout << "Введите имя владельца : ";
    std::cin >> b.name;
    std::cout << "Введите баланс : ";
    std::cin >> b.balance;
    std::cout << "Введите новый баланс : ";
    std::cin >> new_balance;
    result(&b, new_balance);
    std::cout << "Ваш счет : " << b.name << ", " << b.numberch << ", " << b.balance << std::endl;
}

//Task 3
#include <iostream>
#include <string>
#include <locale>

struct City
{
    std::string city;
    std::string street;
    int numberH;
    int numberK;
    int index;
};

void console(City *City_ptr)
{
    std::cout << "Город :" << " " << (*City_ptr).city << std::endl;
    std::cout << "Улица :" << " " << (*City_ptr).street << std::endl;
    std::cout << "Номер дома :" << " " << (*City_ptr).numberH << std::endl;
    std::cout << "Номер квартиры :" << " " << (*City_ptr).numberK << std::endl;
    std::cout << "Индекс :" << " " << (*City_ptr).index << std::endl; 
    std::cout << "\n";
}

int main()
{
    setlocale(LC_ALL, "rus");
    std::system("chcp 1251");
    City s, s2;
    s.city = "Москва";
    s.street = "Арбат";
    s.numberH = 12;
    s.numberK = 8;
    s.index = 123456;

    s2.city = "Ижевск";
    s2.street = "Пушкина";
    s2.numberH = 59;
    s2.numberK = 143;
    s2.index = 953769;

    console(&s);
    console(&s2);
}

