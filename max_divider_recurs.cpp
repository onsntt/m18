#include <iostream>
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int gcd(int a, int b)
{
    if (b > a)
        swap(a, b); // в переменной а должно лежать бОльшее значение из двух
    if (a % b == 0)
        return b; // если а целиком делится на б - сразу возвращаем б (меньшее число). Оно и есть НОД
    // именно выполнение этого условия и будет выходом из рекурсивных ывзовов

    return gcd(b, a % b);
}

int main()
{

    std::cout << gcd(125, 20);
}