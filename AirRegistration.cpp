#include<bits/stdc++.h>
using namespace std;

void mainMenu();

class Management{

public:

Management(){
    mainMenu();
}

};

class Details{
public:
        static string FirstName,LastName,gender;
        int phoneNo;
        int age;
        
        static int cID;
        char arr[100];

        void Information(){
            cout<<"\nEnter the customer ID"<<endl;
            cin>>cID;
            cout<<"\nEnter the First Name"<<endl;
            cin>>FirstName;
            cout<<"\nEnter the Last Name"<<endl;
            cin>>LastName;
            cout<<"\nEnter the age"<<endl;
            cin>>age;
            cout<<"\n Gender :"<<endl;
            cin>>gender;
            cout<<"Your details are saved with us\n"<<endl;
        }
};

int Details::cID;
string Details::FirstName;
string Details::LastName;
string Details::gender;

class Registration{
public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            vector<string>flight={"Dubai","London","Dublin","Washington"};
            for(int a=0;a<flight.size();a++){
                cout<<(a+1)<<" .flight to "<<flight[a]<<endl;
            }
            cout<<"\nWelcome to the Airlines!"<<endl;
            cout<<"Press the number of the City of which you want to book flight:";
            cin>>choice;

            switch(choice)
            {
                case 1:
                {
                    cout<<"_______________________Welcome to Dubai Airlines______________\n"<<endl;

                    cout<<"Your comfort is our utmost priority, Enjoy the journey!"<<endl;
                    cout<<"Following are the flights \n"<<endl;
                    cout<<"1. DUB - 498"<<endl;
                    cout<<"\t08-01-2022 8:00 AM 10hrs Rs.14000"<<endl;
                    cout<<"2. DUB - 668"<<endl;
                    cout<<"\t09-01-2022 4:00AM 12hrs Rs.10000"<<endl;
                    cout<<"3. DUB - 787 "<<endl;
                    cout<<"\t12-02-2022 11:00 AM 9hrs Rs.13000"<<endl;
                    cout<<"4. DUB - 555"<<endl;
                    cout<<"\t07-04-2022 12:00 AM 10hrs Rs.18000"<<endl;

                    cout<<"\nSelect the flight you want to book :"<<endl;
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=14000;
                        cout<<"\nYou have successfully book flight DUB - 498"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=10000;
                        cout<<"\nYou have successfully book flight DUB - 668"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=13000;
                        cout<<"\nYou have successfully book flight DUB - 787"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==4){
                        charges=18000;
                        cout<<"\nYou have successfully book flight DUB - 555"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid Input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main Menu"<<endl;
                    cin>>back;
                    
                    if(back==1){
                        mainMenu();
                    }
                    else {
                        mainMenu();
                    }
                       break;
                }

                case 2:
                {
                    cout<<"_______________________Welcome to London Airlines______________\n"<<endl;

                    cout<<"Your comfort is our utmost priority, Enhoy the journey!"<<endl;
                    cout<<"Following are the flights \n"<<endl;
                    cout<<"1. LON - 298"<<endl;
                    cout<<"\t08-01-2022 9:00 AM 12hrs Rs.14000"<<endl;
                    cout<<"2. LON - 648"<<endl;
                    cout<<"\t09-01-2022 4:00AM 12hrs Rs.10000"<<endl;
                    cout<<"3. LON - 767 "<<endl;
                    cout<<"\t12-02-2022 11:00 AM 9hrs Rs.13000"<<endl;
                    cout<<"4. LON - 557"<<endl;
                    cout<<"\t012-04-2022 7:00 AM 10hrs Rs.18000"<<endl;

                    cout<<"\nSelect the flight you want to book :"<<endl;
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=14000;
                        cout<<"\nYou have successfully book flight LON - 298"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=10000;
                        cout<<"\nYou have successfully book flight LON - 648"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=13000;
                        cout<<"\nYou have successfully book flight LON - 767"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1==4){
                        charges=18000;
                        cout<<"\nYou have successfully book flight LON - 557"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid Input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main Menu"<<endl;
                    cin>>back;
                    
                    if(back==1){
                        mainMenu();
                    }
                    else {
                        mainMenu();
                    }
                   break;
                }

                case 3:
                {
                    cout<<"_______________________Welcome to Dublin Airlines______________\n"<<endl;

                    cout<<"Your comfort is our utmost priority, Enhoy the journey!"<<endl;
                    cout<<"Following are the flights \n"<<endl;
                    cout<<"1. IRE - 298"<<endl;
                    cout<<"\t04-01-2022 9:00 AM 12hrs Rs.20000"<<endl;
                    
                    

                    cout<<"\nSelect the flight you want to book :"<<endl;
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=20000;
                        cout<<"\nYou have successfully book flight IRE - 298"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                   
                    else{
                        cout<<"Invalid Input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main Menu"<<endl;
                    cin>>back;
                    
                    if(back==1){
                        mainMenu();
                    }
                    else {
                        mainMenu();
                    }
                    break;
                }

                case 4:
                {
                    cout<<"_______________________Welcome to Washington Airlines______________\n"<<endl;

                    cout<<"Your comfort is our utmost priority, Enhoy the journey!"<<endl;
                    cout<<"Following are the flights \n"<<endl;
                    cout<<"1. WAS - 100"<<endl;
                    cout<<"\t09-09-2022 11:00 AM 5hrs Rs.22000"<<endl;
                    
                    

                    cout<<"\nSelect the flight you want to book :"<<endl;
                    cin>>choice1;

                    if(choice1==1)
                    {
                        charges=22000;
                        cout<<"\nYou have successfully book flight WAS - 100"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                   
                    else{
                        cout<<"Invalid Input , shifting to the previous menu"<<endl;
                        flights();
                    }

                    cout<<"Press any key to go back to the main Menu"<<endl;
                    cin>>back;
                    
                    if(back==1){
                        mainMenu();
                    }
                    else {
                        mainMenu();
                    }
                  break;
                }

                default:
                {
                    cout<<"Invalid Input, Shifting to the main Menu :"<<endl;
                    mainMenu();
                    
                }




                

            }
        }
};

float Registration::charges;
int Registration::choice;


class ticket:public Registration,Details{
    public:

