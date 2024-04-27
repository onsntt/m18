#include <iostream>

int jump(int n, int constMaxJump = 3, int k = 3)
{
    if (n == 0)
        return 1;
    else if (n < 0 || k < 1)
        return 0;
    else
        return jump(n - k, constMaxJump, constMaxJump) + jump(n, constMaxJump, k - 1);
}

int main()
{
    int n, k;
    std::cout << "Enter steps ";
    std::cin >> n;
    std::cout << "Enter Max Jump length or type 0 for using default value";
    std::cin >> k;
    if (k ==0) 
    {
        const int constMaxJump = 3;
        std::cout << jump(n,constMaxJump);
    } else
    {
        const int constMaxJump = k;
        std::cout << jump(constMaxJump, n, k);
    }
   
}