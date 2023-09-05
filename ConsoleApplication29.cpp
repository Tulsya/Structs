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
