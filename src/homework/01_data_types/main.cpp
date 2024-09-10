//write include statements
#include<iostream>
#include "data_types.h" //tells C++ where to find multiply_numbers function (like the import function from python)(<> for 3rd party "" for our own files)


//write namespace using statement for cout
using std::cout; using std::cin;


int main()
{
	int num;
	cout<<"Enter a number; ";
	cin>>num;
	
	int result = multiply_numbers(num);

	cout<<"Your product is: "<<result<<"\n";

	int num1 = 4;

	result = multiply_numbers(num1);

	cout<<"Your product is: "<<result<<"\n";

	return 0;
}
