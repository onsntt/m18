#include <iostream>

void func(int i) // передача в функцию параметров по значению
{
    i += 10;
    i *= 2;
    std::cout << i << " - by value\n";
}

void func2(int *pi) // передача в функцию параметров по переменной-указателю
{
    *pi += 10;
    *pi *= 2;
    std::cout << *pi << " - by *pi or &i - named pointer\n";
}

void func3(int& i) // передача в функцию параметров по ссылке

    {
        i += 10;
        i *= 2;
        std::cout << i << " - by link\n";
    }

    int main()
    {
        // передача в функцию параметров по значению
        int d = 2;
        func(d); // можем вызвать от переменной
        func(2); // можем вызвать от числа

        // передача в функцию параметров по указателю
        int c = 5;
        int *pc = &c;
        func2(pc); // передача через имя указателя
        c = 5;
        func2(&c); // передача через адрес

        // передача параметров по ссылке:+
        int a = 10;
        func3(a); // передаем в функцию переменную а.
    }
