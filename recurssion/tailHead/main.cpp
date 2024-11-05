// Head Recursion

#include <iostream>

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);
        std::cout << n << '\n';
    }
}


int main()
{
    int x{3};
    fun(x);
    return 0;
}


#include <iostream>

void fun(int n)
{
    if (n < 0)
    {
        std::cout << n << '\n';
        fun(n - 1);
    }
}


int main()
{
    int x{3};
    fun(x);
    return 0;
}



