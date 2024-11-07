// Head Recursion
/// TYPES OF RECURSSION
/*
*tail
*head
*tree
*indirect
*nested
*/
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

//Tail recurssion
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



// any recurssion can be writen as a loop and vise veser
