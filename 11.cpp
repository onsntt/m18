#include <iostream>

int fib(int n)
{
    if(n==0) return 0;
    else if (n == 1) return 1;
    else
    {
        return fib(n - 1) + fib(n - 2) + fib(n - 3);
    }
}

int main()
{
    
        std::cout << fib(4+2)  << " ";
    
}