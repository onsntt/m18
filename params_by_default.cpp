#include <iostream>
#include <string>
void print(int a = 1, float b = 2.f, std::string s = "Hello world!")
{
    std::cout << a << ", " << b << ", " << s << "\n";
}
int main()
{
    print(3, 2.5);
}
// то, что планируется однозначно указывать - ставим на первое место. Параметр, допускающий значение по умолчанию - последний