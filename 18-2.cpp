#include <iostream>

int jump(int constMaxJump, int n, int k)
{
    if (n == 0)
        return 1;
    else if (n < 0 || k < 1)
        return 0;
    else
        return jump(constMaxJump, n - k, constMaxJump) + jump(constMaxJump, n, k - 1);
}

int main()
{
    int n, k;
    std::cout << "Enter steps ";
    std::cin >> n;
    std::cout << "Enter Max Jump length ";
    std::cin >> k;
    const int constMaxJump = k;
    std::cout << jump(constMaxJump, n, k);
}