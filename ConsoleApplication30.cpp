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

