#include "while.h"

using std::cout; using std::cin;

int main() 
{
	auto value = 0;
	cout<<"Enter a number: \n";
	cin>>value;

	auto result = sum_of_squares(value);

	cout<<"Sum of: "<<result<<"\n";

	return 0;
}