//add include statements
#include "func.h"

//add function code here
double get_gc_content (const string& dna)
{
    double GCcount = 0;
    double ATcount = 0;

    for(auto i = 0; i < dna.size(); i++)
    {
        if(dna[i] == 'G')
        {
            GCcount += 1;
        }
        else if(dna[i] == 'C')
        {
            GCcount += 1;
        }
        else if(dna[i] == 'T')
        {
            ATcount += 1;
        }
        else if(dna[i] == 'A')
        {
            ATcount += 1;
        }
    }

    double total = GCcount + ATcount;
    double math = GCcount / total;

    return math;
}

string reverse_string(string dna)
{
    string reverse = "";

    for(int i = dna.size() - 1; i >= 0; i--) //have to use int | using auto makes i an 'unsigned long i' which causes core dump
    {
        reverse += dna[i];
    }

    return reverse;
}

string get_dna_complement(string dna)
{
    string reversed = reverse_string(dna);

    for(auto i = 0; i < reversed.size(); i++)
    {
        if(reversed[i] == 'A')
        {
            reversed[i] = 'T';
        }
        else if(reversed[i] == 'T')
        {
            reversed[i] = 'A';
        }
        else if(reversed[i] == 'C')
        {
            reversed[i] = 'G';
        }
        else if(reversed[i] == 'G')
        {
            reversed[i] = 'C';
        }
    }

    return reversed;
}