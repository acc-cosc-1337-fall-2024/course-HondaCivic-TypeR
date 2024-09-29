//add include statements
#include"repetition.h"

using std::cout; using std::cin;

//add function(s) code here
int factorial(int num)
{
    auto product = 1;

    while(num > 0)
    {
        product *= num;
        num--;
    }

    return product;
}

int gcd(int num1, int num2)
{
    auto ans = 0;
    while(num1 != num2)
    {
        if(num1 > num2)
        ans = num1 -= num2;

        else
        ans = num2 -= num1;
    }

    return ans;
}
