#include <iostream>
void evendigits(long long a, int& ans) // передаю ans по ссылке, т.к. функция ничего не передает (она void), а по ссылке из функции мы меняем само значение переменной
{
    if (a == 0)
        return;
    if (a % 2 == 0)
        ans++;
    evendigits(a / 10, ans);
}

int main()
{
    int ans = 0;
    long long a = 8942224478442;
    
    evendigits(a, ans);
    std::cout << ans;
}