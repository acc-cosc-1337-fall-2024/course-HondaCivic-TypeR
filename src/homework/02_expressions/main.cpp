//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout; using std::cin;

int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<<"Enter your total meal cost using the space provided below: "<<"\n";
	cin>>meal_amount;
	
		tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter what percent you would like to tip using the space provided below: "<<"\n"; //15% to get the desired $3
	cin>>tip_rate;

		tip_rate = tip_rate / 100;
		tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	
	cout<<"Your meal was: "<<meal_amount<<"\n";
	cout<<"Your sales tax was: "<<tax_amount<<"\n";
	cout<<"Your tip was: "<<tip_amount<<"\n";
	cout<<"Which brings your total to: "<<total<<"\n";	
	cout<<"Thank you for eating with us!"<<"\n";
	
	return 0;
}