    void Bill(){
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"__________AirOne Airlines______________"<<endl;
            outf<<"______________Ticket___________________"<<endl;
            outf<<"_______________________________________"<<endl;

            outf<<"Customer ID: "<<Details::cID<<endl;
            outf<<"Customer Name"<<Details::FirstName<<" "<<Details::LastName<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"Description"<<endl<<endl;

            if(Registration::choice==1){
                destination="Dubai";
            }
            else if(Registration::choice==2){
                destination="London";
            }
            else if(Registration::choice==3){
                destination="Dublin";

            }
            else if(Registration::choice==4){
                destination="Washington";
            }
            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"flight cost :\t\t"<<Registration::charges<<endl;
        }
        outf.close();
    }

    void display(){
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"File error!"<<endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }

        }
        ifs.close();
    }


};


void mainMenu(){

    int lchoice;
    int schoice;
    int back;

    cout<<"\t              AirOne Airlines\n"<<endl;
    cout<<"\t_________________Main Menu_______________________"<<endl;

    cout<<"\t_________________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;

    cout<<"\t|\t Press 1 to add the Customer Details   \t|"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration       \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges        \t|"<<endl;
    cout<<"\t|\t Press 4 to Exit                       \t|"<<endl;
    
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t|_______________________________________________|"<<endl;

    cout<<"Enter your Choice : "<<endl;
    cin>>lchoice;

    Details d;
    Registration r;
    ticket t;

    switch(lchoice){
        case 1:
        {
            cout<<"__________Customers____________\n"<<endl;
            d.Information();
            cout<<"Press 1 to go back to the Main Menu";
            cin>>back;

            if(back==1){
                mainMenu();
            }

            else {
                mainMenu(); 
            }
            break;
        }

        case 2:
        {
            cout<<"__________Book a flight using this system____________\n"<<endl;
            r.flights();
            break;
        }

        case 3:
        {
            cout<<"__________GET YOUR TICKET____________\n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket";

            cin>>back;

                    if(back==1)
                    {
                        t.display();
                        cout<<"Press 1 or 0 to go back to main menu:"<<endl;

                        cin>>back;
                        if(back==1){
                            mainMenu();
                        }
                        else {
                            mainMenu();
                        }
                    }
                    else {
                        mainMenu();
                    }
                    break;
        }

        case 4:
        {
            cout<<"\n\n\t___________Thank you!!____________"<<endl;
            break;
        }

        default:
        {
            cout<<"Invalid Input,Please try again!\n"<<endl;
            mainMenu();
            break;
        }

    }
}

int main(){
    Management Mobj;

    return 0;
}
