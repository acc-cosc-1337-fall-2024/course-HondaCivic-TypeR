#include "func.h"
#include<iomanip>
using std::cout; using std::cin; using std::setprecision;

int main() 
{
	auto entry = 0;
	string strand = "";

	cout<<"Welcome to DNA Industries! \n";
	cout<<"To check your DNA's GC content, press '1'.\n";
	cout<<"To see your DNA's compliment, press '2'.\n";
	cout<<"To exit, press '3'.\n";
	cin>>entry;

	do
	{
		if(entry == 1)
		{
			cout<<"Looks like you want to see your DNA's GC content. \n";
			cout<<"To begin, please use the space provided below to input your strand of DNA: \n";
			cin>>strand;

			cout<<"The GC content of "<<strand<<" is: "<<setprecision(4)<<get_gc_content(strand)<<"\n\n";

			cout<<"To check your DNA's GC content again, press '1'.\n";
			cout<<"To see your DNA's compliment, press '2'.\n";
			cout<<"To exit, press '3'.\n";
			cin>>entry;
		}
		else if(entry == 2)
		{
			cout<<"Looks like you want to see your DNA's compliment. \n";
			cout<<"To begin, use the space provided below to input your strand of DNA: \n";
			cin>>strand;

			cout<<"The compliment of "<<strand<<" is: "<<get_dna_complement(strand)<<"\n\n";

			cout<<"To check your DNA's GC content, press '1'.\n";
			cout<<"To see your DNA's compliment again, press '2'.\n";
			cout<<"To exit, press '3'.\n";
			cin>>entry;
		}
		else if(entry == 3)
		{
			cout<<"Exiting. Goodbye.\n";
			break;
		}
		else
		{
			cout<<"Error.\n";
		}
		
	} while (entry <= 3);

	return 0;
}
