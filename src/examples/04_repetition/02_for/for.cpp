#include "for.h"

using std::cout;

void display_hello_for (int num)
{
    for(auto i = 0; i < num; i++) //auto i = 0 is the counter i++ is the incremental 1
    {
        cout<<"Hello\n";
    }
}

//Write code for function display_numbers that accepts a number and 
//displays every number that precedes(starting from 1) it in a line
//Example: display_numbers(5)
/*
RESULT:

1
2
3
4
5

*/

