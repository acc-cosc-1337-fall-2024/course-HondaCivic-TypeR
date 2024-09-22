//write include statements
#include<iostream>
#include<string>
#include "decisions.h"

using std::string;
using std::cout;
using std::cin;

float letter_grade;
int entry;

int main() 
{
	cout<<"MAIN MENU \n";
	cout<<"For ELSE_IF, press '1'. For SWITCH, press '2', to EXIT, press '3'\n";
	cin>>entry;

	if(entry == 1)
	{
		cout<<"You have selected :"<<entry<<"\n";
		cout<<"Please enter your grade numerically below: \n";
		cin>>letter_grade;
		if(letter_grade >= 0 && letter_grade <= 100)
		{
		cout<<"Your letter grade is :"<<get_letter_grade_using_if(letter_grade)<<"\n";
		}
		else
		{
		cout<<"Invald Entry.\n";
		}
	}
	else if(entry == 2)
	{
		cout<<"You have selected :"<<entry<<"\n";
		cout<<"Please enter your grade numerically below: \n";
		cin>>letter_grade;
		if(letter_grade >= 0 && letter_grade <= 100)
			{
				cout<<"Your letter grade is :"<<get_letter_grade_using_switch(letter_grade)<<"\n";
			}
		else
		{
		cout<<"Invald Entry.\n";
		}
	}
	else if(entry == 3)
	{
		cout<<"Exiting. Goodbye\n";
	}
	else
	{
	cout<<"Invalid Entry.\n";
	}

	return 0;
}