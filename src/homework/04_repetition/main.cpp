//write include statements
#include"repetition.h"

//write using statements
using std::cout; using std::cin;

int main() 
{
	auto entry = 0;
	auto product = 1;
	auto divisor1 = 0;
	auto divisor2 = 0;

	cout<<"Hello! To use our factorial function, press '1'.\n";
	cout<<"Hello! To use our greatest common denominator function, press '2'.\n";
	cout<<"Hello! To use our exit, press '3'.\n";
	cin>>entry;

	do
	{
		if(entry ==1)
		{
			cout<<"Looks like you want to use our factorial function.\n";
			cout<<"Enter the number you want the factorial of: \n";
			cin>>product;

			cout<<entry<<" factorialized is "<<factorial(product)<<"\n";

			cout<<"Hello! To use our factorial function, press '1'.\n";
			cout<<"Hello! To use our greatest common denominator function, press '2'.\n";
			cout<<"Hello! To use our exit, press '3'.\n";
			cin>>entry;
		}
		if(entry ==2)
		{
			cout<<"Looks like you want to use our greatest common demoninator function.\n";
			cout<<"Enter the first number you want to find the greatest common demoninator of: \n";
			cin>>divisor1;

			cout<<"Enter the second number you want to find the greatest common demoninator of: \n";
			cin>>divisor2;

			cout<<"The greatest common demoninator of "<<divisor1<<" and "<<divisor2<<" is: "<<gcd(divisor1, divisor2)<<"\n";

			cout<<"Hello! To use our factorial function, press '1'.\n";
			cout<<"Hello! To use our greatest common denominator function, press '2'.\n";
			cout<<"Hello! To use our exit, press '3'.\n";
			cin>>entry;
		}
		if(entry ==3)
		{
			auto exit = 0;
			cout<<"Are you sure you want to exit?\n";
			cout<<"If so, press '1'\n";
			cout<<"If not, press '2'\n";
			cin>>exit;

			if(exit ==1)
			{
				cout<<"Exiting. Goodbye.\n";
				break;
			}
			else if(exit ==2)
			{
				cout<<"Hello! To use our factorial function, press '1'.\n";
				cout<<"Hello! To use our greatest common denominator function, press '2'.\n";
				cout<<"Hello! To use our exit, press '3'.\n";
				cin>>entry;
			}
			else
			{
				cout<<"Error.\n";
				break;
			}
		}
	} 
	while (entry <= 3);

	if(entry >= 4)
	{
		cout<<"Error.\n";
	}
	
	return 0;
}