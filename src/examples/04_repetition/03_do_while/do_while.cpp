#include "do_while.h"

using std::cout; using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto choice = 'Y'; //variable must be made outside code block

    do
    {
        cout<<"Enter Y or y to continue...";
        cin>>choice;

    } while (choice == 'Y' || choice == 'y');
    

}

void display_menu()
{
    cout<<"1 - Option 1"<<"\n";
    cout<<"2 - Option 2"<<"\n";
    cout<<"3 - Exit"<<"\n";
}

void run_menu()
{
    auto option = 0;

    do
    {
        display_menu();
        cout<<"Enter menu option: ";
        cin>>option;

        handle_user_option(option);

    }while(option != 3); //requires semicolon
}


void handle_user_option(int num)
{
    switch(num)
    {
        case 1:
            cout<<"You chose option 1.\n";
            break;
        case 2:
            cout<<"You chose option 2.\n";
            break;
        case 3:
            cout<<"Exiting....\n";
            break;
        default:
            cout<<"Invalid Option.\n";
            break;
    }
}
