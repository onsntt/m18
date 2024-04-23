#include <iostream>
void bigO(char *c) // тут мы передаем в функцию указатель на char
{
    int i = 0;
    while (*(c + i) != '\0')
    {
        if (*(c + i) == 'o')
        {
            *(c + i) = 'O';
        }
    std::cout << *(c + i);
    i++;
    }
}

int main()
{
    char x[] = "Hello world!";
    bigO(x);
}