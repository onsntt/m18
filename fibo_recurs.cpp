#include <iostream>

int fib(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    for (int i = 0; i < 20; i++)
    {
        std::cout << fib(i) << " ";
    }
}