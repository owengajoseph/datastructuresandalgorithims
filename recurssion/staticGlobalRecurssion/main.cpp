#include <iostream>

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int r;
    r = fun(5);
    std::cout << r << '\n';
    r = fun(5);
    std::cout << r << '\n';
    return 0;
}
